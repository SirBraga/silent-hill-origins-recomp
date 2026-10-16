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

// Function: sub_0013AA28
// Address: 0x13aa28 - 0x13abe8
void sub_0013AA28_0x13aa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AA28_0x13aa28");
#endif

    switch (ctx->pc) {
        case 0x13aa28u: goto label_13aa28;
        case 0x13aa2cu: goto label_13aa2c;
        case 0x13aa30u: goto label_13aa30;
        case 0x13aa34u: goto label_13aa34;
        case 0x13aa38u: goto label_13aa38;
        case 0x13aa3cu: goto label_13aa3c;
        case 0x13aa40u: goto label_13aa40;
        case 0x13aa44u: goto label_13aa44;
        case 0x13aa48u: goto label_13aa48;
        case 0x13aa4cu: goto label_13aa4c;
        case 0x13aa50u: goto label_13aa50;
        case 0x13aa54u: goto label_13aa54;
        case 0x13aa58u: goto label_13aa58;
        case 0x13aa5cu: goto label_13aa5c;
        case 0x13aa60u: goto label_13aa60;
        case 0x13aa64u: goto label_13aa64;
        case 0x13aa68u: goto label_13aa68;
        case 0x13aa6cu: goto label_13aa6c;
        case 0x13aa70u: goto label_13aa70;
        case 0x13aa74u: goto label_13aa74;
        case 0x13aa78u: goto label_13aa78;
        case 0x13aa7cu: goto label_13aa7c;
        case 0x13aa80u: goto label_13aa80;
        case 0x13aa84u: goto label_13aa84;
        case 0x13aa88u: goto label_13aa88;
        case 0x13aa8cu: goto label_13aa8c;
        case 0x13aa90u: goto label_13aa90;
        case 0x13aa94u: goto label_13aa94;
        case 0x13aa98u: goto label_13aa98;
        case 0x13aa9cu: goto label_13aa9c;
        case 0x13aaa0u: goto label_13aaa0;
        case 0x13aaa4u: goto label_13aaa4;
        case 0x13aaa8u: goto label_13aaa8;
        case 0x13aaacu: goto label_13aaac;
        case 0x13aab0u: goto label_13aab0;
        case 0x13aab4u: goto label_13aab4;
        case 0x13aab8u: goto label_13aab8;
        case 0x13aabcu: goto label_13aabc;
        case 0x13aac0u: goto label_13aac0;
        case 0x13aac4u: goto label_13aac4;
        case 0x13aac8u: goto label_13aac8;
        case 0x13aaccu: goto label_13aacc;
        case 0x13aad0u: goto label_13aad0;
        case 0x13aad4u: goto label_13aad4;
        case 0x13aad8u: goto label_13aad8;
        case 0x13aadcu: goto label_13aadc;
        case 0x13aae0u: goto label_13aae0;
        case 0x13aae4u: goto label_13aae4;
        case 0x13aae8u: goto label_13aae8;
        case 0x13aaecu: goto label_13aaec;
        case 0x13aaf0u: goto label_13aaf0;
        case 0x13aaf4u: goto label_13aaf4;
        case 0x13aaf8u: goto label_13aaf8;
        case 0x13aafcu: goto label_13aafc;
        case 0x13ab00u: goto label_13ab00;
        case 0x13ab04u: goto label_13ab04;
        case 0x13ab08u: goto label_13ab08;
        case 0x13ab0cu: goto label_13ab0c;
        case 0x13ab10u: goto label_13ab10;
        case 0x13ab14u: goto label_13ab14;
        case 0x13ab18u: goto label_13ab18;
        case 0x13ab1cu: goto label_13ab1c;
        case 0x13ab20u: goto label_13ab20;
        case 0x13ab24u: goto label_13ab24;
        case 0x13ab28u: goto label_13ab28;
        case 0x13ab2cu: goto label_13ab2c;
        case 0x13ab30u: goto label_13ab30;
        case 0x13ab34u: goto label_13ab34;
        case 0x13ab38u: goto label_13ab38;
        case 0x13ab3cu: goto label_13ab3c;
        case 0x13ab40u: goto label_13ab40;
        case 0x13ab44u: goto label_13ab44;
        case 0x13ab48u: goto label_13ab48;
        case 0x13ab4cu: goto label_13ab4c;
        case 0x13ab50u: goto label_13ab50;
        case 0x13ab54u: goto label_13ab54;
        case 0x13ab58u: goto label_13ab58;
        case 0x13ab5cu: goto label_13ab5c;
        case 0x13ab60u: goto label_13ab60;
        case 0x13ab64u: goto label_13ab64;
        case 0x13ab68u: goto label_13ab68;
        case 0x13ab6cu: goto label_13ab6c;
        case 0x13ab70u: goto label_13ab70;
        case 0x13ab74u: goto label_13ab74;
        case 0x13ab78u: goto label_13ab78;
        case 0x13ab7cu: goto label_13ab7c;
        case 0x13ab80u: goto label_13ab80;
        case 0x13ab84u: goto label_13ab84;
        case 0x13ab88u: goto label_13ab88;
        case 0x13ab8cu: goto label_13ab8c;
        case 0x13ab90u: goto label_13ab90;
        case 0x13ab94u: goto label_13ab94;
        case 0x13ab98u: goto label_13ab98;
        case 0x13ab9cu: goto label_13ab9c;
        case 0x13aba0u: goto label_13aba0;
        case 0x13aba4u: goto label_13aba4;
        case 0x13aba8u: goto label_13aba8;
        case 0x13abacu: goto label_13abac;
        case 0x13abb0u: goto label_13abb0;
        case 0x13abb4u: goto label_13abb4;
        case 0x13abb8u: goto label_13abb8;
        case 0x13abbcu: goto label_13abbc;
        case 0x13abc0u: goto label_13abc0;
        case 0x13abc4u: goto label_13abc4;
        case 0x13abc8u: goto label_13abc8;
        case 0x13abccu: goto label_13abcc;
        case 0x13abd0u: goto label_13abd0;
        case 0x13abd4u: goto label_13abd4;
        case 0x13abd8u: goto label_13abd8;
        case 0x13abdcu: goto label_13abdc;
        case 0x13abe0u: goto label_13abe0;
        case 0x13abe4u: goto label_13abe4;
        default: break;
    }

    ctx->pc = 0x13aa28u;

