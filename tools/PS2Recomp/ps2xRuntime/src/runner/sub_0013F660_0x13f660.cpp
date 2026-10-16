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

// Function: sub_0013F660
// Address: 0x13f660 - 0x13f720
void sub_0013F660_0x13f660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F660_0x13f660");
#endif

    switch (ctx->pc) {
        case 0x13f688u: goto label_13f688;
        case 0x13f6acu: goto label_13f6ac;
        case 0x13f6bcu: goto label_13f6bc;
        case 0x13f6e0u: goto label_13f6e0;
        case 0x13f6f8u: goto label_13f6f8;
        case 0x13f708u: goto label_13f708;
        default: break;
    }

    ctx->pc = 0x13f660u;

    // 0x13f660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f664: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x13f664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13f668: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13f668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13f66c: 0x14a20026  bne         $a1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x13F66Cu;
    {
        const bool branch_taken_0x13f66c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F66Cu;
        // 0x13f670: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f66c) {
            ctx->pc = 0x13F708u;
            goto label_13f708;
        }
    }
    ctx->pc = 0x13F674u;
    // 0x13f674: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x13F674u;
    {
        const bool branch_taken_0x13f674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F674u;
        // 0x13f678: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f674) {
            ctx->pc = 0x13F6E8u;
            goto label_13f6e8;
        }
    }
    ctx->pc = 0x13F67Cu;
    // 0x13f67c: 0x26100780  addiu       $s0, $s0, 0x780
    ctx->pc = 0x13f67cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1920));
    // 0x13f680: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x13F680u;
    SET_GPR_U32(ctx, 31, 0x13F688u);
    ctx->pc = 0x13F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F680u;
    // 0x13f684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x13F680u, 0x13F688u)) {
        return;
    }
    ctx->pc = 0x13F688u;
label_13f688:
    // 0x13f688: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x13f688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13f68c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13f68cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13f690: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13f690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13f694: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13f694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f698: 0x24c6f720  addiu       $a2, $a2, -0x8E0
    ctx->pc = 0x13f698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965024));
    // 0x13f69c: 0xac624810  sw          $v0, 0x4810($v1)
    ctx->pc = 0x13f69cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4810u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4810u, _value); } while (0);
    // 0x13f6a0: 0x240700d8  addiu       $a3, $zero, 0xD8
    ctx->pc = 0x13f6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x13f6a4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x13F6A4u;
    SET_GPR_U32(ctx, 31, 0x13F6ACu);
    ctx->pc = 0x13F6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F6A4u;
    // 0x13f6a8: 0x24844818  addiu       $a0, $a0, 0x4818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x13F6A4u, 0x13F6ACu)) {
        return;
    }
    ctx->pc = 0x13F6ACu;
label_13f6ac:
    // 0x13f6ac: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x13f6acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x13f6b0: 0x26100790  addiu       $s0, $s0, 0x790
    ctx->pc = 0x13f6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1936));
    // 0x13f6b4: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x13F6B4u;
    SET_GPR_U32(ctx, 31, 0x13F6BCu);
    ctx->pc = 0x13F6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F6B4u;
    // 0x13f6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x13F6B4u, 0x13F6BCu)) {
        return;
    }
    ctx->pc = 0x13F6BCu;
label_13f6bc:
    // 0x13f6bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x13f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13f6c0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13f6c4: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13f6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13f6c8: 0xac62481c  sw          $v0, 0x481C($v1)
    ctx->pc = 0x13f6c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B481Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B481Cu, _value); } while (0);
    // 0x13f6cc: 0x24844820  addiu       $a0, $a0, 0x4820
    ctx->pc = 0x13f6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    // 0x13f6d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13f6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f6d4: 0x24c6f810  addiu       $a2, $a2, -0x7F0
    ctx->pc = 0x13f6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965264));
    // 0x13f6d8: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x13F6D8u;
    SET_GPR_U32(ctx, 31, 0x13F6E0u);
    ctx->pc = 0x13F6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F6D8u;
    // 0x13f6dc: 0x24070310  addiu       $a3, $zero, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x13F6D8u, 0x13F6E0u)) {
        return;
    }
    ctx->pc = 0x13F6E0u;
label_13f6e0:
    // 0x13f6e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13F6E0u;
    {
        const bool branch_taken_0x13f6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6E0u;
        // 0x13f6e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6e0) {
            ctx->pc = 0x13F70Cu;
            goto label_13f70c;
        }
    }
    ctx->pc = 0x13F6E8u;
label_13f6e8:
    // 0x13f6e8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13f6ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13f6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13f6f0: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x13F6F0u;
    SET_GPR_U32(ctx, 31, 0x13F6F8u);
    ctx->pc = 0x13F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F6F0u;
    // 0x13f6f4: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x13F6F0u, 0x13F6F8u)) {
        return;
    }
    ctx->pc = 0x13F6F8u;
label_13f6f8:
    // 0x13f6f8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13f6fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13f6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13f700: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x13F700u;
    SET_GPR_U32(ctx, 31, 0x13F708u);
    ctx->pc = 0x13F704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F700u;
    // 0x13f704: 0x24844818  addiu       $a0, $a0, 0x4818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x13F700u, 0x13F708u)) {
        return;
    }
    ctx->pc = 0x13F708u;
label_13f708:
    // 0x13f708: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13f708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13f70c:
    // 0x13f70c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f710: 0x3e00008  jr          $ra
    ctx->pc = 0x13F710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F710u;
        // 0x13f714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F718u;
    // 0x13f718: 0x0  nop
    ctx->pc = 0x13f718u;
    // NOP
    // 0x13f71c: 0x0  nop
    ctx->pc = 0x13f71cu;
    // NOP
    ctx->pc = 0x13f720u;
}
