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

// Function: sub_001429C0
// Address: 0x1429c0 - 0x142d58
void sub_001429C0_0x1429c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001429C0_0x1429c0");
#endif

    switch (ctx->pc) {
        case 0x1429dcu: goto label_1429dc;
        case 0x1429f0u: goto label_1429f0;
        case 0x142a08u: goto label_142a08;
        case 0x142a48u: goto label_142a48;
        case 0x142a84u: goto label_142a84;
        case 0x142a8cu: goto label_142a8c;
        case 0x142aa0u: goto label_142aa0;
        case 0x142b84u: goto label_142b84;
        case 0x142bb4u: goto label_142bb4;
        case 0x142bd4u: goto label_142bd4;
        case 0x142cecu: goto label_142cec;
        case 0x142d04u: goto label_142d04;
        case 0x142d40u: goto label_142d40;
        default: break;
    }

    ctx->pc = 0x1429c0u;

    // 0x1429c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1429c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1429c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1429c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1429c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1429c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1429cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1429ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1429d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1429d4: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x1429D4u;
    SET_GPR_U32(ctx, 31, 0x1429DCu);
    ctx->pc = 0x1429D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1429D4u;
    // 0x1429d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x1429D4u, 0x1429DCu)) {
        return;
    }
    ctx->pc = 0x1429DCu;
label_1429dc:
    // 0x1429dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1429dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1429e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1429e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429e4: 0x8c464880  lw          $a2, 0x4880($v0)
    ctx->pc = 0x1429e4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4880u));
    // 0x1429e8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1429E8u;
    SET_GPR_U32(ctx, 31, 0x1429F0u);
    ctx->pc = 0x1429ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1429E8u;
    // 0x1429ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1429E8u, 0x1429F0u)) {
        return;
    }
    ctx->pc = 0x1429F0u;
label_1429f0:
    // 0x1429f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1429f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1429f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1429f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1429f8: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1429F8u;
    {
        const bool branch_taken_0x1429f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1429FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429F8u;
        // 0x1429fc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1429f8) {
            ctx->pc = 0x142CFCu;
            goto label_142cfc;
        }
    }
    ctx->pc = 0x142A00u;
    // 0x142a00: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x142a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142a04: 0x0  nop
    ctx->pc = 0x142a04u;
    // NOP
label_142a08:
    // 0x142a08: 0x2c830010  sltiu       $v1, $a0, 0x10
    ctx->pc = 0x142a08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x142a0c: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x142A0Cu;
    {
        const bool branch_taken_0x142a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A0Cu;
        // 0x142a10: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a0c) {
            ctx->pc = 0x142C18u;
            goto label_142c18;
        }
    }
    ctx->pc = 0x142A14u;
    // 0x142a14: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x142a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x142a18: 0x24420d60  addiu       $v0, $v0, 0xD60
    ctx->pc = 0x142a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
    // 0x142a1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x142a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x142a20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x142a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x142a24: 0x800008  jr          $a0
    ctx->pc = 0x142A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142A2Cu: goto label_142a2c;
            case 0x142A50u: goto label_142a50;
            case 0x142AA8u: goto label_142aa8;
            case 0x142B3Cu: goto label_142b3c;
            case 0x142B4Cu: goto label_142b4c;
            case 0x142B5Cu: goto label_142b5c;
            case 0x142B6Cu: goto label_142b6c;
            case 0x142B8Cu: goto label_142b8c;
            case 0x142BDCu: goto label_142bdc;
            case 0x142BECu: goto label_142bec;
            case 0x142BFCu: goto label_142bfc;
            case 0x142C0Cu: goto label_142c0c;
            case 0x142C18u: goto label_142c18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142A24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x142A2Cu;
label_142a2c:
    // 0x142a2c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x142a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142a30: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x142a30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x142a34: 0x24e70d50  addiu       $a3, $a3, 0xD50
    ctx->pc = 0x142a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3408));
    // 0x142a38: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x142a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x142a3c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x142a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x142a40: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x142A40u;
    SET_GPR_U32(ctx, 31, 0x142A48u);
    ctx->pc = 0x142A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142A40u;
    // 0x142a44: 0x26250048  addiu       $a1, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x142A40u, 0x142A48u)) {
        return;
    }
    ctx->pc = 0x142A48u;
