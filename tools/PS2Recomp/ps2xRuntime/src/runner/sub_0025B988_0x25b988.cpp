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

// Function: sub_0025B988
// Address: 0x25b988 - 0x25bc40
void sub_0025B988_0x25b988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B988_0x25b988");
#endif

    switch (ctx->pc) {
        case 0x25b988u: goto label_25b988;
        case 0x25b98cu: goto label_25b98c;
        case 0x25b990u: goto label_25b990;
        case 0x25b994u: goto label_25b994;
        case 0x25b998u: goto label_25b998;
        case 0x25b99cu: goto label_25b99c;
        case 0x25b9a0u: goto label_25b9a0;
        case 0x25b9a4u: goto label_25b9a4;
        case 0x25b9a8u: goto label_25b9a8;
        case 0x25b9acu: goto label_25b9ac;
        case 0x25b9b0u: goto label_25b9b0;
        case 0x25b9b4u: goto label_25b9b4;
        case 0x25b9b8u: goto label_25b9b8;
        case 0x25b9bcu: goto label_25b9bc;
        case 0x25b9c0u: goto label_25b9c0;
        case 0x25b9c4u: goto label_25b9c4;
        case 0x25b9c8u: goto label_25b9c8;
        case 0x25b9ccu: goto label_25b9cc;
        case 0x25b9d0u: goto label_25b9d0;
        case 0x25b9d4u: goto label_25b9d4;
        case 0x25b9d8u: goto label_25b9d8;
        case 0x25b9dcu: goto label_25b9dc;
        case 0x25b9e0u: goto label_25b9e0;
        case 0x25b9e4u: goto label_25b9e4;
        case 0x25b9e8u: goto label_25b9e8;
        case 0x25b9ecu: goto label_25b9ec;
        case 0x25b9f0u: goto label_25b9f0;
        case 0x25b9f4u: goto label_25b9f4;
        case 0x25b9f8u: goto label_25b9f8;
        case 0x25b9fcu: goto label_25b9fc;
        case 0x25ba00u: goto label_25ba00;
        case 0x25ba04u: goto label_25ba04;
        case 0x25ba08u: goto label_25ba08;
        case 0x25ba0cu: goto label_25ba0c;
        case 0x25ba10u: goto label_25ba10;
        case 0x25ba14u: goto label_25ba14;
        case 0x25ba18u: goto label_25ba18;
        case 0x25ba1cu: goto label_25ba1c;
        case 0x25ba20u: goto label_25ba20;
        case 0x25ba24u: goto label_25ba24;
        case 0x25ba28u: goto label_25ba28;
        case 0x25ba2cu: goto label_25ba2c;
        case 0x25ba30u: goto label_25ba30;
        case 0x25ba34u: goto label_25ba34;
        case 0x25ba38u: goto label_25ba38;
        case 0x25ba3cu: goto label_25ba3c;
        case 0x25ba40u: goto label_25ba40;
        case 0x25ba44u: goto label_25ba44;
        case 0x25ba48u: goto label_25ba48;
        case 0x25ba4cu: goto label_25ba4c;
        case 0x25ba50u: goto label_25ba50;
        case 0x25ba54u: goto label_25ba54;
        case 0x25ba58u: goto label_25ba58;
        case 0x25ba5cu: goto label_25ba5c;
        case 0x25ba60u: goto label_25ba60;
        case 0x25ba64u: goto label_25ba64;
        case 0x25ba68u: goto label_25ba68;
        case 0x25ba6cu: goto label_25ba6c;
        case 0x25ba70u: goto label_25ba70;
        case 0x25ba74u: goto label_25ba74;
        case 0x25ba78u: goto label_25ba78;
        case 0x25ba7cu: goto label_25ba7c;
        case 0x25ba80u: goto label_25ba80;
        case 0x25ba84u: goto label_25ba84;
        case 0x25ba88u: goto label_25ba88;
        case 0x25ba8cu: goto label_25ba8c;
        case 0x25ba90u: goto label_25ba90;
        case 0x25ba94u: goto label_25ba94;
        case 0x25ba98u: goto label_25ba98;
        case 0x25ba9cu: goto label_25ba9c;
        case 0x25baa0u: goto label_25baa0;
        case 0x25baa4u: goto label_25baa4;
        case 0x25baa8u: goto label_25baa8;
        case 0x25baacu: goto label_25baac;
        case 0x25bab0u: goto label_25bab0;
        case 0x25bab4u: goto label_25bab4;
        case 0x25bab8u: goto label_25bab8;
        case 0x25babcu: goto label_25babc;
        case 0x25bac0u: goto label_25bac0;
        case 0x25bac4u: goto label_25bac4;
        case 0x25bac8u: goto label_25bac8;
        case 0x25baccu: goto label_25bacc;
        case 0x25bad0u: goto label_25bad0;
        case 0x25bad4u: goto label_25bad4;
        case 0x25bad8u: goto label_25bad8;
        case 0x25badcu: goto label_25badc;
        case 0x25bae0u: goto label_25bae0;
        case 0x25bae4u: goto label_25bae4;
        case 0x25bae8u: goto label_25bae8;
        case 0x25baecu: goto label_25baec;
        case 0x25baf0u: goto label_25baf0;
        case 0x25baf4u: goto label_25baf4;
        case 0x25baf8u: goto label_25baf8;
        case 0x25bafcu: goto label_25bafc;
        case 0x25bb00u: goto label_25bb00;
        case 0x25bb04u: goto label_25bb04;
        case 0x25bb08u: goto label_25bb08;
        case 0x25bb0cu: goto label_25bb0c;
        case 0x25bb10u: goto label_25bb10;
        case 0x25bb14u: goto label_25bb14;
        case 0x25bb18u: goto label_25bb18;
        case 0x25bb1cu: goto label_25bb1c;
        case 0x25bb20u: goto label_25bb20;
        case 0x25bb24u: goto label_25bb24;
        case 0x25bb28u: goto label_25bb28;
        case 0x25bb2cu: goto label_25bb2c;
        case 0x25bb30u: goto label_25bb30;
        case 0x25bb34u: goto label_25bb34;
        case 0x25bb38u: goto label_25bb38;
        case 0x25bb3cu: goto label_25bb3c;
        case 0x25bb40u: goto label_25bb40;
        case 0x25bb44u: goto label_25bb44;
        case 0x25bb48u: goto label_25bb48;
        case 0x25bb4cu: goto label_25bb4c;
        case 0x25bb50u: goto label_25bb50;
        case 0x25bb54u: goto label_25bb54;
        case 0x25bb58u: goto label_25bb58;
        case 0x25bb5cu: goto label_25bb5c;
        case 0x25bb60u: goto label_25bb60;
        case 0x25bb64u: goto label_25bb64;
        case 0x25bb68u: goto label_25bb68;
        case 0x25bb6cu: goto label_25bb6c;
        case 0x25bb70u: goto label_25bb70;
        case 0x25bb74u: goto label_25bb74;
        case 0x25bb78u: goto label_25bb78;
        case 0x25bb7cu: goto label_25bb7c;
        case 0x25bb80u: goto label_25bb80;
        case 0x25bb84u: goto label_25bb84;
        case 0x25bb88u: goto label_25bb88;
        case 0x25bb8cu: goto label_25bb8c;
        case 0x25bb90u: goto label_25bb90;
        case 0x25bb94u: goto label_25bb94;
        case 0x25bb98u: goto label_25bb98;
        case 0x25bb9cu: goto label_25bb9c;
        case 0x25bba0u: goto label_25bba0;
        case 0x25bba4u: goto label_25bba4;
        case 0x25bba8u: goto label_25bba8;
        case 0x25bbacu: goto label_25bbac;
        case 0x25bbb0u: goto label_25bbb0;
        case 0x25bbb4u: goto label_25bbb4;
        case 0x25bbb8u: goto label_25bbb8;
        case 0x25bbbcu: goto label_25bbbc;
        case 0x25bbc0u: goto label_25bbc0;
        case 0x25bbc4u: goto label_25bbc4;
        case 0x25bbc8u: goto label_25bbc8;
        case 0x25bbccu: goto label_25bbcc;
        case 0x25bbd0u: goto label_25bbd0;
        case 0x25bbd4u: goto label_25bbd4;
        case 0x25bbd8u: goto label_25bbd8;
        case 0x25bbdcu: goto label_25bbdc;
        case 0x25bbe0u: goto label_25bbe0;
        case 0x25bbe4u: goto label_25bbe4;
        case 0x25bbe8u: goto label_25bbe8;
        case 0x25bbecu: goto label_25bbec;
        case 0x25bbf0u: goto label_25bbf0;
        case 0x25bbf4u: goto label_25bbf4;
        case 0x25bbf8u: goto label_25bbf8;
        case 0x25bbfcu: goto label_25bbfc;
        case 0x25bc00u: goto label_25bc00;
        case 0x25bc04u: goto label_25bc04;
        case 0x25bc08u: goto label_25bc08;
        case 0x25bc0cu: goto label_25bc0c;
        case 0x25bc10u: goto label_25bc10;
        case 0x25bc14u: goto label_25bc14;
        case 0x25bc18u: goto label_25bc18;
        case 0x25bc1cu: goto label_25bc1c;
        case 0x25bc20u: goto label_25bc20;
        case 0x25bc24u: goto label_25bc24;
        case 0x25bc28u: goto label_25bc28;
        case 0x25bc2cu: goto label_25bc2c;
        case 0x25bc30u: goto label_25bc30;
        case 0x25bc34u: goto label_25bc34;
        case 0x25bc38u: goto label_25bc38;
        case 0x25bc3cu: goto label_25bc3c;
        default: break;
    }

    ctx->pc = 0x25b988u;

