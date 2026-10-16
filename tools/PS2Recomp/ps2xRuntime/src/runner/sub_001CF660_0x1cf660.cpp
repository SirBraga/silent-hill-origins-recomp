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

// Function: sub_001CF660
// Address: 0x1cf660 - 0x1cf710
void sub_001CF660_0x1cf660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF660_0x1cf660");
#endif

    switch (ctx->pc) {
        case 0x1cf660u: goto label_1cf660;
        case 0x1cf664u: goto label_1cf664;
        case 0x1cf668u: goto label_1cf668;
        case 0x1cf66cu: goto label_1cf66c;
        case 0x1cf670u: goto label_1cf670;
        case 0x1cf674u: goto label_1cf674;
        case 0x1cf678u: goto label_1cf678;
        case 0x1cf67cu: goto label_1cf67c;
        case 0x1cf680u: goto label_1cf680;
        case 0x1cf684u: goto label_1cf684;
        case 0x1cf688u: goto label_1cf688;
        case 0x1cf68cu: goto label_1cf68c;
        case 0x1cf690u: goto label_1cf690;
        case 0x1cf694u: goto label_1cf694;
        case 0x1cf698u: goto label_1cf698;
        case 0x1cf69cu: goto label_1cf69c;
        case 0x1cf6a0u: goto label_1cf6a0;
        case 0x1cf6a4u: goto label_1cf6a4;
        case 0x1cf6a8u: goto label_1cf6a8;
        case 0x1cf6acu: goto label_1cf6ac;
        case 0x1cf6b0u: goto label_1cf6b0;
        case 0x1cf6b4u: goto label_1cf6b4;
        case 0x1cf6b8u: goto label_1cf6b8;
        case 0x1cf6bcu: goto label_1cf6bc;
        case 0x1cf6c0u: goto label_1cf6c0;
        case 0x1cf6c4u: goto label_1cf6c4;
        case 0x1cf6c8u: goto label_1cf6c8;
        case 0x1cf6ccu: goto label_1cf6cc;
        case 0x1cf6d0u: goto label_1cf6d0;
        case 0x1cf6d4u: goto label_1cf6d4;
        case 0x1cf6d8u: goto label_1cf6d8;
        case 0x1cf6dcu: goto label_1cf6dc;
        case 0x1cf6e0u: goto label_1cf6e0;
        case 0x1cf6e4u: goto label_1cf6e4;
        case 0x1cf6e8u: goto label_1cf6e8;
        case 0x1cf6ecu: goto label_1cf6ec;
        case 0x1cf6f0u: goto label_1cf6f0;
        case 0x1cf6f4u: goto label_1cf6f4;
        case 0x1cf6f8u: goto label_1cf6f8;
        case 0x1cf6fcu: goto label_1cf6fc;
        case 0x1cf700u: goto label_1cf700;
        case 0x1cf704u: goto label_1cf704;
        case 0x1cf708u: goto label_1cf708;
        case 0x1cf70cu: goto label_1cf70c;
        default: break;
    }

    ctx->pc = 0x1cf660u;

label_1cf660:
    // 0x1cf660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cf664:
    // 0x1cf664: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cf664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1cf668:
    // 0x1cf668: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cf668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cf66c:
    // 0x1cf66c: 0x244607f8  addiu       $a2, $v0, 0x7F8
    ctx->pc = 0x1cf66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2040));
label_1cf670:
    // 0x1cf670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cf674:
    // 0x1cf674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cf678:
    // 0x1cf678: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf67c:
    // 0x1cf67c: 0x26040290  addiu       $a0, $s0, 0x290
    ctx->pc = 0x1cf67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_1cf680:
    // 0x1cf680: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cf680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cf684:
    // 0x1cf684: 0x0  nop
    ctx->pc = 0x1cf684u;
    // NOP
label_1cf688:
    // 0x1cf688: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cf688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cf68c:
    // 0x1cf68c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1cf68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1cf690:
    // 0x1cf690: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1cf690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1cf694:
    // 0x1cf694: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1cf694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1cf698:
    // 0x1cf698: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1cf698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1cf69c:
    // 0x1cf69c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1cf69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1cf6a0:
    // 0x1cf6a0: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
label_1cf6a4:
    if (ctx->pc == 0x1CF6A4u) {
        ctx->pc = 0x1CF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6A0u;
        // 0x1cf6a4: 0x2380b  movn        $a3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF6A8u;
        goto label_1cf6a8;
    }
    ctx->pc = 0x1CF6A0u;
    {
        const bool branch_taken_0x1cf6a0 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1CF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6A0u;
        // 0x1cf6a4: 0x2380b  movn        $a3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6a0) {
            ctx->pc = 0x1CF688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf688;
        }
    }
    ctx->pc = 0x1CF6A8u;
