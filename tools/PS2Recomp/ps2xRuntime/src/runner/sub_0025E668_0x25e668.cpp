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

// Function: sub_0025E668
// Address: 0x25e668 - 0x25e758
void sub_0025E668_0x25e668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E668_0x25e668");
#endif

    switch (ctx->pc) {
        case 0x25e6e8u: goto label_25e6e8;
        case 0x25e6fcu: goto label_25e6fc;
        case 0x25e710u: goto label_25e710;
        case 0x25e72cu: goto label_25e72c;
        case 0x25e738u: goto label_25e738;
        default: break;
    }

    ctx->pc = 0x25e668u;

    // 0x25e668: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25e668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25e66c: 0x8f828600  lw          $v0, -0x7A00($gp)
    ctx->pc = 0x25e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
    // 0x25e670: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x25e670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x25e674: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x25e674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x25e678: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25e678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e67c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25e67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25e680: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25e680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25e684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25e688: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x25e688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e68c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x25e68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25e690: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x25E690u;
    {
        const bool branch_taken_0x25e690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E690u;
        // 0x25e694: 0x26030020  addiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e690) {
            ctx->pc = 0x25E71Cu;
            goto label_25e71c;
        }
    }
    ctx->pc = 0x25E698u;
    // 0x25e698: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x25e698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x25e69c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25e6a0: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x25e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x25e6a4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x25e6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25e6a8: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x25e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x25e6ac: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E6ACu;
    {
        const bool branch_taken_0x25e6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25e6ac) {
            ctx->pc = 0x25E6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E6ACu;
            // 0x25e6b0: 0x8e070024  lw          $a3, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E6C0u;
            goto label_25e6c0;
        }
    }
    ctx->pc = 0x25E6B4u;
    // 0x25e6b4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x25e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25e6b8: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x25e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x25e6bc: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x25e6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_25e6c0:
    // 0x25e6c0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x25e6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x25e6c4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x25e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25e6c8: 0x24a5ddc0  addiu       $a1, $a1, -0x2240
    ctx->pc = 0x25e6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958528));
    // 0x25e6cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e6d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25e6d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e6d4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x25e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x25e6d8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x25e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25e6dc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x25e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x25e6e0: 0xc09545a  jal         func_255168
    ctx->pc = 0x25E6E0u;
    SET_GPR_U32(ctx, 31, 0x25E6E8u);
    ctx->pc = 0x25E6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E6E0u;
    // 0x25e6e4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x25E6E0u, 0x25E6E8u)) {
        return;
    }
    ctx->pc = 0x25E6E8u;
label_25e6e8:
    // 0x25e6e8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x25e6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x25e6ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e6f0: 0x24a5de38  addiu       $a1, $a1, -0x21C8
    ctx->pc = 0x25e6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958648));
    // 0x25e6f4: 0xc095498  jal         func_255260
    ctx->pc = 0x25E6F4u;
    SET_GPR_U32(ctx, 31, 0x25E6FCu);
    ctx->pc = 0x25E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E6F4u;
    // 0x25e6f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255260u, 0x25E6F4u, 0x25E6FCu)) {
        return;
    }
    ctx->pc = 0x25E6FCu;
label_25e6fc:
    // 0x25e6fc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x25e6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x25e700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e704: 0x24a5deb0  addiu       $a1, $a1, -0x2150
    ctx->pc = 0x25e704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958768));
    // 0x25e708: 0xc095478  jal         func_2551E0
    ctx->pc = 0x25E708u;
    SET_GPR_U32(ctx, 31, 0x25E710u);
    ctx->pc = 0x25E70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E708u;
    // 0x25e70c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2551E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2551E0u, 0x25E708u, 0x25E710u)) {
        return;
    }
    ctx->pc = 0x25E710u;
label_25e710:
    // 0x25e710: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x25e710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x25e714: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25E714u;
    {
        const bool branch_taken_0x25e714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E714u;
        // 0x25e718: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e714) {
            ctx->pc = 0x25E740u;
            goto label_25e740;
        }
    }
    ctx->pc = 0x25E71Cu;
label_25e71c:
    // 0x25e71c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25e720: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x25e720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25e724: 0xc092848  jal         func_24A120
    ctx->pc = 0x25E724u;
    SET_GPR_U32(ctx, 31, 0x25E72Cu);
    ctx->pc = 0x25E728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E724u;
    // 0x25e728: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x25E724u, 0x25E72Cu)) {
        return;
    }
    ctx->pc = 0x25E72Cu;
label_25e72c:
    // 0x25e72c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25e72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e730: 0xc09281a  jal         func_24A068
    ctx->pc = 0x25E730u;
    SET_GPR_U32(ctx, 31, 0x25E738u);
    ctx->pc = 0x25E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E730u;
    // 0x25e734: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x25E730u, 0x25E738u)) {
        return;
    }
    ctx->pc = 0x25E738u;
label_25e738:
    // 0x25e738: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25e738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e73c: 0x0  nop
    ctx->pc = 0x25e73cu;
    // NOP
label_25e740:
    // 0x25e740: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x25e740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e744: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x25e744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e748: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25e748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e74c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25e74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e750: 0x3e00008  jr          $ra
    ctx->pc = 0x25E750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E750u;
        // 0x25e754: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E758u;
}