label_25b988:
    // 0x25b988: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x25b988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_25b98c:
    // 0x25b98c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x25b98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_25b990:
    // 0x25b990: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x25b990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_25b994:
    // 0x25b994: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25b994u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b998:
    // 0x25b998: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x25b998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_25b99c:
    // 0x25b99c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x25b99cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b9a0:
    // 0x25b9a0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x25b9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_25b9a4:
    // 0x25b9a4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x25b9a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b9a8:
    // 0x25b9a8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x25b9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_25b9ac:
    // 0x25b9ac: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x25b9acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25b9b0:
    // 0x25b9b0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x25b9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_25b9b4:
    // 0x25b9b4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x25b9b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25b9b8:
    // 0x25b9b8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x25b9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_25b9bc:
    // 0x25b9bc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x25b9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_25b9c0:
    // 0x25b9c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25b9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25b9c4:
    // 0x25b9c4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_25b9c8:
    // 0x25b9c8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x25b9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_25b9cc:
    // 0x25b9cc: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x25b9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_25b9d0:
    // 0x25b9d0: 0x1220007d  beqz        $s1, . + 4 + (0x7D << 2)
label_25b9d4:
    if (ctx->pc == 0x25B9D4u) {
        ctx->pc = 0x25B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9D0u;
        // 0x25b9d4: 0xafa70014  sw          $a3, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B9D8u;
        goto label_25b9d8;
    }
    ctx->pc = 0x25B9D0u;
    {
        const bool branch_taken_0x25b9d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9D0u;
        // 0x25b9d4: 0xafa70014  sw          $a3, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b9d0) {
            ctx->pc = 0x25BBC8u;
            goto label_25bbc8;
        }
    }
    ctx->pc = 0x25B9D8u;