label_13aa28:
    // 0x13aa28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13aa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_13aa2c:
    // 0x13aa2c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x13aa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_13aa30:
    // 0x13aa30: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x13aa30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_13aa34:
    // 0x13aa34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13aa34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13aa38:
    // 0x13aa38: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13aa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_13aa3c:
    // 0x13aa3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13aa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_13aa40:
    // 0x13aa40: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x13aa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_13aa44:
    // 0x13aa44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13aa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13aa48:
    // 0x13aa48: 0xc04a924  jal         func_12A490
label_13aa4c:
    if (ctx->pc == 0x13AA4Cu) {
        ctx->pc = 0x13AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA48u;
        // 0x13aa4c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA50u;
        goto label_13aa50;
    }
    ctx->pc = 0x13AA48u;
    SET_GPR_U32(ctx, 31, 0x13AA50u);
    ctx->pc = 0x13AA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA48u;
    // 0x13aa4c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x12A490u, 0x13AA48u, 0x13AA50u)) {
        return;
    }
    ctx->pc = 0x13AA50u;
label_13aa50:
    // 0x13aa50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13aa50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13aa54:
    // 0x13aa54: 0xc04eafa  jal         func_13ABE8
label_13aa58:
    if (ctx->pc == 0x13AA58u) {
        ctx->pc = 0x13AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA54u;
        // 0x13aa58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA5Cu;
        goto label_13aa5c;
    }
    ctx->pc = 0x13AA54u;
    SET_GPR_U32(ctx, 31, 0x13AA5Cu);
    ctx->pc = 0x13AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA54u;
    // 0x13aa58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ABE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13ABE8u, 0x13AA54u, 0x13AA5Cu)) {
        return;
    }
    ctx->pc = 0x13AA5Cu;
