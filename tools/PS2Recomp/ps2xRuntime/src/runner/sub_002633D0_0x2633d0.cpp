#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002633D0
// Address: 0x2633d0 - 0x263458
void sub_002633D0_0x2633d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002633D0_0x2633d0");
#endif

    switch (ctx->pc) {
        case 0x263424u: goto label_263424;
        default: break;
    }

    ctx->pc = 0x2633d0u;

    // 0x2633d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2633d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2633d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2633d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2633d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2633d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2633dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2633dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2633e0: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x2633e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2633e4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2633E4u;
    {
        const bool branch_taken_0x2633e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2633E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2633E4u;
        // 0x2633e8: 0x8f829144  lw          $v0, -0x6EBC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2633e4) {
            ctx->pc = 0x263438u;
            goto label_263438;
        }
    }
    ctx->pc = 0x2633ECu;
    // 0x2633ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2633ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2633f0: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x2633f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2633f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2633f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2633f8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2633F8u;
    {
        const bool branch_taken_0x2633f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2633f8) {
            ctx->pc = 0x2633FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2633F8u;
            // 0x2633fc: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263418u;
            goto label_263418;
        }
    }
    ctx->pc = 0x263400u;
    // 0x263400: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x263400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x263404: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x263404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263408: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x263408u;
    {
        const bool branch_taken_0x263408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x263408) {
            ctx->pc = 0x26340Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263408u;
            // 0x26340c: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263418u;
            goto label_263418;
        }
    }
    ctx->pc = 0x263410u;
    // 0x263410: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x263410u;
    {
        const bool branch_taken_0x263410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263410u;
        // 0x263414: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263410) {
            ctx->pc = 0x263424u;
            goto label_263424;
        }
    }
    ctx->pc = 0x263418u;
label_263418:
    // 0x263418: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x263418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x26341c: 0xc0993a4  jal         func_264E90
    ctx->pc = 0x26341Cu;
    SET_GPR_U32(ctx, 31, 0x263424u);
    ctx->pc = 0x263420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26341Cu;
    // 0x263420: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x264E90u, 0x26341Cu, 0x263424u)) {
        return;
    }
    ctx->pc = 0x263424u;
label_263424:
    // 0x263424: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x263424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263428: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263428u;
    {
        const bool branch_taken_0x263428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263428u;
        // 0x26342c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263428) {
            ctx->pc = 0x263444u;
            goto label_263444;
        }
    }
    ctx->pc = 0x263430u;
    // 0x263430: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x263430u;
    {
        const bool branch_taken_0x263430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263430u;
        // 0x263434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263430) {
            ctx->pc = 0x263444u;
            goto label_263444;
        }
    }
    ctx->pc = 0x263438u;
label_263438:
    // 0x263438: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x263438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26343c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x26343cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x263440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x263440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_263444:
    // 0x263444: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x263444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26344c: 0x3e00008  jr          $ra
    ctx->pc = 0x26344Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26344Cu;
        // 0x263450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26344Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263454u;
    // 0x263454: 0x0  nop
    ctx->pc = 0x263454u;
    // NOP
    ctx->pc = 0x263458u;
}