label_25b9d8:
    // 0x25b9d8: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x25b9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_25b9dc:
    // 0x25b9dc: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x25b9dcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25b9e0:
    // 0x25b9e0: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x25b9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_25b9e4:
    // 0x25b9e4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x25b9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_25b9e8:
    // 0x25b9e8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x25b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_25b9ec:
    // 0x25b9ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25b9f0:
    // 0x25b9f0: 0x40f809  jalr        $v0
label_25b9f4:
    if (ctx->pc == 0x25B9F4u) {
        ctx->pc = 0x25B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9F0u;
        // 0x25b9f4: 0x34a50006  ori         $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B9F8u;
        goto label_25b9f8;
    }
    ctx->pc = 0x25B9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B9F8u);
        ctx->pc = 0x25B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B9F0u;
        // 0x25b9f4: 0x34a50006  ori         $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B9F0u, 0x25B9F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B9F8u;
label_25b9f8:
    // 0x25b9f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25b9f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b9fc:
    // 0x25b9fc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x25b9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_25ba00:
    // 0x25ba00: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x25ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_25ba04:
    // 0x25ba04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ba08:
    // 0x25ba08: 0x40f809  jalr        $v0
label_25ba0c:
    if (ctx->pc == 0x25BA0Cu) {
        ctx->pc = 0x25BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA08u;
        // 0x25ba0c: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA10u;
        goto label_25ba10;
    }
    ctx->pc = 0x25BA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BA10u);
        ctx->pc = 0x25BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA08u;
        // 0x25ba0c: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BA08u, 0x25BA10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BA10u;
label_25ba10:
    // 0x25ba10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25ba10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ba14:
    // 0x25ba14: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x25ba14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_25ba18:
    // 0x25ba18: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x25ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_25ba1c:
    // 0x25ba1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ba1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ba20:
    // 0x25ba20: 0x40f809  jalr        $v0
label_25ba24:
    if (ctx->pc == 0x25BA24u) {
        ctx->pc = 0x25BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA20u;
        // 0x25ba24: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA28u;
        goto label_25ba28;
    }
    ctx->pc = 0x25BA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BA28u);
        ctx->pc = 0x25BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA20u;
        // 0x25ba24: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BA20u, 0x25BA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BA28u;