label_13aa5c:
    // 0x13aa5c: 0xc068218  jal         func_1A0860
label_13aa60:
    if (ctx->pc == 0x13AA60u) {
        ctx->pc = 0x13AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA5Cu;
        // 0x13aa60: 0x26240360  addiu       $a0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA64u;
        goto label_13aa64;
    }
    ctx->pc = 0x13AA5Cu;
    SET_GPR_U32(ctx, 31, 0x13AA64u);
    ctx->pc = 0x13AA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA5Cu;
    // 0x13aa60: 0x26240360  addiu       $a0, $s1, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x13AA5Cu, 0x13AA64u)) {
        return;
    }
    ctx->pc = 0x13AA64u;
label_13aa64:
    // 0x13aa64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13aa64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13aa68:
    // 0x13aa68: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13aa68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_13aa6c:
    // 0x13aa6c: 0x24a5edc0  addiu       $a1, $a1, -0x1240
    ctx->pc = 0x13aa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
label_13aa70:
    // 0x13aa70: 0xc065c58  jal         func_197160
label_13aa74:
    if (ctx->pc == 0x13AA74u) {
        ctx->pc = 0x13AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA70u;
        // 0x13aa74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA78u;
        goto label_13aa78;
    }
    ctx->pc = 0x13AA70u;
    SET_GPR_U32(ctx, 31, 0x13AA78u);
    ctx->pc = 0x13AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA70u;
    // 0x13aa74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x13AA70u, 0x13AA78u)) {
        return;
    }
    ctx->pc = 0x13AA78u;
label_13aa78:
    // 0x13aa78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_13aa7c:
    if (ctx->pc == 0x13AA7Cu) {
        ctx->pc = 0x13AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA78u;
        // 0x13aa7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA80u;
        goto label_13aa80;
    }
    ctx->pc = 0x13AA78u;
    {
        const bool branch_taken_0x13aa78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA78u;
        // 0x13aa7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa78) {
            ctx->pc = 0x13AA98u;
            goto label_13aa98;
        }
    }
    ctx->pc = 0x13AA80u;
label_13aa80:
    // 0x13aa80: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13aa80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_13aa84:
    // 0x13aa84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13aa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13aa88:
    // 0x13aa88: 0xc065c58  jal         func_197160
label_13aa8c:
    if (ctx->pc == 0x13AA8Cu) {
        ctx->pc = 0x13AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA88u;
        // 0x13aa8c: 0x24a5edc8  addiu       $a1, $a1, -0x1238 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA90u;
        goto label_13aa90;
    }
    ctx->pc = 0x13AA88u;
    SET_GPR_U32(ctx, 31, 0x13AA90u);
    ctx->pc = 0x13AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA88u;
    // 0x13aa8c: 0x24a5edc8  addiu       $a1, $a1, -0x1238 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x13AA88u, 0x13AA90u)) {
        return;
    }
    ctx->pc = 0x13AA90u;
label_13aa90:
    // 0x13aa90: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_13aa94:
    if (ctx->pc == 0x13AA94u) {
        ctx->pc = 0x13AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA90u;
        // 0x13aa94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AA98u;
        goto label_13aa98;
    }
    ctx->pc = 0x13AA90u;
    {
        const bool branch_taken_0x13aa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA90u;
        // 0x13aa94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa90) {
            ctx->pc = 0x13AA9Cu;
            goto label_13aa9c;
        }
    }
    ctx->pc = 0x13AA98u;
label_13aa98:
    // 0x13aa98: 0xae222db8  sw          $v0, 0x2DB8($s1)
    ctx->pc = 0x13aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11704), GPR_U32(ctx, 2));