label_142a48:
    // 0x142a48: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x142A48u;
    {
        const bool branch_taken_0x142a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A48u;
        // 0x142a4c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a48) {
            ctx->pc = 0x142CD4u;
            goto label_142cd4;
        }
    }
    ctx->pc = 0x142A50u;
label_142a50:
    // 0x142a50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x142a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142a54: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x142a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x142a58: 0x34212eed  ori         $at, $at, 0x2EED
    ctx->pc = 0x142a58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12013);
    // 0x142a5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x142a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142a60: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x142a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142a64: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x142a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x142a68: 0x0  nop
    ctx->pc = 0x142a68u;
    // NOP
    // 0x142a6c: 0x0  nop
    ctx->pc = 0x142a6cu;
    // NOP
    // 0x142a70: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x142a70u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x142a74: 0xe6210170  swc1        $f1, 0x170($s1)
    ctx->pc = 0x142a74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 368), bits); }
    // 0x142a78: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x142a78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x142a7c: 0xc095d54  jal         func_257550
    ctx->pc = 0x142A7Cu;
    SET_GPR_U32(ctx, 31, 0x142A84u);
    ctx->pc = 0x142A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142A7Cu;
    // 0x142a80: 0xe6200174  swc1        $f0, 0x174($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 372), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x257550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257550u, 0x142A7Cu, 0x142A84u)) {
        return;
    }
    ctx->pc = 0x142A84u;
label_142a84:
    // 0x142a84: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x142A84u;
    SET_GPR_U32(ctx, 31, 0x142A8Cu);
    ctx->pc = 0x142A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142A84u;
    // 0x142a88: 0xc62c0174  lwc1        $f12, 0x174($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x142A84u, 0x142A8Cu)) {
        return;
    }
    ctx->pc = 0x142A8Cu;
label_142a8c:
    // 0x142a8c: 0x8e24011c  lw          $a0, 0x11C($s1)
    ctx->pc = 0x142a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x142a90: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x142a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x142a94: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x142a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x142a98: 0xc089456  jal         func_225158
    ctx->pc = 0x142A98u;
    SET_GPR_U32(ctx, 31, 0x142AA0u);
    ctx->pc = 0x142A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142A98u;
    // 0x142a9c: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x225158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225158u, 0x142A98u, 0x142AA0u)) {
        return;
    }
    ctx->pc = 0x142AA0u;
label_142aa0:
    // 0x142aa0: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x142AA0u;
    {
        const bool branch_taken_0x142aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AA0u;
        // 0x142aa4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142aa0) {
            ctx->pc = 0x142CD4u;
            goto label_142cd4;
        }
    }
    ctx->pc = 0x142AA8u;
label_142aa8:
    // 0x142aa8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x142aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142aac: 0x8e240100  lw          $a0, 0x100($s1)
    ctx->pc = 0x142aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x142ab0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x142ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x142ab4: 0x3282b  sltu        $a1, $zero, $v1
    ctx->pc = 0x142ab4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x142ab8: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x142AB8u;
    {
        const bool branch_taken_0x142ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x142ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AB8u;
        // 0x142abc: 0xae250104  sw          $a1, 0x104($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ab8) {
            ctx->pc = 0x142B2Cu;
            goto label_142b2c;
        }
    }
    ctx->pc = 0x142AC0u;
    // 0x142ac0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x142ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x142ac4: 0x8c438474  lw          $v1, -0x7B8C($v0)
    ctx->pc = 0x142ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338474u));
    // 0x142ac8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x142AC8u;
    {
        const bool branch_taken_0x142ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AC8u;
        // 0x142acc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ac8) {
            ctx->pc = 0x142B10u;
            goto label_142b10;
        }
    }
    ctx->pc = 0x142AD0u;
    // 0x142ad0: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x142AD0u;
    {
        const bool branch_taken_0x142ad0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x142ad0) {
            ctx->pc = 0x142AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142AD0u;
            // 0x142ad4: 0x8e220114  lw          $v0, 0x114($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142B00u;
            goto label_142b00;
        }
    }
    ctx->pc = 0x142AD8u;
    // 0x142ad8: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x142ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x142adc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142ADCu;
    {
        const bool branch_taken_0x142adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142ADCu;
        // 0x142ae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142adc) {
            ctx->pc = 0x142AF0u;
            goto label_142af0;
        }
    }
    ctx->pc = 0x142AE4u;
    // 0x142ae4: 0x8e230114  lw          $v1, 0x114($s1)
    ctx->pc = 0x142ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x142ae8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x142AE8u;
    {
        const bool branch_taken_0x142ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AE8u;
        // 0x142aec: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ae8) {
            ctx->pc = 0x142B04u;
            goto label_142b04;
        }
    }
    ctx->pc = 0x142AF0u;
