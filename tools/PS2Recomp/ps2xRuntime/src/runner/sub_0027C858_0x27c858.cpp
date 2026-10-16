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

// Function: sub_0027C858
// Address: 0x27c858 - 0x27cc20
void sub_0027C858_0x27c858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C858_0x27c858");
#endif

    switch (ctx->pc) {
        case 0x27c8d0u: goto label_27c8d0;
        case 0x27c8dcu: goto label_27c8dc;
        case 0x27c8f0u: goto label_27c8f0;
        case 0x27c918u: goto label_27c918;
        case 0x27c934u: goto label_27c934;
        case 0x27c948u: goto label_27c948;
        case 0x27c954u: goto label_27c954;
        case 0x27c968u: goto label_27c968;
        case 0x27c9c0u: goto label_27c9c0;
        case 0x27c9e8u: goto label_27c9e8;
        case 0x27ca18u: goto label_27ca18;
        case 0x27ca24u: goto label_27ca24;
        case 0x27ca38u: goto label_27ca38;
        case 0x27ca90u: goto label_27ca90;
        case 0x27cab4u: goto label_27cab4;
        case 0x27cae0u: goto label_27cae0;
        case 0x27cb0cu: goto label_27cb0c;
        case 0x27cb80u: goto label_27cb80;
        case 0x27cbb4u: goto label_27cbb4;
        case 0x27cbc4u: goto label_27cbc4;
        case 0x27cc00u: goto label_27cc00;
        default: break;
    }

    ctx->pc = 0x27c858u;

    // 0x27c858: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x27c858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x27c85c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27c860: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x27c860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x27c864: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x27c864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x27c868: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27c868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c86c: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x27c86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x27c870: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27c870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c874: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x27c874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x27c878: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x27c878u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c87c: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x27c87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x27c880: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x27c880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x27c884: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x27c884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x27c888: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x27c888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x27c88c: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x27C88Cu;
    {
        const bool branch_taken_0x27c88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C88Cu;
        // 0x27c890: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c88c) {
            ctx->pc = 0x27C93Cu;
            goto label_27c93c;
        }
    }
    ctx->pc = 0x27C894u;
    // 0x27c894: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x27c894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27c898: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C898u;
    {
        const bool branch_taken_0x27c898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C898u;
        // 0x27c89c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c898) {
            ctx->pc = 0x27C8B0u;
            goto label_27c8b0;
        }
    }
    ctx->pc = 0x27C8A0u;
    // 0x27c8a0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27C8A0u;
    {
        const bool branch_taken_0x27c8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C8A0u;
        // 0x27c8a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c8a0) {
            ctx->pc = 0x27C8C4u;
            goto label_27c8c4;
        }
    }
    ctx->pc = 0x27C8A8u;
    // 0x27c8a8: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x27C8A8u;
    {
        const bool branch_taken_0x27c8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C8A8u;
        // 0x27c8ac: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c8a8) {
            ctx->pc = 0x27CABCu;
            goto label_27cabc;
        }
    }
    ctx->pc = 0x27C8B0u;
label_27c8b0:
    // 0x27c8b0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x27c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27c8b4: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x27C8B4u;
    {
        const bool branch_taken_0x27c8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C8B4u;
        // 0x27c8b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c8b4) {
            ctx->pc = 0x27C9E0u;
            goto label_27c9e0;
        }
    }
    ctx->pc = 0x27C8BCu;
    // 0x27c8bc: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x27C8BCu;
    {
        const bool branch_taken_0x27c8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C8BCu;
        // 0x27c8c0: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c8bc) {
            ctx->pc = 0x27CABCu;
            goto label_27cabc;
        }
    }
    ctx->pc = 0x27C8C4u;
label_27c8c4:
    // 0x27c8c4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x27c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x27c8c8: 0xc08994a  jal         func_226528
    ctx->pc = 0x27C8C8u;
    SET_GPR_U32(ctx, 31, 0x27C8D0u);
    ctx->pc = 0x27C8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C8C8u;
    // 0x27c8cc: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x27C8C8u, 0x27C8D0u)) {
        return;
    }
    ctx->pc = 0x27C8D0u;
label_27c8d0:
    // 0x27c8d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27c8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c8d4: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x27C8D4u;
    SET_GPR_U32(ctx, 31, 0x27C8DCu);
    ctx->pc = 0x27C8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C8D4u;
    // 0x27c8d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x27C8D4u, 0x27C8DCu)) {
        return;
    }
    ctx->pc = 0x27C8DCu;