label_13aa9c:
    // 0x13aa9c: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x13aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_13aaa0:
    // 0x13aaa0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13aaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_13aaa4:
    // 0x13aaa4: 0x8c5001a0  lw          $s0, 0x1A0($v0)
    ctx->pc = 0x13aaa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
label_13aaa8:
    // 0x13aaa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13aaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13aaac:
    // 0x13aaac: 0xc0406e8  jal         func_101BA0
label_13aab0:
    if (ctx->pc == 0x13AAB0u) {
        ctx->pc = 0x13AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAACu;
        // 0x13aab0: 0x24a5edd0  addiu       $a1, $a1, -0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AAB4u;
        goto label_13aab4;
    }
    ctx->pc = 0x13AAACu;
    SET_GPR_U32(ctx, 31, 0x13AAB4u);
    ctx->pc = 0x13AAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AAACu;
    // 0x13aab0: 0x24a5edd0  addiu       $a1, $a1, -0x1230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x13AAACu, 0x13AAB4u)) {
        return;
    }
    ctx->pc = 0x13AAB4u;
label_13aab4:
    // 0x13aab4: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_13aab8:
    if (ctx->pc == 0x13AAB8u) {
        ctx->pc = 0x13AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAB4u;
        // 0x13aab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AABCu;
        goto label_13aabc;
    }
    ctx->pc = 0x13AAB4u;
    {
        const bool branch_taken_0x13aab4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x13AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAB4u;
        // 0x13aab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aab4) {
            ctx->pc = 0x13AACCu;
            goto label_13aacc;
        }
    }
    ctx->pc = 0x13AABCu;
label_13aabc:
    // 0x13aabc: 0xc04ecec  jal         func_13B3B0
label_13aac0:
    if (ctx->pc == 0x13AAC0u) {
        ctx->pc = 0x13AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AABCu;
        // 0x13aac0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AAC4u;
        goto label_13aac4;
    }
    ctx->pc = 0x13AABCu;
    SET_GPR_U32(ctx, 31, 0x13AAC4u);
    ctx->pc = 0x13AAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AABCu;
    // 0x13aac0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B3B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B3B0u, 0x13AABCu, 0x13AAC4u)) {
        return;
    }
    ctx->pc = 0x13AAC4u;
label_13aac4:
    // 0x13aac4: 0x10000004  b           . + 4 + (0x4 << 2)
label_13aac8:
    if (ctx->pc == 0x13AAC8u) {
        ctx->pc = 0x13AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAC4u;
        // 0x13aac8: 0x26240360  addiu       $a0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AACCu;
        goto label_13aacc;
    }
    ctx->pc = 0x13AAC4u;
    {
        const bool branch_taken_0x13aac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAC4u;
        // 0x13aac8: 0x26240360  addiu       $a0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aac4) {
            ctx->pc = 0x13AAD8u;
            goto label_13aad8;
        }
    }
    ctx->pc = 0x13AACCu;
label_13aacc:
    // 0x13aacc: 0xc04ecec  jal         func_13B3B0
label_13aad0:
    if (ctx->pc == 0x13AAD0u) {
        ctx->pc = 0x13AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AACCu;
        // 0x13aad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AAD4u;
        goto label_13aad4;
    }
    ctx->pc = 0x13AACCu;
    SET_GPR_U32(ctx, 31, 0x13AAD4u);
    ctx->pc = 0x13AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AACCu;
    // 0x13aad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B3B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B3B0u, 0x13AACCu, 0x13AAD4u)) {
        return;
    }
    ctx->pc = 0x13AAD4u;
label_13aad4:
    // 0x13aad4: 0x26240360  addiu       $a0, $s1, 0x360
    ctx->pc = 0x13aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
label_13aad8:
    // 0x13aad8: 0x26252d90  addiu       $a1, $s1, 0x2D90
    ctx->pc = 0x13aad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 11664));
label_13aadc:
    // 0x13aadc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13aadcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13aae0:
    // 0x13aae0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x13aae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13aae4:
    // 0x13aae4: 0xc067fca  jal         func_19FF28
