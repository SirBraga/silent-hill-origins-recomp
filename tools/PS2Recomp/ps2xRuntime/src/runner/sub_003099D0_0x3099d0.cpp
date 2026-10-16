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

// Function: sub_003099D0
// Address: 0x3099d0 - 0x309a18
void sub_003099D0_0x3099d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003099D0_0x3099d0");
#endif

    switch (ctx->pc) {
        case 0x3099d0u: goto label_3099d0;
        case 0x3099d4u: goto label_3099d4;
        case 0x3099d8u: goto label_3099d8;
        case 0x3099dcu: goto label_3099dc;
        case 0x3099e0u: goto label_3099e0;
        case 0x3099e4u: goto label_3099e4;
        case 0x3099e8u: goto label_3099e8;
        case 0x3099ecu: goto label_3099ec;
        case 0x3099f0u: goto label_3099f0;
        case 0x3099f4u: goto label_3099f4;
        case 0x3099f8u: goto label_3099f8;
        case 0x3099fcu: goto label_3099fc;
        case 0x309a00u: goto label_309a00;
        case 0x309a04u: goto label_309a04;
        case 0x309a08u: goto label_309a08;
        case 0x309a0cu: goto label_309a0c;
        case 0x309a10u: goto label_309a10;
        case 0x309a14u: goto label_309a14;
        default: break;
    }

    ctx->pc = 0x3099d0u;

label_3099d0:
    // 0x3099d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3099d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3099d4:
    // 0x3099d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3099d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3099d8:
    // 0x3099d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3099d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3099dc:
    // 0x3099dc: 0xc0c2686  jal         func_309A18
label_3099e0:
    if (ctx->pc == 0x3099E0u) {
        ctx->pc = 0x3099E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3099DCu;
        // 0x3099e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3099E4u;
        goto label_3099e4;
    }
    ctx->pc = 0x3099DCu;
    SET_GPR_U32(ctx, 31, 0x3099E4u);
    ctx->pc = 0x3099E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3099DCu;
    // 0x3099e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309A18u, 0x3099DCu, 0x3099E4u)) {
        return;
    }
    ctx->pc = 0x3099E4u;
label_3099e4:
    // 0x3099e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3099e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3099e8:
    // 0x3099e8: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_3099ec:
    if (ctx->pc == 0x3099ECu) {
        ctx->pc = 0x3099ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3099E8u;
        // 0x3099ec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3099F0u;
        goto label_3099f0;
    }
    ctx->pc = 0x3099E8u;
    {
        const bool branch_taken_0x3099e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3099e8) {
            ctx->pc = 0x3099ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3099E8u;
            // 0x3099ec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309A04u;
            goto label_309a04;
        }
    }
    ctx->pc = 0x3099F0u;
label_3099f0:
    // 0x3099f0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x3099f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_3099f4:
    // 0x3099f4: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x3099f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_3099f8:
    // 0x3099f8: 0x40f809  jalr        $v0
label_3099fc:
    if (ctx->pc == 0x3099FCu) {
        ctx->pc = 0x3099FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3099F8u;
        // 0x3099fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309A00u;
        goto label_309a00;
    }
    ctx->pc = 0x3099F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x309A00u);
        ctx->pc = 0x3099FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3099F8u;
        // 0x3099fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3099F8u, 0x309A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x309A00u;
label_309a00:
    // 0x309a00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x309a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_309a04:
    // 0x309a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309a08:
    // 0x309a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x309a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_309a0c:
    // 0x309a0c: 0x3e00008  jr          $ra
label_309a10:
    if (ctx->pc == 0x309A10u) {
        ctx->pc = 0x309A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A0Cu;
        // 0x309a10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309A14u;
        goto label_309a14;
    }
    ctx->pc = 0x309A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A0Cu;
        // 0x309a10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309A14u;
label_309a14:
    // 0x309a14: 0x0  nop
    ctx->pc = 0x309a14u;
    // NOP
    ctx->pc = 0x309a18u;
}