label_27c8dc:
    // 0x27c8dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27c8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27c8e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27c8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c8e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x27c8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27c8e8: 0xc093afa  jal         func_24EBE8
    ctx->pc = 0x27C8E8u;
    SET_GPR_U32(ctx, 31, 0x27C8F0u);
    ctx->pc = 0x27C8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C8E8u;
    // 0x27c8ec: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x27C8E8u, 0x27C8F0u)) {
        return;
    }
    ctx->pc = 0x27C8F0u;
label_27c8f0:
    // 0x27c8f0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x27c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x27c8f4: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x27c8f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27c8f8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27C8F8u;
    {
        const bool branch_taken_0x27c8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C8F8u;
        // 0x27c8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c8f8) {
            ctx->pc = 0x27C920u;
            goto label_27c920;
        }
    }
    ctx->pc = 0x27C900u;
    // 0x27c900: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27c900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c904: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x27c904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c908: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x27c908u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c90c: 0x2645004c  addiu       $a1, $s2, 0x4C
    ctx->pc = 0x27c90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x27c910: 0xc09eee4  jal         func_27BB90
    ctx->pc = 0x27C910u;
    SET_GPR_U32(ctx, 31, 0x27C918u);
    ctx->pc = 0x27C914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C910u;
    // 0x27c914: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BB90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27BB90u, 0x27C910u, 0x27C918u)) {
        return;
    }
    ctx->pc = 0x27C918u;
label_27c918:
    // 0x27c918: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x27C918u;
    {
        const bool branch_taken_0x27c918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C918u;
        // 0x27c91c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c918) {
            ctx->pc = 0x27CAB8u;
            goto label_27cab8;
        }
    }
    ctx->pc = 0x27C920u;
label_27c920:
    // 0x27c920: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27c920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c924: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27c924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c928: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x27c928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c92c: 0xc09e80c  jal         func_27A030
    ctx->pc = 0x27C92Cu;
    SET_GPR_U32(ctx, 31, 0x27C934u);
    ctx->pc = 0x27C930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C92Cu;
    // 0x27c930: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27A030u, 0x27C92Cu, 0x27C934u)) {
        return;
    }
    ctx->pc = 0x27C934u;
label_27c934:
    // 0x27c934: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x27C934u;
    {
        const bool branch_taken_0x27c934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C934u;
        // 0x27c938: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c934) {
            ctx->pc = 0x27CAB8u;
            goto label_27cab8;
        }
    }
    ctx->pc = 0x27C93Cu;
label_27c93c:
    // 0x27c93c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x27c93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x27c940: 0xc08994a  jal         func_226528
    ctx->pc = 0x27C940u;
    SET_GPR_U32(ctx, 31, 0x27C948u);
    ctx->pc = 0x27C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C940u;
    // 0x27c944: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x27C940u, 0x27C948u)) {
        return;
    }
    ctx->pc = 0x27C948u;
label_27c948:
    // 0x27c948: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x27c948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27c94c: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x27C94Cu;
    SET_GPR_U32(ctx, 31, 0x27C954u);
    ctx->pc = 0x27C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C94Cu;
    // 0x27c950: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x27C94Cu, 0x27C954u)) {
        return;
    }
    ctx->pc = 0x27C954u;
label_27c954:
    // 0x27c954: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x27c954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27c958: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27c958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c95c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27c95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c960: 0xc093afa  jal         func_24EBE8
    ctx->pc = 0x27C960u;
    SET_GPR_U32(ctx, 31, 0x27C968u);
    ctx->pc = 0x27C964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C960u;
    // 0x27c964: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x27C960u, 0x27C968u)) {
        return;
    }
    ctx->pc = 0x27C968u;