label_13aae8:
    if (ctx->pc == 0x13AAE8u) {
        ctx->pc = 0x13AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAE4u;
        // 0x13aae8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AAECu;
        goto label_13aaec;
    }
    ctx->pc = 0x13AAE4u;
    SET_GPR_U32(ctx, 31, 0x13AAECu);
    ctx->pc = 0x13AAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AAE4u;
    // 0x13aae8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x13AAE4u, 0x13AAECu)) {
        return;
    }
    ctx->pc = 0x13AAECu;
label_13aaec:
    // 0x13aaec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_13aaf0:
    // 0x13aaf0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x13aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_13aaf4:
    // 0x13aaf4: 0x8c4245e0  lw          $v0, 0x45E0($v0)
    ctx->pc = 0x13aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17888)));
label_13aaf8:
    // 0x13aaf8: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x13aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_13aafc:
    // 0x13aafc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x13aafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_13ab00:
    // 0x13ab00: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
label_13ab04:
    if (ctx->pc == 0x13AB04u) {
        ctx->pc = 0x13AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB00u;
        // 0x13ab04: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB08u;
        goto label_13ab08;
    }
    ctx->pc = 0x13AB00u;
    {
        const bool branch_taken_0x13ab00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB00u;
        // 0x13ab04: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab00) {
            ctx->pc = 0x13AB1Cu;
            goto label_13ab1c;
        }
    }
    ctx->pc = 0x13AB08u;
label_13ab08:
    // 0x13ab08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13ab0c:
    // 0x13ab0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13ab10:
    if (ctx->pc == 0x13AB10u) {
        ctx->pc = 0x13AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB0Cu;
        // 0x13ab10: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB14u;
        goto label_13ab14;
    }
    ctx->pc = 0x13AB0Cu;
    {
        const bool branch_taken_0x13ab0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB0Cu;
        // 0x13ab10: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab0c) {
            ctx->pc = 0x13AB20u;
            goto label_13ab20;
        }
    }
    ctx->pc = 0x13AB14u;
label_13ab14:
    // 0x13ab14: 0xc07fd18  jal         func_1FF460
label_13ab18:
    if (ctx->pc == 0x13AB18u) {
        ctx->pc = 0x13AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB14u;
        // 0x13ab18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB1Cu;
        goto label_13ab1c;
    }
    ctx->pc = 0x13AB14u;
    SET_GPR_U32(ctx, 31, 0x13AB1Cu);
    ctx->pc = 0x13AB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB14u;
    // 0x13ab18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x13AB14u, 0x13AB1Cu)) {
        return;
    }
    ctx->pc = 0x13AB1Cu;
label_13ab1c:
    // 0x13ab1c: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x13ab1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_13ab20:
    // 0x13ab20: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x13ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_13ab24:
    // 0x13ab24: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x13ab24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_13ab28:
    // 0x13ab28: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x13ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_13ab2c:
    // 0x13ab2c: 0x40f809  jalr        $v0
label_13ab30:
    if (ctx->pc == 0x13AB30u) {
        ctx->pc = 0x13AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB2Cu;
        // 0x13ab30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB34u;
        goto label_13ab34;
    }
    ctx->pc = 0x13AB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13AB34u);
        ctx->pc = 0x13AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB2Cu;
        // 0x13ab30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AB2Cu, 0x13AB34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13AB34u;
label_13ab34:
    // 0x13ab34: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13ab34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_13ab38:
    // 0x13ab38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13ab38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ab3c:
    // 0x13ab3c: 0xc0c5c96  jal         func_317258