label_142af0:
    // 0x142af0: 0x8e230114  lw          $v1, 0x114($s1)
    ctx->pc = 0x142af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x142af4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x142af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x142af8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x142AF8u;
    {
        const bool branch_taken_0x142af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AF8u;
        // 0x142afc: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142af8) {
            ctx->pc = 0x142B04u;
            goto label_142b04;
        }
    }
    ctx->pc = 0x142B00u;
label_142b00:
    // 0x142b00: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x142b00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_142b04:
    // 0x142b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142b08: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x142B08u;
    {
        const bool branch_taken_0x142b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B08u;
        // 0x142b0c: 0xae220100  sw          $v0, 0x100($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b08) {
            ctx->pc = 0x142CD0u;
            goto label_142cd0;
        }
    }
    ctx->pc = 0x142B10u;
label_142b10:
    // 0x142b10: 0x8c438478  lw          $v1, -0x7B88($v0)
    ctx->pc = 0x142b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935672)));
    // 0x142b14: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x142B14u;
    {
        const bool branch_taken_0x142b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B14u;
        // 0x142b18: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b14) {
            ctx->pc = 0x142B2Cu;
            goto label_142b2c;
        }
    }
    ctx->pc = 0x142B1Cu;
    // 0x142b1c: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x142b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x142b20: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x142b20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x142b24: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x142B24u;
    {
        const bool branch_taken_0x142b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B24u;
        // 0x142b28: 0xae230100  sw          $v1, 0x100($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b24) {
            ctx->pc = 0x142CD0u;
            goto label_142cd0;
        }
    }
    ctx->pc = 0x142B2Cu;
label_142b2c:
    // 0x142b2c: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x142b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x142b30: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x142b30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x142b34: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x142B34u;
    {
        const bool branch_taken_0x142b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B34u;
        // 0x142b38: 0xae200100  sw          $zero, 0x100($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b34) {
            ctx->pc = 0x142CD0u;
            goto label_142cd0;
        }
    }
    ctx->pc = 0x142B3Cu;
label_142b3c:
    // 0x142b3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x142b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142b40: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x142b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142b44: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x142B44u;
    {
        const bool branch_taken_0x142b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B44u;
        // 0x142b48: 0xe6200184  swc1        $f0, 0x184($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b44) {
            ctx->pc = 0x142CD0u;
            goto label_142cd0;
        }
    }
    ctx->pc = 0x142B4Cu;
label_142b4c:
    // 0x142b4c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x142b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142b50: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x142b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x142b54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x142B54u;
    {
        const bool branch_taken_0x142b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B54u;
        // 0x142b58: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b54) {
            ctx->pc = 0x142B78u;
            goto label_142b78;
        }
    }
    ctx->pc = 0x142B5Cu;
label_142b5c:
    // 0x142b5c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x142b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142b60: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x142b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x142b64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x142B64u;
    {
        const bool branch_taken_0x142b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B64u;
        // 0x142b68: 0x26250058  addiu       $a1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b64) {
            ctx->pc = 0x142B78u;
            goto label_142b78;
        }
    }
    ctx->pc = 0x142B6Cu;