label_27c968:
    // 0x27c968: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x27c968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c96c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x27c96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27c970: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27c970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x27c974: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x27c974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c978: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x27c978u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x27c97c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x27c97cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x27c980: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27c980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27c984: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27c984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27c988: 0x46000004  c1          0x4
    ctx->pc = 0x27c988u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x27c98c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x27c98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c990: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27c990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27c994: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x27c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x27c998: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x27c998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27c99c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27C99Cu;
    {
        const bool branch_taken_0x27c99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C99Cu;
        // 0x27c9a0: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c99c) {
            ctx->pc = 0x27C9C8u;
            goto label_27c9c8;
        }
    }
    ctx->pc = 0x27C9A4u;
    // 0x27c9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27c9a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9ac: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x27c9acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9b0: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x27c9b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9b4: 0x2645004c  addiu       $a1, $s2, 0x4C
    ctx->pc = 0x27c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x27c9b8: 0xc09f078  jal         func_27C1E0
    ctx->pc = 0x27C9B8u;
    SET_GPR_U32(ctx, 31, 0x27C9C0u);
    ctx->pc = 0x27C9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9B8u;
    // 0x27c9bc: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C1E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27C1E0u, 0x27C9B8u, 0x27C9C0u)) {
        return;
    }
    ctx->pc = 0x27C9C0u;
label_27c9c0:
    // 0x27c9c0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x27C9C0u;
    {
        const bool branch_taken_0x27c9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C9C0u;
        // 0x27c9c4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c9c0) {
            ctx->pc = 0x27CAB8u;
            goto label_27cab8;
        }
    }
    ctx->pc = 0x27C9C8u;
label_27c9c8:
    // 0x27c9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27c9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9d0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27c9d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9d4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x27c9d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c9d8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x27C9D8u;
    {
        const bool branch_taken_0x27c9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C9D8u;
        // 0x27c9dc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c9d8) {
            ctx->pc = 0x27CAACu;
            goto label_27caac;
        }
    }
    ctx->pc = 0x27C9E0u;
label_27c9e0:
    // 0x27c9e0: 0xc09533c  jal         func_254CF0
    ctx->pc = 0x27C9E0u;
    SET_GPR_U32(ctx, 31, 0x27C9E8u);
    ctx->pc = 0x27C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C9E0u;
    // 0x27c9e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254CF0u, 0x27C9E0u, 0x27C9E8u)) {
        return;
    }
    ctx->pc = 0x27C9E8u;
label_27c9e8:
    // 0x27c9e8: 0x8e530018  lw          $s3, 0x18($s2)
    ctx->pc = 0x27c9e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x27c9ec: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x27c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x27c9f0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x27c9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x27c9f4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x27c9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x27c9f8: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x27c9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x27c9fc: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x27c9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x27ca00: 0xb3a300b7  sdl         $v1, 0xB7($sp)
    ctx->pc = 0x27ca00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ca04: 0xb7a300b0  sdr         $v1, 0xB0($sp)
    ctx->pc = 0x27ca04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ca08: 0xb3a500bf  sdl         $a1, 0xBF($sp)
    ctx->pc = 0x27ca08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ca0c: 0xb7a500b8  sdr         $a1, 0xB8($sp)
    ctx->pc = 0x27ca0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ca10: 0xc08994a  jal         func_226528
    ctx->pc = 0x27CA10u;
    SET_GPR_U32(ctx, 31, 0x27CA18u);
    ctx->pc = 0x27CA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA10u;
    // 0x27ca14: 0x27b000b0  addiu       $s0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x27CA10u, 0x27CA18u)) {
        return;
    }
    ctx->pc = 0x27CA18u;
label_27ca18:
    // 0x27ca18: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x27ca18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x27ca1c: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x27CA1Cu;
    SET_GPR_U32(ctx, 31, 0x27CA24u);
    ctx->pc = 0x27CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA1Cu;
    // 0x27ca20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x27CA1Cu, 0x27CA24u)) {
        return;
    }
    ctx->pc = 0x27CA24u;
label_27ca24:
    // 0x27ca24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27ca24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca28: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x27ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x27ca2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27ca2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ca30: 0xc093afa  jal         func_24EBE8
    ctx->pc = 0x27CA30u;
    SET_GPR_U32(ctx, 31, 0x27CA38u);
    ctx->pc = 0x27CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA30u;
    // 0x27ca34: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x27CA30u, 0x27CA38u)) {
        return;
    }
    ctx->pc = 0x27CA38u;