label_13ab40:
    if (ctx->pc == 0x13AB40u) {
        ctx->pc = 0x13AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB3Cu;
        // 0x13ab40: 0x24a5ede8  addiu       $a1, $a1, -0x1218 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB44u;
        goto label_13ab44;
    }
    ctx->pc = 0x13AB3Cu;
    SET_GPR_U32(ctx, 31, 0x13AB44u);
    ctx->pc = 0x13AB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB3Cu;
    // 0x13ab40: 0x24a5ede8  addiu       $a1, $a1, -0x1218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x13AB3Cu, 0x13AB44u)) {
        return;
    }
    ctx->pc = 0x13AB44u;
label_13ab44:
    // 0x13ab44: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_13ab48:
    if (ctx->pc == 0x13AB48u) {
        ctx->pc = 0x13AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB44u;
        // 0x13ab48: 0x8e222dbc  lw          $v0, 0x2DBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11708)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB4Cu;
        goto label_13ab4c;
    }
    ctx->pc = 0x13AB44u;
    {
        const bool branch_taken_0x13ab44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ab44) {
            ctx->pc = 0x13AB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AB44u;
            // 0x13ab48: 0x8e222dbc  lw          $v0, 0x2DBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AB58u;
            goto label_13ab58;
        }
    }
    ctx->pc = 0x13AB4Cu;
label_13ab4c:
    // 0x13ab4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13ab50:
    // 0x13ab50: 0xae222dbc  sw          $v0, 0x2DBC($s1)
    ctx->pc = 0x13ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11708), GPR_U32(ctx, 2));
label_13ab54:
    // 0x13ab54: 0x8e222dbc  lw          $v0, 0x2DBC($s1)
    ctx->pc = 0x13ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11708)));
label_13ab58:
    // 0x13ab58: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_13ab5c:
    if (ctx->pc == 0x13AB5Cu) {
        ctx->pc = 0x13AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB58u;
        // 0x13ab5c: 0xc6410810  lwc1        $f1, 0x810($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB60u;
        goto label_13ab60;
    }
    ctx->pc = 0x13AB58u;
    {
        const bool branch_taken_0x13ab58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ab58) {
            ctx->pc = 0x13AB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AB58u;
            // 0x13ab5c: 0xc6410810  lwc1        $f1, 0x810($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AB80u;
            goto label_13ab80;
        }
    }
    ctx->pc = 0x13AB60u;
label_13ab60:
    // 0x13ab60: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x13ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_13ab64:
    // 0x13ab64: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x13ab64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_13ab68:
    // 0x13ab68: 0x8c6200fc  lw          $v0, 0xFC($v1)
    ctx->pc = 0x13ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_13ab6c:
    // 0x13ab6c: 0x40f809  jalr        $v0
label_13ab70:
    if (ctx->pc == 0x13AB70u) {
        ctx->pc = 0x13AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB6Cu;
        // 0x13ab70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB74u;
        goto label_13ab74;
    }
    ctx->pc = 0x13AB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13AB74u);
        ctx->pc = 0x13AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB6Cu;
        // 0x13ab70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AB6Cu, 0x13AB74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13AB74u;
label_13ab74:
    // 0x13ab74: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_13ab78:
    if (ctx->pc == 0x13AB78u) {
        ctx->pc = 0x13AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB74u;
        // 0x13ab78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB7Cu;
        goto label_13ab7c;
    }
    ctx->pc = 0x13AB74u;
    {
        const bool branch_taken_0x13ab74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ab74) {
            ctx->pc = 0x13AB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13AB74u;
            // 0x13ab78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13AB9Cu;
            goto label_13ab9c;
        }
    }
    ctx->pc = 0x13AB7Cu;
label_13ab7c:
    // 0x13ab7c: 0xc6410810  lwc1        $f1, 0x810($s2)
    ctx->pc = 0x13ab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13ab80:
    // 0x13ab80: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x13ab80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_13ab84:
    // 0x13ab84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ab84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13ab88:
    // 0x13ab88: 0x0  nop
    ctx->pc = 0x13ab88u;
    // NOP
label_13ab8c:
    // 0x13ab8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13ab8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13ab90:
    // 0x13ab90: 0x0  nop
    ctx->pc = 0x13ab90u;
    // NOP