label_25ba28:
    // 0x25ba28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25ba28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ba2c:
    // 0x25ba2c: 0x96e20084  lhu         $v0, 0x84($s7)
    ctx->pc = 0x25ba2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 132)));
label_25ba30:
    // 0x25ba30: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_25ba34:
    if (ctx->pc == 0x25BA34u) {
        ctx->pc = 0x25BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA30u;
        // 0x25ba34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA38u;
        goto label_25ba38;
    }
    ctx->pc = 0x25BA30u;
    {
        const bool branch_taken_0x25ba30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA30u;
        // 0x25ba34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba30) {
            ctx->pc = 0x25BB9Cu;
            goto label_25bb9c;
        }
    }
    ctx->pc = 0x25BA38u;
label_25ba38:
    // 0x25ba38: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x25ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_25ba3c:
    // 0x25ba3c: 0x0  nop
    ctx->pc = 0x25ba3cu;
    // NOP
label_25ba40:
    // 0x25ba40: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x25ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_25ba44:
    // 0x25ba44: 0x24900001  addiu       $s0, $a0, 0x1
    ctx->pc = 0x25ba44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_25ba48:
    // 0x25ba48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25ba48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ba4c:
    // 0x25ba4c: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x25ba4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25ba50:
    // 0x25ba50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25ba50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ba54:
    // 0x25ba54: 0x95020006  lhu         $v0, 0x6($t0)
    ctx->pc = 0x25ba54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_25ba58:
    // 0x25ba58: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x25ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_25ba5c:
    // 0x25ba5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25ba60:
    // 0x25ba60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25ba64:
    // 0x25ba64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x25ba64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25ba68:
    // 0x25ba68: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
label_25ba6c:
    if (ctx->pc == 0x25BA6Cu) {
        ctx->pc = 0x25BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA68u;
        // 0x25ba6c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA70u;
        goto label_25ba70;
    }
    ctx->pc = 0x25BA68u;
    {
        const bool branch_taken_0x25ba68 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA68u;
        // 0x25ba6c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba68) {
            ctx->pc = 0x25BAA0u;
            goto label_25baa0;
        }
    }
    ctx->pc = 0x25BA70u;
label_25ba70:
    // 0x25ba70: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25ba74:
    // 0x25ba74: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
label_25ba78:
    if (ctx->pc == 0x25BA78u) {
        ctx->pc = 0x25BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA74u;
        // 0x25ba78: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA7Cu;
        goto label_25ba7c;
    }
    ctx->pc = 0x25BA74u;
    {
        const bool branch_taken_0x25ba74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x25BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA74u;
        // 0x25ba78: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba74) {
            ctx->pc = 0x25BAA0u;
            goto label_25baa0;
        }
    }
    ctx->pc = 0x25BA7Cu;
label_25ba7c:
    // 0x25ba7c: 0x0  nop
    ctx->pc = 0x25ba7cu;
    // NOP
label_25ba80:
    // 0x25ba80: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x25ba80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_25ba84:
    // 0x25ba84: 0x156182b  sltu        $v1, $t2, $s6
    ctx->pc = 0x25ba84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_25ba88:
    // 0x25ba88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_25ba8c:
    if (ctx->pc == 0x25BA8Cu) {
        ctx->pc = 0x25BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA88u;
        // 0x25ba8c: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BA90u;
        goto label_25ba90;
    }
    ctx->pc = 0x25BA88u;
    {
        const bool branch_taken_0x25ba88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA88u;
        // 0x25ba8c: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba88) {
            ctx->pc = 0x25BAA0u;
            goto label_25baa0;
        }
    }
    ctx->pc = 0x25BA90u;
label_25ba90:
    // 0x25ba90: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x25ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_25ba94:
    // 0x25ba94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25ba98:
    // 0x25ba98: 0x1464fff9  bne         $v1, $a0, . + 4 + (-0x7 << 2)
label_25ba9c:
    if (ctx->pc == 0x25BA9Cu) {
        ctx->pc = 0x25BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA98u;
        // 0x25ba9c: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAA0u;
        goto label_25baa0;
    }
    ctx->pc = 0x25BA98u;
    {
        const bool branch_taken_0x25ba98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x25BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA98u;
        // 0x25ba9c: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ba98) {
            ctx->pc = 0x25BA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ba80;
        }
    }
    ctx->pc = 0x25BAA0u;