label_27ca38:
    // 0x27ca38: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x27ca38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ca3c: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x27ca3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ca40: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27ca40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x27ca44: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x27ca44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ca48: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x27ca48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x27ca4c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x27ca4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x27ca50: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27ca50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27ca54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27ca54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27ca58: 0x46000004  c1          0x4
    ctx->pc = 0x27ca58u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x27ca5c: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x27ca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ca60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27ca60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27ca64: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x27ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x27ca68: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x27ca68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27ca6c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27CA6Cu;
    {
        const bool branch_taken_0x27ca6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA6Cu;
        // 0x27ca70: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca6c) {
            ctx->pc = 0x27CA98u;
            goto label_27ca98;
        }
    }
    ctx->pc = 0x27CA74u;
    // 0x27ca74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27ca74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca78: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27ca78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca7c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x27ca7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca80: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x27ca80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca84: 0x2645004c  addiu       $a1, $s2, 0x4C
    ctx->pc = 0x27ca84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x27ca88: 0xc09f078  jal         func_27C1E0
    ctx->pc = 0x27CA88u;
    SET_GPR_U32(ctx, 31, 0x27CA90u);
    ctx->pc = 0x27CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA88u;
    // 0x27ca8c: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C1E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27C1E0u, 0x27CA88u, 0x27CA90u)) {
        return;
    }
    ctx->pc = 0x27CA90u;
label_27ca90:
    // 0x27ca90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27CA90u;
    {
        const bool branch_taken_0x27ca90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA90u;
        // 0x27ca94: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca90) {
            ctx->pc = 0x27CAB8u;
            goto label_27cab8;
        }
    }
    ctx->pc = 0x27CA98u;
label_27ca98:
    // 0x27ca98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27ca98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27ca9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27caa0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27caa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27caa4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x27caa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27caa8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x27caa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27caac:
    // 0x27caac: 0xc09ec7c  jal         func_27B1F0
    ctx->pc = 0x27CAACu;
    SET_GPR_U32(ctx, 31, 0x27CAB4u);
    ctx->pc = 0x27B1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27B1F0u, 0x27CAACu, 0x27CAB4u)) {
        return;
    }
    ctx->pc = 0x27CAB4u;
label_27cab4:
    // 0x27cab4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x27cab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27cab8:
    // 0x27cab8: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x27cab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_27cabc:
    // 0x27cabc: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x27cabcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x27cac0: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x27cac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x27cac4: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x27cac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x27cac8: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x27cac8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x27cacc: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x27caccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27cad0: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x27cad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27cad4: 0x3e00008  jr          $ra
    ctx->pc = 0x27CAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAD4u;
        // 0x27cad8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CADCu;
    // 0x27cadc: 0x0  nop
    ctx->pc = 0x27cadcu;
    // NOP
label_27cae0:
    // 0x27cae0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27cae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27cae4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x27cae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x27cae8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x27cae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x27caec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27caecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27caf0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x27caf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x27caf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27caf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27caf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27caf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27cafc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27cafcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27cb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27cb04: 0xc08a530  jal         func_2294C0
    ctx->pc = 0x27CB04u;
    SET_GPR_U32(ctx, 31, 0x27CB0Cu);
    ctx->pc = 0x27CB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB04u;
    // 0x27cb08: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2294C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2294C0u, 0x27CB04u, 0x27CB0Cu)) {
        return;
    }
    ctx->pc = 0x27CB0Cu;
label_27cb0c:
    // 0x27cb0c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x27cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x27cb10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27cb14: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x27cb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x27cb18: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x27CB18u;
    {
        const bool branch_taken_0x27cb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB18u;
        // 0x27cb1c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb18) {
            ctx->pc = 0x27CC00u;
            goto label_27cc00;
        }
    }
    ctx->pc = 0x27CB20u;
    // 0x27cb20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27cb24: 0x2442cc00  addiu       $v0, $v0, -0x3400
    ctx->pc = 0x27cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953984));
    // 0x27cb28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27cb2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27cb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27cb30: 0x800008  jr          $a0
    ctx->pc = 0x27CB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27CB38u: goto label_27cb38;
            case 0x27CB6Cu: goto label_27cb6c;
            case 0x27CB88u: goto label_27cb88;
            case 0x27CBA0u: goto label_27cba0;
            case 0x27CBBCu: goto label_27cbbc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CB30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27CB38u;
label_27cb38:
    // 0x27cb38: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x27cb38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x27cb3c: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x27cb3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27cb40: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x27cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27cb44: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x27cb44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27cb48: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x27cb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27cb4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27cb4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb50: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x27cb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x27cb54: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27cb54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb58: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x27cb58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb5c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x27cb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x27cb60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27cb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb64: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x27CB64u;
    {
        const bool branch_taken_0x27cb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB64u;
        // 0x27cb68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb64) {
            ctx->pc = 0x27CBF8u;
            goto label_27cbf8;
        }
    }
    ctx->pc = 0x27CB6Cu;