label_1cf6a8:
    // 0x1cf6a8: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
label_1cf6ac:
    if (ctx->pc == 0x1CF6ACu) {
        ctx->pc = 0x1CF6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6A8u;
        // 0x1cf6ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF6B0u;
        goto label_1cf6b0;
    }
    ctx->pc = 0x1CF6A8u;
    {
        const bool branch_taken_0x1cf6a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6A8u;
        // 0x1cf6ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6a8) {
            ctx->pc = 0x1CF6DCu;
            goto label_1cf6dc;
        }
    }
    ctx->pc = 0x1CF6B0u;
label_1cf6b0:
    // 0x1cf6b0: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1cf6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1cf6b4:
    // 0x1cf6b4: 0xae030284  sw          $v1, 0x284($s0)
    ctx->pc = 0x1cf6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 3));
label_1cf6b8:
    // 0x1cf6b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cf6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cf6bc:
    // 0x1cf6bc: 0xae03027c  sw          $v1, 0x27C($s0)
    ctx->pc = 0x1cf6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 3));
label_1cf6c0:
    // 0x1cf6c0: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cf6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cf6c4:
    // 0x1cf6c4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cf6c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cf6c8:
    // 0x1cf6c8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cf6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cf6cc:
    // 0x1cf6cc: 0x60f809  jalr        $v1
label_1cf6d0:
    if (ctx->pc == 0x1CF6D0u) {
        ctx->pc = 0x1CF6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6CCu;
        // 0x1cf6d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF6D4u;
        goto label_1cf6d4;
    }
    ctx->pc = 0x1CF6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CF6D4u);
        ctx->pc = 0x1CF6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6CCu;
        // 0x1cf6d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF6CCu, 0x1CF6D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF6D4u;
label_1cf6d4:
    // 0x1cf6d4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1cf6d8:
    if (ctx->pc == 0x1CF6D8u) {
        ctx->pc = 0x1CF6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6D4u;
        // 0x1cf6d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF6DCu;
        goto label_1cf6dc;
    }
    ctx->pc = 0x1CF6D4u;
    {
        const bool branch_taken_0x1cf6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6D4u;
        // 0x1cf6d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6d4) {
            ctx->pc = 0x1CF704u;
            goto label_1cf704;
        }
    }
    ctx->pc = 0x1CF6DCu;
label_1cf6dc:
    // 0x1cf6dc: 0xc073dc4  jal         func_1CF710
label_1cf6e0:
    if (ctx->pc == 0x1CF6E0u) {
        ctx->pc = 0x1CF6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6DCu;
        // 0x1cf6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF6E4u;
        goto label_1cf6e4;
    }
    ctx->pc = 0x1CF6DCu;
    SET_GPR_U32(ctx, 31, 0x1CF6E4u);
    ctx->pc = 0x1CF6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF6DCu;
    // 0x1cf6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CF710u, 0x1CF6DCu, 0x1CF6E4u)) {
        return;
    }
    ctx->pc = 0x1CF6E4u;
label_1cf6e4:
    // 0x1cf6e4: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1cf6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1cf6e8:
    // 0x1cf6e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cf6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cf6ec:
    // 0x1cf6ec: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cf6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cf6f0:
    // 0x1cf6f0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cf6f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cf6f4:
    // 0x1cf6f4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cf6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cf6f8:
    // 0x1cf6f8: 0x60f809  jalr        $v1
label_1cf6fc:
    if (ctx->pc == 0x1CF6FCu) {
        ctx->pc = 0x1CF6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6F8u;
        // 0x1cf6fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF700u;
        goto label_1cf700;
    }
    ctx->pc = 0x1CF6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CF700u);
        ctx->pc = 0x1CF6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6F8u;
        // 0x1cf6fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF6F8u, 0x1CF700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF700u;
label_1cf700:
    // 0x1cf700: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cf700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cf704:
    // 0x1cf704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cf708:
    // 0x1cf708: 0x3e00008  jr          $ra
label_1cf70c:
    if (ctx->pc == 0x1CF70Cu) {
        ctx->pc = 0x1CF70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF708u;
        // 0x1cf70c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF710u;
        goto label_fallthrough_0x1cf708;
    }
    ctx->pc = 0x1CF708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF708u;
        // 0x1cf70c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cf708:
    ctx->pc = 0x1CF710u;
}