label_25baa0:
    // 0x25baa0: 0x15560005  bne         $t2, $s6, . + 4 + (0x5 << 2)
label_25baa4:
    if (ctx->pc == 0x25BAA4u) {
        ctx->pc = 0x25BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAA0u;
        // 0x25baa4: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAA8u;
        goto label_25baa8;
    }
    ctx->pc = 0x25BAA0u;
    {
        const bool branch_taken_0x25baa0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 22));
        ctx->pc = 0x25BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAA0u;
        // 0x25baa4: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25baa0) {
            ctx->pc = 0x25BAB8u;
            goto label_25bab8;
        }
    }
    ctx->pc = 0x25BAA8u;
label_25baa8:
    // 0x25baa8: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x25baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_25baac:
    // 0x25baac: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x25baacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_25bab0:
    // 0x25bab0: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x25bab0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25bab4:
    // 0x25bab4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x25bab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_25bab8:
    // 0x25bab8: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
label_25babc:
    if (ctx->pc == 0x25BABCu) {
        ctx->pc = 0x25BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAB8u;
        // 0x25babc: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAC0u;
        goto label_25bac0;
    }
    ctx->pc = 0x25BAB8u;
    {
        const bool branch_taken_0x25bab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bab8) {
            ctx->pc = 0x25BABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BAB8u;
            // 0x25babc: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BAC0u;
            goto label_25bac0;
        }
    }
    ctx->pc = 0x25BAC0u;
label_25bac0:
    // 0x25bac0: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_25bac4:
    if (ctx->pc == 0x25BAC4u) {
        ctx->pc = 0x25BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAC0u;
        // 0x25bac4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAC8u;
        goto label_25bac8;
    }
    ctx->pc = 0x25BAC0u;
    {
        const bool branch_taken_0x25bac0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAC0u;
        // 0x25bac4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bac0) {
            ctx->pc = 0x25BAF8u;
            goto label_25baf8;
        }
    }
    ctx->pc = 0x25BAC8u;
label_25bac8:
    // 0x25bac8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25bacc:
    // 0x25bacc: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
label_25bad0:
    if (ctx->pc == 0x25BAD0u) {
        ctx->pc = 0x25BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BACCu;
        // 0x25bad0: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAD4u;
        goto label_25bad4;
    }
    ctx->pc = 0x25BACCu;
    {
        const bool branch_taken_0x25bacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x25BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BACCu;
        // 0x25bad0: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bacc) {
            ctx->pc = 0x25BAF8u;
            goto label_25baf8;
        }
    }
    ctx->pc = 0x25BAD4u;
label_25bad4:
    // 0x25bad4: 0x0  nop
    ctx->pc = 0x25bad4u;
    // NOP
label_25bad8:
    // 0x25bad8: 0x304bffff  andi        $t3, $v0, 0xFFFF
    ctx->pc = 0x25bad8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_25badc:
    // 0x25badc: 0x175182b  sltu        $v1, $t3, $s5
    ctx->pc = 0x25badcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_25bae0:
    // 0x25bae0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_25bae4:
    if (ctx->pc == 0x25BAE4u) {
        ctx->pc = 0x25BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAE0u;
        // 0x25bae4: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAE8u;
        goto label_25bae8;
    }
    ctx->pc = 0x25BAE0u;
    {
        const bool branch_taken_0x25bae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAE0u;
        // 0x25bae4: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bae0) {
            ctx->pc = 0x25BAF8u;
            goto label_25baf8;
        }
    }
    ctx->pc = 0x25BAE8u;
label_25bae8:
    // 0x25bae8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_25baec:
    // 0x25baec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25baf0:
    // 0x25baf0: 0x1466fff9  bne         $v1, $a2, . + 4 + (-0x7 << 2)
label_25baf4:
    if (ctx->pc == 0x25BAF4u) {
        ctx->pc = 0x25BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAF0u;
        // 0x25baf4: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BAF8u;
        goto label_25baf8;
    }
    ctx->pc = 0x25BAF0u;
    {
        const bool branch_taken_0x25baf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x25BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAF0u;
        // 0x25baf4: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25baf0) {
            ctx->pc = 0x25BAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25bad8;
        }
    }
    ctx->pc = 0x25BAF8u;
label_25baf8:
    // 0x25baf8: 0x55750007  bnel        $t3, $s5, . + 4 + (0x7 << 2)