label_142b6c:
    // 0x142b6c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x142b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142b70: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x142b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x142b74: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x142b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_142b78:
    // 0x142b78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x142b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b7c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x142B7Cu;
    SET_GPR_U32(ctx, 31, 0x142B84u);
    ctx->pc = 0x142B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B7Cu;
    // 0x142b80: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x142B7Cu, 0x142B84u)) {
        return;
    }
    ctx->pc = 0x142B84u;
label_142b84:
    // 0x142b84: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x142B84u;
    {
        const bool branch_taken_0x142b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B84u;
        // 0x142b88: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b84) {
            ctx->pc = 0x142CD4u;
            goto label_142cd4;
        }
    }
    ctx->pc = 0x142B8Cu;
label_142b8c:
    // 0x142b8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x142b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142b90: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x142b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x142b94: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x142B94u;
    {
        const bool branch_taken_0x142b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B94u;
        // 0x142b98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b94) {
            ctx->pc = 0x142BBCu;
            goto label_142bbc;
        }
    }
    ctx->pc = 0x142B9Cu;
    // 0x142b9c: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x142b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x142ba0: 0x5043004c  beql        $v0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x142BA0u;
    {
        const bool branch_taken_0x142ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x142ba0) {
            ctx->pc = 0x142BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142BA0u;
            // 0x142ba4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142CD4u;
            goto label_142cd4;
        }
    }
    ctx->pc = 0x142BA8u;
    // 0x142ba8: 0xae230100  sw          $v1, 0x100($s1)
    ctx->pc = 0x142ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 3));
    // 0x142bac: 0xc0519f4  jal         func_1467D0
    ctx->pc = 0x142BACu;
    SET_GPR_U32(ctx, 31, 0x142BB4u);
    ctx->pc = 0x142BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BACu;
    // 0x142bb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1467D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1467D0u, 0x142BACu, 0x142BB4u)) {
        return;
    }
    ctx->pc = 0x142BB4u;
label_142bb4:
    // 0x142bb4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x142BB4u;
    {
        const bool branch_taken_0x142bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BB4u;
        // 0x142bb8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142bb4) {
            ctx->pc = 0x142CD4u;
            goto label_142cd4;
        }
    }
    ctx->pc = 0x142BBCu;
label_142bbc:
    // 0x142bbc: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x142bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x142bc0: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x142BC0u;
    {
        const bool branch_taken_0x142bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BC0u;
        // 0x142bc4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142bc0) {
            ctx->pc = 0x142CD4u;
            goto label_142cd4;
        }
    }
    ctx->pc = 0x142BC8u;
    // 0x142bc8: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x142bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x142bcc: 0xc051a14  jal         func_146850
    ctx->pc = 0x142BCCu;
    SET_GPR_U32(ctx, 31, 0x142BD4u);
    ctx->pc = 0x142BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BCCu;
    // 0x142bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146850u, 0x142BCCu, 0x142BD4u)) {
        return;
    }
    ctx->pc = 0x142BD4u;
label_142bd4:
    // 0x142bd4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x142BD4u;
    {
        const bool branch_taken_0x142bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BD4u;
        // 0x142bd8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142bd4) {
            ctx->pc = 0x142CD4u;
            goto label_142cd4;
        }
    }
    ctx->pc = 0x142BDCu;
label_142bdc:
    // 0x142bdc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x142bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142be0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x142be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x142be4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x142BE4u;
    {
        const bool branch_taken_0x142be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BE4u;
        // 0x142be8: 0xae2201ac  sw          $v0, 0x1AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142be4) {
            ctx->pc = 0x142CD0u;
            goto label_142cd0;
        }
    }
    ctx->pc = 0x142BECu;
label_142bec:
    // 0x142bec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x142becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142bf0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x142bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x142bf4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x142BF4u;
    {
        const bool branch_taken_0x142bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BF4u;
        // 0x142bf8: 0xae2201b0  sw          $v0, 0x1B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142bf4) {
            ctx->pc = 0x142CD0u;
            goto label_142cd0;
        }
    }
    ctx->pc = 0x142BFCu;