label_13ab94:
    // 0x13ab94: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_13ab98:
    if (ctx->pc == 0x13AB98u) {
        ctx->pc = 0x13AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB94u;
        // 0x13ab98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AB9Cu;
        goto label_13ab9c;
    }
    ctx->pc = 0x13AB94u;
    {
        const bool branch_taken_0x13ab94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB94u;
        // 0x13ab98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab94) {
            ctx->pc = 0x13ABACu;
            goto label_13abac;
        }
    }
    ctx->pc = 0x13AB9Cu;
label_13ab9c:
    // 0x13ab9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13ab9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13aba0:
    // 0x13aba0: 0xc067fca  jal         func_19FF28
label_13aba4:
    if (ctx->pc == 0x13ABA4u) {
        ctx->pc = 0x13ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ABA0u;
        // 0x13aba4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ABA8u;
        goto label_13aba8;
    }
    ctx->pc = 0x13ABA0u;
    SET_GPR_U32(ctx, 31, 0x13ABA8u);
    ctx->pc = 0x13ABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ABA0u;
    // 0x13aba4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x13ABA0u, 0x13ABA8u)) {
        return;
    }
    ctx->pc = 0x13ABA8u;
label_13aba8:
    // 0x13aba8: 0xae202dbc  sw          $zero, 0x2DBC($s1)
    ctx->pc = 0x13aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11708), GPR_U32(ctx, 0));
label_13abac:
    // 0x13abac: 0x8e252dac  lw          $a1, 0x2DAC($s1)
    ctx->pc = 0x13abacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11692)));
label_13abb0:
    // 0x13abb0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_13abb4:
    if (ctx->pc == 0x13ABB4u) {
        ctx->pc = 0x13ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ABB0u;
        // 0x13abb4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ABB8u;
        goto label_13abb8;
    }
    ctx->pc = 0x13ABB0u;
    {
        const bool branch_taken_0x13abb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ABB0u;
        // 0x13abb4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13abb0) {
            ctx->pc = 0x13ABC4u;
            goto label_13abc4;
        }
    }
    ctx->pc = 0x13ABB8u;
label_13abb8:
    // 0x13abb8: 0xc0596be  jal         func_165AF8
label_13abbc:
    if (ctx->pc == 0x13ABBCu) {
        ctx->pc = 0x13ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ABB8u;
        // 0x13abbc: 0x8c448668  lw          $a0, -0x7998($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ABC0u;
        goto label_13abc0;
    }
    ctx->pc = 0x13ABB8u;
    SET_GPR_U32(ctx, 31, 0x13ABC0u);
    ctx->pc = 0x13ABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ABB8u;
    // 0x13abbc: 0x8c448668  lw          $a0, -0x7998($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AF8u, 0x13ABB8u, 0x13ABC0u)) {
        return;
    }
    ctx->pc = 0x13ABC0u;
label_13abc0:
    // 0x13abc0: 0xae202dac  sw          $zero, 0x2DAC($s1)
    ctx->pc = 0x13abc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11692), GPR_U32(ctx, 0));
label_13abc4:
    // 0x13abc4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13abc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13abc8:
    // 0x13abc8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x13abc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13abcc:
    // 0x13abcc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13abccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13abd0:
    // 0x13abd0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x13abd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13abd4:
    // 0x13abd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13abd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13abd8:
    // 0x13abd8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x13abd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13abdc:
    // 0x13abdc: 0x3e00008  jr          $ra
label_13abe0:
    if (ctx->pc == 0x13ABE0u) {
        ctx->pc = 0x13ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ABDCu;
        // 0x13abe0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ABE4u;
        goto label_13abe4;
    }
    ctx->pc = 0x13ABDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ABDCu;
        // 0x13abe0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ABDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ABE4u;
label_13abe4:
    // 0x13abe4: 0x0  nop
    ctx->pc = 0x13abe4u;
    // NOP
    ctx->pc = 0x13abe8u;
}