label_27cb6c:
    // 0x27cb6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27cb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb70: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27cb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb74: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27cb74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb78: 0xc09dc5c  jal         func_277170
    ctx->pc = 0x27CB78u;
    SET_GPR_U32(ctx, 31, 0x27CB80u);
    ctx->pc = 0x27CB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB78u;
    // 0x27cb7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x277170u, 0x27CB78u, 0x27CB80u)) {
        return;
    }
    ctx->pc = 0x27CB80u;
label_27cb80:
    // 0x27cb80: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x27CB80u;
    {
        const bool branch_taken_0x27cb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB80u;
        // 0x27cb84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb80) {
            ctx->pc = 0x27CC04u;
            goto label_27cc04;
        }
    }
    ctx->pc = 0x27CB88u;
label_27cb88:
    // 0x27cb88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27cb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27cb8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb90: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x27cb90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27cb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb98: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27CB98u;
    {
        const bool branch_taken_0x27cb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB98u;
        // 0x27cb9c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cb98) {
            ctx->pc = 0x27CBF8u;
            goto label_27cbf8;
        }
    }
    ctx->pc = 0x27CBA0u;
label_27cba0:
    // 0x27cba0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27cba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cba4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27cba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cba8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27cba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cbac: 0xc09ddae  jal         func_2776B8
    ctx->pc = 0x27CBACu;
    SET_GPR_U32(ctx, 31, 0x27CBB4u);
    ctx->pc = 0x27CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CBACu;
    // 0x27cbb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2776B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2776B8u, 0x27CBACu, 0x27CBB4u)) {
        return;
    }
    ctx->pc = 0x27CBB4u;
label_27cbb4:
    // 0x27cbb4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x27CBB4u;
    {
        const bool branch_taken_0x27cbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBB4u;
        // 0x27cbb8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cbb4) {
            ctx->pc = 0x27CC04u;
            goto label_27cc04;
        }
    }
    ctx->pc = 0x27CBBCu;
label_27cbbc:
    // 0x27cbbc: 0xc09533c  jal         func_254CF0
    ctx->pc = 0x27CBBCu;
    SET_GPR_U32(ctx, 31, 0x27CBC4u);
    ctx->pc = 0x27CBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CBBCu;
    // 0x27cbc0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254CF0u, 0x27CBBCu, 0x27CBC4u)) {
        return;
    }
    ctx->pc = 0x27CBC4u;
label_27cbc4:
    // 0x27cbc4: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x27cbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x27cbc8: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x27cbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x27cbcc: 0x684a000f  ldl         $t2, 0xF($v0)
    ctx->pc = 0x27cbccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x27cbd0: 0x6c4a0008  ldr         $t2, 0x8($v0)
    ctx->pc = 0x27cbd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x27cbd4: 0xb3a90017  sdl         $t1, 0x17($sp)
    ctx->pc = 0x27cbd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27cbd8: 0xb7a90010  sdr         $t1, 0x10($sp)
    ctx->pc = 0x27cbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27cbdc: 0xb3aa001f  sdl         $t2, 0x1F($sp)
    ctx->pc = 0x27cbdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27cbe0: 0xb7aa0018  sdr         $t2, 0x18($sp)
    ctx->pc = 0x27cbe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27cbe4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27cbe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cbe8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27cbe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cbec: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x27cbecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cbf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27cbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cbf4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x27cbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_27cbf8:
    // 0x27cbf8: 0xc09de5e  jal         func_277978
    ctx->pc = 0x27CBF8u;
    SET_GPR_U32(ctx, 31, 0x27CC00u);
    ctx->pc = 0x277978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x277978u, 0x27CBF8u, 0x27CC00u)) {
        return;
    }
    ctx->pc = 0x27CC00u;
label_27cc00:
    // 0x27cc00: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27cc00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27cc04:
    // 0x27cc04: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x27cc04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27cc08: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x27cc08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27cc0c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x27cc0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27cc10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27cc10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27cc14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27cc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27cc18: 0x3e00008  jr          $ra
    ctx->pc = 0x27CC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC18u;
        // 0x27cc1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CC20u;
}