label_142bfc:
    // 0x142bfc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x142bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142c00: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x142c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x142c04: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x142C04u;
    {
        const bool branch_taken_0x142c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C04u;
        // 0x142c08: 0xae2201b4  sw          $v0, 0x1B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c04) {
            ctx->pc = 0x142CD0u;
            goto label_142cd0;
        }
    }
    ctx->pc = 0x142C0Cu;
label_142c0c:
    // 0x142c0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x142c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142c10: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x142c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142c14: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x142c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
label_142c18:
    // 0x142c18: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x142c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142c1c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x142c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x142c20: 0x2445fff0  addiu       $a1, $v0, -0x10
    ctx->pc = 0x142c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x142c24: 0x2ca30020  sltiu       $v1, $a1, 0x20
    ctx->pc = 0x142c24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x142c28: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x142C28u;
    {
        const bool branch_taken_0x142c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C28u;
        // 0x142c2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c28) {
            ctx->pc = 0x142CD0u;
            goto label_142cd0;
        }
    }
    ctx->pc = 0x142C30u;
    // 0x142c30: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x142c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x142c34: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x142c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x142c38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142c3c: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x142c3cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5));
    // 0x142c40: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x142c40u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x142c44: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x142c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x142c48: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x142c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x142c4c: 0x10640012  beq         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x142C4Cu;
    {
        const bool branch_taken_0x142c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x142C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C4Cu;
        // 0x142c50: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c4c) {
            ctx->pc = 0x142C98u;
            goto label_142c98;
        }
    }
    ctx->pc = 0x142C54u;
    // 0x142c54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142C54u;
    {
        const bool branch_taken_0x142c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C54u;
        // 0x142c58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c54) {
            ctx->pc = 0x142C6Cu;
            goto label_142c6c;
        }
    }
    ctx->pc = 0x142C5Cu;
    // 0x142c5c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x142C5Cu;
    {
        const bool branch_taken_0x142c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C5Cu;
        // 0x142c60: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c5c) {
            ctx->pc = 0x142C84u;
            goto label_142c84;
        }
    }
    ctx->pc = 0x142C64u;
    // 0x142c64: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x142C64u;
    {
        const bool branch_taken_0x142c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C64u;
        // 0x142c68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c64) {
            ctx->pc = 0x142CD8u;
            goto label_142cd8;
        }
    }
    ctx->pc = 0x142C6Cu;
label_142c6c:
    // 0x142c6c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x142C6Cu;
    {
        const bool branch_taken_0x142c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x142C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C6Cu;
        // 0x142c70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c6c) {
            ctx->pc = 0x142CACu;
            goto label_142cac;
        }
    }
    ctx->pc = 0x142C74u;
    // 0x142c74: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x142C74u;
    {
        const bool branch_taken_0x142c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x142C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C74u;
        // 0x142c78: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c74) {
            ctx->pc = 0x142CC0u;
            goto label_142cc0;
        }
    }
    ctx->pc = 0x142C7Cu;
    // 0x142c7c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x142C7Cu;
    {
        const bool branch_taken_0x142c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C7Cu;
        // 0x142c80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c7c) {
            ctx->pc = 0x142CD8u;
            goto label_142cd8;
        }
    }
    ctx->pc = 0x142C84u;
label_142c84:
    // 0x142c84: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x142c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142c88: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x142c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x142c8c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x142c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x142c90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x142C90u;
    {
        const bool branch_taken_0x142c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C90u;
        // 0x142c94: 0xe4400068  swc1        $f0, 0x68($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c90) {
            ctx->pc = 0x142CD0u;
            goto label_142cd0;
        }
    }
    ctx->pc = 0x142C98u;