label_25bafc:
    if (ctx->pc == 0x25BAFCu) {
        ctx->pc = 0x25BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BAF8u;
        // 0x25bafc: 0x8ca60008  lw          $a2, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB00u;
        goto label_25bb00;
    }
    ctx->pc = 0x25BAF8u;
    {
        const bool branch_taken_0x25baf8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 21));
        if (branch_taken_0x25baf8) {
            ctx->pc = 0x25BAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BAF8u;
            // 0x25bafc: 0x8ca60008  lw          $a2, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BB18u;
            goto label_25bb18;
        }
    }
    ctx->pc = 0x25BB00u;
label_25bb00:
    // 0x25bb00: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x25bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_25bb04:
    // 0x25bb04: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x25bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_25bb08:
    // 0x25bb08: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_25bb0c:
    // 0x25bb0c: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x25bb0cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25bb10:
    // 0x25bb10: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x25bb10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_25bb14:
    // 0x25bb14: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x25bb14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_25bb18:
    // 0x25bb18: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_25bb1c:
    if (ctx->pc == 0x25BB1Cu) {
        ctx->pc = 0x25BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB18u;
        // 0x25bb1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB20u;
        goto label_25bb20;
    }
    ctx->pc = 0x25BB18u;
    {
        const bool branch_taken_0x25bb18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB18u;
        // 0x25bb1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb18) {
            ctx->pc = 0x25BB50u;
            goto label_25bb50;
        }
    }
    ctx->pc = 0x25BB20u;
label_25bb20:
    // 0x25bb20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25bb24:
    // 0x25bb24: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
label_25bb28:
    if (ctx->pc == 0x25BB28u) {
        ctx->pc = 0x25BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB24u;
        // 0x25bb28: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB2Cu;
        goto label_25bb2c;
    }
    ctx->pc = 0x25BB24u;
    {
        const bool branch_taken_0x25bb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x25BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB24u;
        // 0x25bb28: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb24) {
            ctx->pc = 0x25BB50u;
            goto label_25bb50;
        }
    }
    ctx->pc = 0x25BB2Cu;
label_25bb2c:
    // 0x25bb2c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x25bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_25bb30:
    // 0x25bb30: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x25bb30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_25bb34:
    // 0x25bb34: 0x94182b  sltu        $v1, $a0, $s4
    ctx->pc = 0x25bb34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_25bb38:
    // 0x25bb38: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_25bb3c:
    if (ctx->pc == 0x25BB3Cu) {
        ctx->pc = 0x25BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB38u;
        // 0x25bb3c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB40u;
        goto label_25bb40;
    }
    ctx->pc = 0x25BB38u;
    {
        const bool branch_taken_0x25bb38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB38u;
        // 0x25bb3c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb38) {
            ctx->pc = 0x25BB50u;
            goto label_25bb50;
        }
    }
    ctx->pc = 0x25BB40u;
label_25bb40:
    // 0x25bb40: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_25bb44:
    // 0x25bb44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25bb48:
    // 0x25bb48: 0x1467fff9  bne         $v1, $a3, . + 4 + (-0x7 << 2)
label_25bb4c:
    if (ctx->pc == 0x25BB4Cu) {
        ctx->pc = 0x25BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB48u;
        // 0x25bb4c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB50u;
        goto label_25bb50;
    }
    ctx->pc = 0x25BB48u;
    {
        const bool branch_taken_0x25bb48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x25BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB48u;
        // 0x25bb4c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bb48) {
            ctx->pc = 0x25BB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25bb30;
        }
    }
    ctx->pc = 0x25BB50u;
label_25bb50:
    // 0x25bb50: 0x54940007  bnel        $a0, $s4, . + 4 + (0x7 << 2)
label_25bb54:
    if (ctx->pc == 0x25BB54u) {
        ctx->pc = 0x25BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB50u;
        // 0x25bb54: 0x95090006  lhu         $t1, 0x6($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB58u;
        goto label_25bb58;
    }
    ctx->pc = 0x25BB50u;
    {
        const bool branch_taken_0x25bb50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x25bb50) {
            ctx->pc = 0x25BB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BB50u;
            // 0x25bb54: 0x95090006  lhu         $t1, 0x6($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BB70u;
            goto label_25bb70;
        }
    }
    ctx->pc = 0x25BB58u;
label_25bb58:
    // 0x25bb58: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x25bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25bb5c:
    // 0x25bb5c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x25bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_25bb60:
    // 0x25bb60: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_25bb64:
    // 0x25bb64: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x25bb64u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25bb68:
    // 0x25bb68: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x25bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_25bb6c:
    // 0x25bb6c: 0x95090006  lhu         $t1, 0x6($t0)
    ctx->pc = 0x25bb6cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_25bb70:
    // 0x25bb70: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x25bb70u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_25bb74:
    // 0x25bb74: 0x95070002  lhu         $a3, 0x2($t0)
    ctx->pc = 0x25bb74u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_25bb78:
    // 0x25bb78: 0x95080004  lhu         $t0, 0x4($t0)
    ctx->pc = 0x25bb78u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_25bb7c:
    // 0x25bb7c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_25bb80:
    // 0x25bb80: 0xc096278  jal         func_2589E0
