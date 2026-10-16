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

// Function: sub_001835D8
// Address: 0x1835d8 - 0x1836f8
void sub_001835D8_0x1835d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001835D8_0x1835d8");
#endif

    switch (ctx->pc) {
        case 0x183634u: goto label_183634;
        case 0x183648u: goto label_183648;
        case 0x183650u: goto label_183650;
        case 0x183658u: goto label_183658;
        case 0x183660u: goto label_183660;
        case 0x1836acu: goto label_1836ac;
        case 0x1836b4u: goto label_1836b4;
        case 0x1836c4u: goto label_1836c4;
        case 0x1836d0u: goto label_1836d0;
        default: break;
    }

    ctx->pc = 0x1835d8u;

    // 0x1835d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1835d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1835dc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1835dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1835e0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1835e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1835e4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1835e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1835e8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1835e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1835ec: 0x3c11006d  lui         $s1, 0x6D
    ctx->pc = 0x1835ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
    // 0x1835f0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1835f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1835f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1835f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835f8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1835f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1835fc: 0x24427fd0  addiu       $v0, $v0, 0x7FD0
    ctx->pc = 0x1835fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32720));
    // 0x183600: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x183600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x183604: 0x24637ff0  addiu       $v1, $v1, 0x7FF0
    ctx->pc = 0x183604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32752));
    // 0x183608: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x183608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18360c: 0x2631bd00  addiu       $s1, $s1, -0x4300
    ctx->pc = 0x18360cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950144));
    // 0x183610: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x183610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x183614: 0x26920038  addiu       $s2, $s4, 0x38
    ctx->pc = 0x183614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x183618: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x183618u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18361c: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x18361cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x183620: 0xae830034  sw          $v1, 0x34($s4)
    ctx->pc = 0x183620u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
    // 0x183624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x183624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183628: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x183628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18362c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x18362Cu;
    SET_GPR_U32(ctx, 31, 0x183634u);
    ctx->pc = 0x183630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18362Cu;
    // 0x183630: 0x3c13006d  lui         $s3, 0x6D (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)109 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x18362Cu, 0x183634u)) {
        return;
    }
    ctx->pc = 0x183634u;
label_183634:
    // 0x183634: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x183634u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x183638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x183638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18363c: 0x2610bcf0  addiu       $s0, $s0, -0x4310
    ctx->pc = 0x18363cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950128));
    // 0x183640: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x183640u;
    SET_GPR_U32(ctx, 31, 0x183648u);
    ctx->pc = 0x183644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183640u;
    // 0x183644: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x183640u, 0x183648u)) {
        return;
    }
    ctx->pc = 0x183648u;
label_183648:
    // 0x183648: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x183648u;
    SET_GPR_U32(ctx, 31, 0x183650u);
    ctx->pc = 0x18364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183648u;
    // 0x18364c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x183648u, 0x183650u)) {
        return;
    }
    ctx->pc = 0x183650u;
label_183650:
    // 0x183650: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x183650u;
    SET_GPR_U32(ctx, 31, 0x183658u);
    ctx->pc = 0x183654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183650u;
    // 0x183654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x183650u, 0x183658u)) {
        return;
    }
    ctx->pc = 0x183658u;
label_183658:
    // 0x183658: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x183658u;
    SET_GPR_U32(ctx, 31, 0x183660u);
    ctx->pc = 0x18365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183658u;
    // 0x18365c: 0x2664bcf8  addiu       $a0, $s3, -0x4308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x183658u, 0x183660u)) {
        return;
    }
    ctx->pc = 0x183660u;
label_183660:
    // 0x183660: 0x8e8200a0  lw          $v0, 0xA0($s4)
    ctx->pc = 0x183660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
    // 0x183664: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x183664u;
    {
        const bool branch_taken_0x183664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183664) {
            ctx->pc = 0x183668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183664u;
            // 0x183668: 0x8e82009c  lw          $v0, 0x9C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18367Cu;
            goto label_18367c;
        }
    }
    ctx->pc = 0x18366Cu;
    // 0x18366c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x18366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x183670: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x183670u;
    {
        const bool branch_taken_0x183670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183670) {
            ctx->pc = 0x183674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183670u;
            // 0x183674: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183678u;
            goto label_183678;
        }
    }
    ctx->pc = 0x183678u;
label_183678:
    // 0x183678: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x183678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_18367c:
    // 0x18367c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18367Cu;
    {
        const bool branch_taken_0x18367c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18367Cu;
        // 0x183680: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18367c) {
            ctx->pc = 0x1836C4u;
            goto label_1836c4;
        }
    }
    ctx->pc = 0x183684u;
    // 0x183684: 0x8e73bcf8  lw          $s3, -0x4308($s3)
    ctx->pc = 0x183684u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950136)));
    // 0x183688: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x183688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
    // 0x18368c: 0x12630007  beq         $s3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18368Cu;
    {
        const bool branch_taken_0x18368c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x183690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18368Cu;
        // 0x183690: 0x2685008c  addiu       $a1, $s4, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18368c) {
            ctx->pc = 0x1836ACu;
            goto label_1836ac;
        }
    }
    ctx->pc = 0x183694u;
    // 0x183694: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x183694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x183698: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183698u;
    {
        const bool branch_taken_0x183698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183698u;
        // 0x18369c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183698) {
            ctx->pc = 0x1836ACu;
            goto label_1836ac;
        }
    }
    ctx->pc = 0x1836A0u;
    // 0x1836a0: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1836a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x1836a4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1836A4u;
    SET_GPR_U32(ctx, 31, 0x1836ACu);
    ctx->pc = 0x1836A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1836A4u;
    // 0x1836a8: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1836A4u, 0x1836ACu)) {
        return;
    }
    ctx->pc = 0x1836ACu;
label_1836ac:
    // 0x1836ac: 0xc060fba  jal         func_183EE8
    ctx->pc = 0x1836ACu;
    SET_GPR_U32(ctx, 31, 0x1836B4u);
    ctx->pc = 0x1836B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1836ACu;
    // 0x1836b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183EE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x183EE8u, 0x1836ACu, 0x1836B4u)) {
        return;
    }
    ctx->pc = 0x1836B4u;
label_1836b4:
    // 0x1836b4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1836b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1836b8: 0x26840038  addiu       $a0, $s4, 0x38
    ctx->pc = 0x1836b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x1836bc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1836BCu;
    SET_GPR_U32(ctx, 31, 0x1836C4u);
    ctx->pc = 0x1836C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1836BCu;
    // 0x1836c0: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1836BCu, 0x1836C4u)) {
        return;
    }
    ctx->pc = 0x1836C4u;
label_1836c4:
    // 0x1836c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1836c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836c8: 0xc04465e  jal         func_111978
    ctx->pc = 0x1836C8u;
    SET_GPR_U32(ctx, 31, 0x1836D0u);
    ctx->pc = 0x1836CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1836C8u;
    // 0x1836cc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111978u, 0x1836C8u, 0x1836D0u)) {
        return;
    }
    ctx->pc = 0x1836D0u;
label_1836d0:
    // 0x1836d0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1836d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1836d4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1836d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1836d8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1836d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1836dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1836dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1836e0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1836e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1836e4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1836e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1836e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1836e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1836ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1836ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1836F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836ECu;
        // 0x1836f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1836ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1836F4u;
    // 0x1836f4: 0x0  nop
    ctx->pc = 0x1836f4u;
    // NOP
    ctx->pc = 0x1836f8u;
}
