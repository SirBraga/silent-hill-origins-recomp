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

// Function: sub_002632B0
// Address: 0x2632b0 - 0x263338
void sub_002632B0_0x2632b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002632B0_0x2632b0");
#endif

    switch (ctx->pc) {
        case 0x263304u: goto label_263304;
        default: break;
    }

    ctx->pc = 0x2632b0u;

    // 0x2632b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2632b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2632b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2632b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2632b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2632b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2632bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2632bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2632c0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2632c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2632c4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2632C4u;
    {
        const bool branch_taken_0x2632c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2632C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2632C4u;
        // 0x2632c8: 0x8f829140  lw          $v0, -0x6EC0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2632c4) {
            ctx->pc = 0x263318u;
            goto label_263318;
        }
    }
    ctx->pc = 0x2632CCu;
    // 0x2632cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2632ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2632d0: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x2632d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2632d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2632d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2632d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2632D8u;
    {
        const bool branch_taken_0x2632d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2632d8) {
            ctx->pc = 0x2632DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2632D8u;
            // 0x2632dc: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2632F8u;
            goto label_2632f8;
        }
    }
    ctx->pc = 0x2632E0u;
    // 0x2632e0: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x2632e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2632e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2632e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2632e8: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2632E8u;
    {
        const bool branch_taken_0x2632e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2632e8) {
            ctx->pc = 0x2632ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2632E8u;
            // 0x2632ec: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2632F8u;
            goto label_2632f8;
        }
    }
    ctx->pc = 0x2632F0u;
    // 0x2632f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2632F0u;
    {
        const bool branch_taken_0x2632f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2632F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2632F0u;
        // 0x2632f4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2632f0) {
            ctx->pc = 0x263304u;
            goto label_263304;
        }
    }
    ctx->pc = 0x2632F8u;
label_2632f8:
    // 0x2632f8: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x2632f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2632fc: 0xc0993a4  jal         func_264E90
    ctx->pc = 0x2632FCu;
    SET_GPR_U32(ctx, 31, 0x263304u);
    ctx->pc = 0x263300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2632FCu;
    // 0x263300: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x264E90u, 0x2632FCu, 0x263304u)) {
        return;
    }
    ctx->pc = 0x263304u;
label_263304:
    // 0x263304: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x263304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263308: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263308u;
    {
        const bool branch_taken_0x263308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263308u;
        // 0x26330c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263308) {
            ctx->pc = 0x263324u;
            goto label_263324;
        }
    }
    ctx->pc = 0x263310u;
    // 0x263310: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x263310u;
    {
        const bool branch_taken_0x263310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263310u;
        // 0x263314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263310) {
            ctx->pc = 0x263324u;
            goto label_263324;
        }
    }
    ctx->pc = 0x263318u;
label_263318:
    // 0x263318: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x263318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26331c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x26331cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x263320: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x263320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_263324:
    // 0x263324: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x263324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26332c: 0x3e00008  jr          $ra
    ctx->pc = 0x26332Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26332Cu;
        // 0x263330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26332Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263334u;
    // 0x263334: 0x0  nop
    ctx->pc = 0x263334u;
    // NOP
    ctx->pc = 0x263338u;
}