label_25bb84:
    if (ctx->pc == 0x25BB84u) {
        ctx->pc = 0x25BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB80u;
        // 0x25bb84: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB88u;
        goto label_25bb88;
    }
    ctx->pc = 0x25BB80u;
    SET_GPR_U32(ctx, 31, 0x25BB88u);
    ctx->pc = 0x25BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BB80u;
    // 0x25bb84: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2589E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2589E0u, 0x25BB80u, 0x25BB88u)) {
        return;
    }
    ctx->pc = 0x25BB88u;
label_25bb88:
    // 0x25bb88: 0x96e30084  lhu         $v1, 0x84($s7)
    ctx->pc = 0x25bb88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 132)));
label_25bb8c:
    // 0x25bb8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25bb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25bb90:
    // 0x25bb90: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x25bb90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25bb94:
    // 0x25bb94: 0x5460ffaa  bnel        $v1, $zero, . + 4 + (-0x56 << 2)
label_25bb98:
    if (ctx->pc == 0x25BB98u) {
        ctx->pc = 0x25BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BB94u;
        // 0x25bb98: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BB9Cu;
        goto label_25bb9c;
    }
    ctx->pc = 0x25BB94u;
    {
        const bool branch_taken_0x25bb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bb94) {
            ctx->pc = 0x25BB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BB94u;
            // 0x25bb98: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ba40;
        }
    }
    ctx->pc = 0x25BB9Cu;
label_25bb9c:
    // 0x25bb9c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_25bba0:
    // 0x25bba0: 0x24500fc8  addiu       $s0, $v0, 0xFC8
    ctx->pc = 0x25bba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_25bba4:
    // 0x25bba4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x25bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_25bba8:
    // 0x25bba8: 0x40f809  jalr        $v0
label_25bbac:
    if (ctx->pc == 0x25BBACu) {
        ctx->pc = 0x25BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBA8u;
        // 0x25bbac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBB0u;
        goto label_25bbb0;
    }
    ctx->pc = 0x25BBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BBB0u);
        ctx->pc = 0x25BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBA8u;
        // 0x25bbac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BBA8u, 0x25BBB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BBB0u;
label_25bbb0:
    // 0x25bbb0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x25bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_25bbb4:
    // 0x25bbb4: 0x60f809  jalr        $v1
label_25bbb8:
    if (ctx->pc == 0x25BBB8u) {
        ctx->pc = 0x25BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBB4u;
        // 0x25bbb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBBCu;
        goto label_25bbbc;
    }
    ctx->pc = 0x25BBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25BBBCu);
        ctx->pc = 0x25BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBB4u;
        // 0x25bbb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BBB4u, 0x25BBBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BBBCu;
label_25bbbc:
    // 0x25bbbc: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x25bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_25bbc0:
    // 0x25bbc0: 0x40f809  jalr        $v0
label_25bbc4:
    if (ctx->pc == 0x25BBC4u) {
        ctx->pc = 0x25BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBC0u;
        // 0x25bbc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBC8u;
        goto label_25bbc8;
    }
    ctx->pc = 0x25BBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25BBC8u);
        ctx->pc = 0x25BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBC0u;
        // 0x25bbc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BBC0u, 0x25BBC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25BBC8u;
label_25bbc8:
    // 0x25bbc8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_25bbcc:
    // 0x25bbcc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x25bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_25bbd0:
    // 0x25bbd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25bbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25bbd4:
    // 0x25bbd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25bbd8:
    if (ctx->pc == 0x25BBD8u) {
        ctx->pc = 0x25BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBD4u;
        // 0x25bbd8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBDCu;
        goto label_25bbdc;
    }
    ctx->pc = 0x25BBD4u;
    {
        const bool branch_taken_0x25bbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBD4u;
        // 0x25bbd8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bbd4) {
            ctx->pc = 0x25BBECu;
            goto label_25bbec;
        }
    }
    ctx->pc = 0x25BBDCu;
label_25bbdc:
    // 0x25bbdc: 0xc096da6  jal         func_25B698