label_142c98:
    // 0x142c98: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x142c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x142c9c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x142c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x142ca0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x142ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x142ca4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x142CA4u;
    {
        const bool branch_taken_0x142ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CA4u;
        // 0x142ca8: 0xac43006c  sw          $v1, 0x6C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ca4) {
            ctx->pc = 0x142CD0u;
            goto label_142cd0;
        }
    }
    ctx->pc = 0x142CACu;
label_142cac:
    // 0x142cac: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x142cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142cb0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x142cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x142cb4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x142cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x142cb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x142CB8u;
    {
        const bool branch_taken_0x142cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CB8u;
        // 0x142cbc: 0xe4400070  swc1        $f0, 0x70($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142cb8) {
            ctx->pc = 0x142CD0u;
            goto label_142cd0;
        }
    }
    ctx->pc = 0x142CC0u;
label_142cc0:
    // 0x142cc0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x142cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142cc4: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x142cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x142cc8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x142cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x142ccc: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x142cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_142cd0:
    // 0x142cd0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x142cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_142cd4:
    // 0x142cd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x142cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_142cd8:
    // 0x142cd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x142cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142cdc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x142cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x142ce0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x142ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x142ce4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x142CE4u;
    SET_GPR_U32(ctx, 31, 0x142CECu);
    ctx->pc = 0x142CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142CE4u;
    // 0x142ce8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x142CE4u, 0x142CECu)) {
        return;
    }
    ctx->pc = 0x142CECu;
label_142cec:
    // 0x142cec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x142cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142cf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x142cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142cf4: 0x5460ff44  bnel        $v1, $zero, . + 4 + (-0xBC << 2)
    ctx->pc = 0x142CF4u;
    {
        const bool branch_taken_0x142cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x142cf4) {
            ctx->pc = 0x142CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142CF4u;
            // 0x142cf8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142a08;
        }
    }
    ctx->pc = 0x142CFCu;
label_142cfc:
    // 0x142cfc: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x142CFCu;
    SET_GPR_U32(ctx, 31, 0x142D04u);
    ctx->pc = 0x142D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142CFCu;
    // 0x142d00: 0xc62c0174  lwc1        $f12, 0x174($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x142CFCu, 0x142D04u)) {
        return;
    }
    ctx->pc = 0x142D04u;
label_142d04:
    // 0x142d04: 0xc6210184  lwc1        $f1, 0x184($s1)
    ctx->pc = 0x142d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142d08: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x142d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x142d0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x142d0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x142d10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x142d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142d14: 0x0  nop
    ctx->pc = 0x142d14u;
    // NOP
    // 0x142d18: 0x0  nop
    ctx->pc = 0x142d18u;
    // NOP
    // 0x142d1c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x142d1cu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x142d20: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x142d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142d24: 0xe621017c  swc1        $f1, 0x17C($s1)
    ctx->pc = 0x142d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
    // 0x142d28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x142D28u;
    {
        const bool branch_taken_0x142d28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D28u;
        // 0x142d2c: 0xe6210180  swc1        $f1, 0x180($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142d28) {
            ctx->pc = 0x142D34u;
            goto label_142d34;
        }
    }
    ctx->pc = 0x142D30u;
    // 0x142d30: 0xe6220180  swc1        $f2, 0x180($s1)
    ctx->pc = 0x142d30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
label_142d34:
    // 0x142d34: 0xc62c0180  lwc1        $f12, 0x180($s1)
    ctx->pc = 0x142d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x142d38: 0xc0893bc  jal         func_224EF0
    ctx->pc = 0x142D38u;
    SET_GPR_U32(ctx, 31, 0x142D40u);
    ctx->pc = 0x142D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D38u;
    // 0x142d3c: 0x8e24011c  lw          $a0, 0x11C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224EF0u, 0x142D38u, 0x142D40u)) {
        return;
    }
    ctx->pc = 0x142D40u;
label_142d40:
    // 0x142d40: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x142d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x142d44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x142d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142d48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x142d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x142D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D4Cu;
        // 0x142d50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142D54u;
    // 0x142d54: 0x0  nop
    ctx->pc = 0x142d54u;
    // NOP
    ctx->pc = 0x142d58u;
}