label_25bbe0:
    if (ctx->pc == 0x25BBE0u) {
        ctx->pc = 0x25BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBDCu;
        // 0x25bbe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBE4u;
        goto label_25bbe4;
    }
    ctx->pc = 0x25BBDCu;
    SET_GPR_U32(ctx, 31, 0x25BBE4u);
    ctx->pc = 0x25BBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BBDCu;
    // 0x25bbe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B698u, 0x25BBDCu, 0x25BBE4u)) {
        return;
    }
    ctx->pc = 0x25BBE4u;
label_25bbe4:
    // 0x25bbe4: 0x10000003  b           . + 4 + (0x3 << 2)
label_25bbe8:
    if (ctx->pc == 0x25BBE8u) {
        ctx->pc = 0x25BBECu;
        goto label_25bbec;
    }
    ctx->pc = 0x25BBE4u;
    {
        const bool branch_taken_0x25bbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bbe4) {
            ctx->pc = 0x25BBF4u;
            goto label_25bbf4;
        }
    }
    ctx->pc = 0x25BBECu;
label_25bbec:
    // 0x25bbec: 0xc096da6  jal         func_25B698
label_25bbf0:
    if (ctx->pc == 0x25BBF0u) {
        ctx->pc = 0x25BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBECu;
        // 0x25bbf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBF4u;
        goto label_25bbf4;
    }
    ctx->pc = 0x25BBECu;
    SET_GPR_U32(ctx, 31, 0x25BBF4u);
    ctx->pc = 0x25BBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BBECu;
    // 0x25bbf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B698u, 0x25BBECu, 0x25BBF4u)) {
        return;
    }
    ctx->pc = 0x25BBF4u;
label_25bbf4:
    // 0x25bbf4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_25bbf8:
    if (ctx->pc == 0x25BBF8u) {
        ctx->pc = 0x25BBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBF4u;
        // 0x25bbf8: 0xaee20078  sw          $v0, 0x78($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BBFCu;
        goto label_25bbfc;
    }
    ctx->pc = 0x25BBF4u;
    {
        const bool branch_taken_0x25bbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bbf4) {
            ctx->pc = 0x25BBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BBF4u;
            // 0x25bbf8: 0xaee20078  sw          $v0, 0x78($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 120), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BC0Cu;
            goto label_25bc0c;
        }
    }
    ctx->pc = 0x25BBFCu;
label_25bbfc:
    // 0x25bbfc: 0xc09624c  jal         func_258930
label_25bc00:
    if (ctx->pc == 0x25BC00u) {
        ctx->pc = 0x25BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BBFCu;
        // 0x25bc00: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC04u;
        goto label_25bc04;
    }
    ctx->pc = 0x25BBFCu;
    SET_GPR_U32(ctx, 31, 0x25BC04u);
    ctx->pc = 0x25BC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BBFCu;
    // 0x25bc00: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258930u, 0x25BBFCu, 0x25BC04u)) {
        return;
    }
    ctx->pc = 0x25BC04u;
label_25bc04:
    // 0x25bc04: 0x10000002  b           . + 4 + (0x2 << 2)
label_25bc08:
    if (ctx->pc == 0x25BC08u) {
        ctx->pc = 0x25BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC04u;
        // 0x25bc08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC0Cu;
        goto label_25bc0c;
    }
    ctx->pc = 0x25BC04u;
    {
        const bool branch_taken_0x25bc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC04u;
        // 0x25bc08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bc04) {
            ctx->pc = 0x25BC10u;
            goto label_25bc10;
        }
    }
    ctx->pc = 0x25BC0Cu;
label_25bc0c:
    // 0x25bc0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_25bc10:
    // 0x25bc10: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x25bc10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_25bc14:
    // 0x25bc14: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x25bc14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25bc18:
    // 0x25bc18: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x25bc18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25bc1c:
    // 0x25bc1c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x25bc1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25bc20:
    // 0x25bc20: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x25bc20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25bc24:
    // 0x25bc24: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x25bc24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25bc28:
    // 0x25bc28: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x25bc28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25bc2c:
    // 0x25bc2c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x25bc2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25bc30:
    // 0x25bc30: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x25bc30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25bc34:
    // 0x25bc34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25bc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25bc38:
    // 0x25bc38: 0x3e00008  jr          $ra
label_25bc3c:
    if (ctx->pc == 0x25BC3Cu) {
        ctx->pc = 0x25BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC38u;
        // 0x25bc3c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25BC40u;
        goto label_fallthrough_0x25bc38;
    }
    ctx->pc = 0x25BC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC38u;
        // 0x25bc3c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25bc38:
    ctx->pc = 0x25BC40u;
}
