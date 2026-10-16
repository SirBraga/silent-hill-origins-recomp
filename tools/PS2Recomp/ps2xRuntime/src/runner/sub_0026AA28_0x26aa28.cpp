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

// Function: sub_0026AA28
// Address: 0x26aa28 - 0x26b540
void sub_0026AA28_0x26aa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AA28_0x26aa28");
#endif

    switch (ctx->pc) {
        case 0x26aac0u: goto label_26aac0;
        case 0x26aad8u: goto label_26aad8;
        case 0x26ab08u: goto label_26ab08;
        case 0x26ab14u: goto label_26ab14;
        case 0x26ab28u: goto label_26ab28;
        case 0x26ab4cu: goto label_26ab4c;
        case 0x26ab70u: goto label_26ab70;
        case 0x26aba4u: goto label_26aba4;
        case 0x26abb8u: goto label_26abb8;
        case 0x26ac5cu: goto label_26ac5c;
        case 0x26ac6cu: goto label_26ac6c;
        case 0x26ace8u: goto label_26ace8;
        case 0x26b438u: goto label_26b438;
        case 0x26b480u: goto label_26b480;
        case 0x26b48cu: goto label_26b48c;
        default: break;
    }

    ctx->pc = 0x26aa28u;

    // 0x26aa28: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x26aa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x26aa2c: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x26aa2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x26aa30: 0x8d083888  lw          $t0, 0x3888($t0)
    ctx->pc = 0x26aa30u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6B3888u));
    // 0x26aa34: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x26aa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x26aa38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26aa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa3c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x26aa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x26aa40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26aa40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa44: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x26aa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x26aa48: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x26aa48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x26aa4c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x26aa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x26aa50: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x26aa50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa54: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x26aa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x26aa58: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26aa58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa5c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x26aa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x26aa60: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x26aa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x26aa64: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x26aa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x26aa68: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x26aa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x26aa6c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26aa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x26aa70: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x26aa70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x26aa74: 0xdce734d0  ld          $a3, 0x34D0($a3)
    ctx->pc = 0x26aa74u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x6B34D0u));
    // 0x26aa78: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x26aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x26aa7c: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x26aa7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x26aa80: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x26aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26aa84: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26aa88: 0xdc4234c0  ld          $v0, 0x34C0($v0)
    ctx->pc = 0x26aa88u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34C0u));
    // 0x26aa8c: 0xffa20058  sd          $v0, 0x58($sp)
    ctx->pc = 0x26aa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 2));
    // 0x26aa90: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x26aa90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26aa94: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x26aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x26aa98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26aa9c: 0xdc430038  ld          $v1, 0x38($v0)
    ctx->pc = 0x26aa9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x26aaa0: 0x8c560008  lw          $s6, 0x8($v0)
    ctx->pc = 0x26aaa0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26aaa4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x26aaa4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26aaa8: 0xe3f025  or          $fp, $a3, $v1
    ctx->pc = 0x26aaa8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x26aaac: 0xdc570028  ld          $s7, 0x28($v0)
    ctx->pc = 0x26aaacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x26aab0: 0xdc550030  ld          $s5, 0x30($v0)
    ctx->pc = 0x26aab0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x26aab4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26aab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26aab8: 0xc099c1e  jal         func_267078
    ctx->pc = 0x26AAB8u;
    SET_GPR_U32(ctx, 31, 0x26AAC0u);
    ctx->pc = 0x26AABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AAB8u;
    // 0x26aabc: 0xffa00050  sd          $zero, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x267078u, 0x26AAB8u, 0x26AAC0u)) {
        return;
    }
    ctx->pc = 0x26AAC0u;
label_26aac0:
    // 0x26aac0: 0xffa00040  sd          $zero, 0x40($sp)
    ctx->pc = 0x26aac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 0));
    // 0x26aac4: 0xffa00048  sd          $zero, 0x48($sp)
    ctx->pc = 0x26aac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 0));
    // 0x26aac8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x26AAC8u;
    {
        const bool branch_taken_0x26aac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAC8u;
        // 0x26aacc: 0xaf8090c4  sw          $zero, -0x6F3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938820), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aac8) {
            ctx->pc = 0x26AAF8u;
            goto label_26aaf8;
        }
    }
    ctx->pc = 0x26AAD0u;
    // 0x26aad0: 0xc091a88  jal         func_246A20
    ctx->pc = 0x26AAD0u;
    SET_GPR_U32(ctx, 31, 0x26AAD8u);
    ctx->pc = 0x26AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AAD0u;
    // 0x26aad4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246A20u, 0x26AAD0u, 0x26AAD8u)) {
        return;
    }
    ctx->pc = 0x26AAD8u;
label_26aad8:
    // 0x26aad8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26aadc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26aae0: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x26aae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x26aae4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x26aae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x26aae8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AAE8u;
    {
        const bool branch_taken_0x26aae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x26AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAE8u;
        // 0x26aaec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aae8) {
            ctx->pc = 0x26AAF8u;
            goto label_26aaf8;
        }
    }
    ctx->pc = 0x26AAF0u;
    // 0x26aaf0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26aaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26aaf4: 0xac224134  sw          $v0, 0x4134($at)
    ctx->pc = 0x26aaf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4134u, _value); } while (0);
label_26aaf8:
    // 0x26aaf8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26AAF8u;
    {
        const bool branch_taken_0x26aaf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aaf8) {
            ctx->pc = 0x26AB14u;
            goto label_26ab14;
        }
    }
    ctx->pc = 0x26AB00u;
    // 0x26ab00: 0xc091a88  jal         func_246A20
    ctx->pc = 0x26AB00u;
    SET_GPR_U32(ctx, 31, 0x26AB08u);
    ctx->pc = 0x26AB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB00u;
    // 0x26ab04: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246A20u, 0x26AB00u, 0x26AB08u)) {
        return;
    }
    ctx->pc = 0x26AB08u;
label_26ab08:
    // 0x26ab08: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x26ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26ab0c: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x26AB0Cu;
    SET_GPR_U32(ctx, 31, 0x26AB14u);
    ctx->pc = 0x26AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB0Cu;
    // 0x26ab10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x26AB0Cu, 0x26AB14u)) {
        return;
    }
    ctx->pc = 0x26AB14u;
label_26ab14:
    // 0x26ab14: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26AB14u;
    {
        const bool branch_taken_0x26ab14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ab14) {
            ctx->pc = 0x26AB28u;
            goto label_26ab28;
        }
    }
    ctx->pc = 0x26AB1Cu;
    // 0x26ab1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26ab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26ab20: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x26AB20u;
    SET_GPR_U32(ctx, 31, 0x26AB28u);
    ctx->pc = 0x26AB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB20u;
    // 0x26ab24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x26AB20u, 0x26AB28u)) {
        return;
    }
    ctx->pc = 0x26AB28u;
label_26ab28:
    // 0x26ab28: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26AB28u;
    {
        const bool branch_taken_0x26ab28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB28u;
        // 0x26ab2c: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab28) {
            ctx->pc = 0x26AB4Cu;
            goto label_26ab4c;
        }
    }
    ctx->pc = 0x26AB30u;
    // 0x26ab30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x26ab30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26ab34: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26ab38: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x26ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x26ab3c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AB3Cu;
    {
        const bool branch_taken_0x26ab3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ab3c) {
            ctx->pc = 0x26AB4Cu;
            goto label_26ab4c;
        }
    }
    ctx->pc = 0x26AB44u;
    // 0x26ab44: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x26AB44u;
    SET_GPR_U32(ctx, 31, 0x26AB4Cu);
    ctx->pc = 0x26AB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB44u;
    // 0x26ab48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x26AB44u, 0x26AB4Cu)) {
        return;
    }
    ctx->pc = 0x26AB4Cu;
label_26ab4c:
    // 0x26ab4c: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x26AB4Cu;
    {
        const bool branch_taken_0x26ab4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB4Cu;
        // 0x26ab50: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab4c) {
            ctx->pc = 0x26AC10u;
            goto label_26ac10;
        }
    }
    ctx->pc = 0x26AB54u;
    // 0x26ab54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26ab54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26ab58: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26ab5c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x26ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x26ab60: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26AB60u;
    {
        const bool branch_taken_0x26ab60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB60u;
        // 0x26ab64: 0xdf8384a0  ld          $v1, -0x7B60($gp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab60) {
            ctx->pc = 0x26AB78u;
            goto label_26ab78;
        }
    }
    ctx->pc = 0x26AB68u;
    // 0x26ab68: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x26AB68u;
    SET_GPR_U32(ctx, 31, 0x26AB70u);
    ctx->pc = 0x26AB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB68u;
    // 0x26ab6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x26AB68u, 0x26AB70u)) {
        return;
    }
    ctx->pc = 0x26AB70u;
label_26ab70:
    // 0x26ab70: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26ab74: 0xdc633510  ld          $v1, 0x3510($v1)
    ctx->pc = 0x26ab74u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x6B3510u));
label_26ab78:
    // 0x26ab78: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x26ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26ab7c: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x26ab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x26ab80: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x26ab80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26ab84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26ab84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26ab88: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26ab88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26ab8c: 0xfc233510  sd          $v1, 0x3510($at)
    ctx->pc = 0x26ab8cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x26ab90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26ab94: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26ab94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26ab98: 0xac224138  sw          $v0, 0x4138($at)
    ctx->pc = 0x26ab98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
    // 0x26ab9c: 0xc091de2  jal         func_247788
    ctx->pc = 0x26AB9Cu;
    SET_GPR_U32(ctx, 31, 0x26ABA4u);
    ctx->pc = 0x26ABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB9Cu;
    // 0x26aba0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247788u, 0x26AB9Cu, 0x26ABA4u)) {
        return;
    }
    ctx->pc = 0x26ABA4u;
label_26aba4:
    // 0x26aba4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26aba8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x26aba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x26abac: 0x24a534f8  addiu       $a1, $a1, 0x34F8
    ctx->pc = 0x26abacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13560));
    // 0x26abb0: 0xc091dec  jal         func_2477B0
    ctx->pc = 0x26ABB0u;
    SET_GPR_U32(ctx, 31, 0x26ABB8u);
    ctx->pc = 0x26ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ABB0u;
    // 0x26abb4: 0x92060050  lbu         $a2, 0x50($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2477B0u, 0x26ABB0u, 0x26ABB8u)) {
        return;
    }
    ctx->pc = 0x26ABB8u;
label_26abb8:
    // 0x26abb8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26abb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26abbc: 0xfc2034f0  sd          $zero, 0x34F0($at)
    ctx->pc = 0x26abbcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
    // 0x26abc0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26abc4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x26abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x26abc8: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x26abc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x26abcc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x26abccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26abd0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26ABD0u;
    {
        const bool branch_taken_0x26abd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26abd0) {
            ctx->pc = 0x26ABD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26ABD0u;
            // 0x26abd4: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26ABE8u;
            goto label_26abe8;
        }
    }
    ctx->pc = 0x26ABD8u;
    // 0x26abd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26abdc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26abdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26abe0: 0xfc2234f0  sd          $v0, 0x34F0($at)
    ctx->pc = 0x26abe0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
    // 0x26abe4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x26abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_26abe8:
    // 0x26abe8: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x26abe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x26abec: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x26abecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x26abf0: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x26ABF0u;
    {
        const bool branch_taken_0x26abf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABF0u;
        // 0x26abf4: 0xdf828460  ld          $v0, -0x7BA0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abf0) {
            ctx->pc = 0x26AC38u;
            goto label_26ac38;
        }
    }
    ctx->pc = 0x26ABF8u;
    // 0x26abf8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26abfc: 0xdc4234f0  ld          $v0, 0x34F0($v0)
    ctx->pc = 0x26abfcu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F0u));
    // 0x26ac00: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26ac04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26ac04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26ac08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26AC08u;
    {
        const bool branch_taken_0x26ac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC08u;
        // 0x26ac0c: 0xff828480  sd          $v0, -0x7B80($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935680), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac08) {
            ctx->pc = 0x26AC30u;
            goto label_26ac30;
        }
    }
    ctx->pc = 0x26AC10u;
label_26ac10:
    // 0x26ac10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26ac14: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x26ac14u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x26ac18: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x26ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x26ac1c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26ac1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26ac20: 0xac204138  sw          $zero, 0x4138($at)
    ctx->pc = 0x26ac20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
    // 0x26ac24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26ac24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26ac28: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26ac28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26ac2c: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x26ac2cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
label_26ac30:
    // 0x26ac30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26ac34: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x26ac34u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
label_26ac38:
    // 0x26ac38: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x26ac38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ac3c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x26ac3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x26ac40: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x26AC40u;
    {
        const bool branch_taken_0x26ac40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC40u;
        // 0x26ac44: 0xff828460  sd          $v0, -0x7BA0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935648), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac40) {
            ctx->pc = 0x26AC98u;
            goto label_26ac98;
        }
    }
    ctx->pc = 0x26AC48u;
    // 0x26ac48: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x26ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26ac4c: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x26ac4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x26ac50: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x26ac50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x26ac54: 0xc091de2  jal         func_247788
    ctx->pc = 0x26AC54u;
    SET_GPR_U32(ctx, 31, 0x26AC5Cu);
    ctx->pc = 0x26AC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AC54u;
    // 0x26ac58: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247788u, 0x26AC54u, 0x26AC5Cu)) {
        return;
    }
    ctx->pc = 0x26AC5Cu;
label_26ac5c:
    // 0x26ac5c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x26ac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26ac60: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x26ac60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26ac64: 0xc091dec  jal         func_2477B0
    ctx->pc = 0x26AC64u;
    SET_GPR_U32(ctx, 31, 0x26AC6Cu);
    ctx->pc = 0x26AC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AC64u;
    // 0x26ac68: 0x92260050  lbu         $a2, 0x50($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2477B0u, 0x26AC64u, 0x26AC6Cu)) {
        return;
    }
    ctx->pc = 0x26AC6Cu;
label_26ac6c:
    // 0x26ac6c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x26ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x26ac70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26ac74: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x26ac74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x26ac78: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x26ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26ac7c: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x26ac7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x26ac80: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x26ac80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x26ac84: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x26ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x26ac88: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AC88u;
    {
        const bool branch_taken_0x26ac88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x26AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC88u;
        // 0x26ac8c: 0x2a00b  movn        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac88) {
            ctx->pc = 0x26AC98u;
            goto label_26ac98;
        }
    }
    ctx->pc = 0x26AC90u;
    // 0x26ac90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26ac94: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x26ac94u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_26ac98:
    // 0x26ac98: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26AC98u;
    {
        const bool branch_taken_0x26ac98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC98u;
        // 0x26ac9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac98) {
            ctx->pc = 0x26ACE0u;
            goto label_26ace0;
        }
    }
    ctx->pc = 0x26ACA0u;
    // 0x26aca0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26aca4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x26aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x26aca8: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x26aca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x26acac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26ACACu;
    {
        const bool branch_taken_0x26acac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26acac) {
            ctx->pc = 0x26ACE0u;
            goto label_26ace0;
        }
    }
    ctx->pc = 0x26ACB4u;
    // 0x26acb4: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x26ACB4u;
    {
        const bool branch_taken_0x26acb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26acb4) {
            ctx->pc = 0x26ACE0u;
            goto label_26ace0;
        }
    }
    ctx->pc = 0x26ACBCu;
    // 0x26acbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26acc0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x26acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x26acc4: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x26acc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x26acc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26ACC8u;
    {
        const bool branch_taken_0x26acc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26acc8) {
            ctx->pc = 0x26ACE0u;
            goto label_26ace0;
        }
    }
    ctx->pc = 0x26ACD0u;
    // 0x26acd0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26acd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26acd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26acd8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26acd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26acdc: 0xac224138  sw          $v0, 0x4138($at)
    ctx->pc = 0x26acdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
label_26ace0:
    // 0x26ace0: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x26ACE0u;
    SET_GPR_U32(ctx, 31, 0x26ACE8u);
    ctx->pc = 0x26ACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ACE0u;
    // 0x26ace4: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x26ACE0u, 0x26ACE8u)) {
        return;
    }
    ctx->pc = 0x26ACE8u;
label_26ace8:
    // 0x26ace8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x26ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x26acec: 0x34630022  ori         $v1, $v1, 0x22
    ctx->pc = 0x26acecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34);
    // 0x26acf0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26acf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26acf4: 0x71431b89  pcpyld      $v1, $t2, $v1
    ctx->pc = 0x26acf4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x26acf8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x26acf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x26acfc: 0x8ca5412c  lw          $a1, 0x412C($a1)
    ctx->pc = 0x26acfcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26ad00: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x26ad00u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x26ad04: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x26ad04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x26ad08: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26ad08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26ad0c: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x26ad0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26ad10: 0x3c026c0b  lui         $v0, 0x6C0B
    ctx->pc = 0x26ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27659 << 16));
    // 0x26ad14: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x26ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x26ad18: 0x344203bc  ori         $v0, $v0, 0x3BC
    ctx->pc = 0x26ad18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)956);
    // 0x26ad1c: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x26ad1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x26ad20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26ad20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad24: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x26ad24u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x26ad28: 0x70c61cc8  ppacw       $v1, $a2, $a2
    ctx->pc = 0x26ad28u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x26ad2c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x26ad2cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x26ad30: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x26ad30u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x26ad34: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x26ad34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26ad38: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x26ad38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
    // 0x26ad3c: 0x35088002  ori         $t0, $t0, 0x8002
    ctx->pc = 0x26ad3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32770);
    // 0x26ad40: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x26ad40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26ad44: 0x71281389  pcpyld      $v0, $t1, $t0
    ctx->pc = 0x26ad44u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x26ad48: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x26ad48u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x26ad4c: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x26ad4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x26ad50: 0x70951389  pcpyld      $v0, $a0, $s5
    ctx->pc = 0x26ad50u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 21)));
    // 0x26ad54: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x26ad54u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x26ad58: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x26ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26ad5c: 0xdfa20048  ld          $v0, 0x48($sp)
    ctx->pc = 0x26ad5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x26ad60: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26ad60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26ad64: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x26ad64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x26ad68: 0x71281389  pcpyld      $v0, $t1, $t0
    ctx->pc = 0x26ad68u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x26ad6c: 0x7ca20040  sq          $v0, 0x40($a1)
    ctx->pc = 0x26ad6cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 2));
    // 0x26ad70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26ad74: 0xdc4234e8  ld          $v0, 0x34E8($v0)
    ctx->pc = 0x26ad74u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34E8u));
    // 0x26ad78: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x26ad78u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x26ad7c: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x26ad7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x26ad80: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x26ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26ad84: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x26ad84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ad88: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26ad88u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26ad8c: 0x7ca20060  sq          $v0, 0x60($a1)
    ctx->pc = 0x26ad8cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 2));
    // 0x26ad90: 0x92630029  lbu         $v1, 0x29($s3)
    ctx->pc = 0x26ad90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x26ad94: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x26ad94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x26ad98: 0x3c083000  lui         $t0, 0x3000
    ctx->pc = 0x26ad98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12288 << 16));
    // 0x26ad9c: 0x35084000  ori         $t0, $t0, 0x4000
    ctx->pc = 0x26ad9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x26ada0: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x26ada0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x26ada4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26ada4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26ada8: 0x24070412  addiu       $a3, $zero, 0x412
    ctx->pc = 0x26ada8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x26adac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26adacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26adb0: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x26adb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x26adb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26adb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26adb8: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x26adb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x26adbc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x26adbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x26adc0: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x26adc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26adc4: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x26adc4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x26adc8: 0x7ca20070  sq          $v0, 0x70($a1)
    ctx->pc = 0x26adc8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 2));
    // 0x26adcc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x26adccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26add0: 0x7ca20080  sq          $v0, 0x80($a1)
    ctx->pc = 0x26add0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 128), GPR_VEC(ctx, 2));
    // 0x26add4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x26add4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26add8: 0x7ca20090  sq          $v0, 0x90($a1)
    ctx->pc = 0x26add8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 144), GPR_VEC(ctx, 2));
    // 0x26addc: 0xdfa80020  ld          $t0, 0x20($sp)
    ctx->pc = 0x26addcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ade0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x26ade0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ade4: 0x9fa30028  lwu         $v1, 0x28($sp)
    ctx->pc = 0x26ade4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ade8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26ade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26adec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26adecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26adf0: 0x70481389  pcpyld      $v0, $v0, $t0
    ctx->pc = 0x26adf0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x26adf4: 0x7ca200a0  sq          $v0, 0xA0($a1)
    ctx->pc = 0x26adf4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 160), GPR_VEC(ctx, 2));
    // 0x26adf8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x26adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x26adfc: 0xdc48c4d0  ld          $t0, -0x3B30($v0)
    ctx->pc = 0x26adfcu;
    SET_GPR_U64(ctx, 8, FAST_READ64(0x62C4D0u));
    // 0x26ae00: 0x2443c4d0  addiu       $v1, $v0, -0x3B30
    ctx->pc = 0x26ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952144));
    // 0x26ae04: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x26ae04u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x62C4D8u));
    // 0x26ae08: 0x70481389  pcpyld      $v0, $v0, $t0
    ctx->pc = 0x26ae08u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x26ae0c: 0x7ca200b0  sq          $v0, 0xB0($a1)
    ctx->pc = 0x26ae0cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 176), GPR_VEC(ctx, 2));
    // 0x26ae10: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x26ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x26ae14: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x26ae14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x26ae18: 0x70c61cc8  ppacw       $v1, $a2, $a2
    ctx->pc = 0x26ae18u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x26ae1c: 0x704614c8  ppacw       $v0, $v0, $a2
    ctx->pc = 0x26ae1cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x26ae20: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x26ae20u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x26ae24: 0x7ca200c0  sq          $v0, 0xC0($a1)
    ctx->pc = 0x26ae24u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 192), GPR_VEC(ctx, 2));
    // 0x26ae28: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x26ae28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26ae2c: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x26ae2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
    // 0x26ae30: 0x35088005  ori         $t0, $t0, 0x8005
    ctx->pc = 0x26ae30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32773);
    // 0x26ae34: 0x71281389  pcpyld      $v0, $t1, $t0
    ctx->pc = 0x26ae34u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x26ae38: 0x7ca200d0  sq          $v0, 0xD0($a1)
    ctx->pc = 0x26ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 208), GPR_VEC(ctx, 2));
    // 0x26ae3c: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x26ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x26ae40: 0x70571389  pcpyld      $v0, $v0, $s7
    ctx->pc = 0x26ae40u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
    // 0x26ae44: 0x7ca200e0  sq          $v0, 0xE0($a1)
    ctx->pc = 0x26ae44u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 224), GPR_VEC(ctx, 2));
    // 0x26ae48: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x26ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26ae4c: 0x70541389  pcpyld      $v0, $v0, $s4
    ctx->pc = 0x26ae4cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 20)));
    // 0x26ae50: 0x7ca200f0  sq          $v0, 0xF0($a1)
    ctx->pc = 0x26ae50u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 240), GPR_VEC(ctx, 2));
    // 0x26ae54: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x26ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x26ae58: 0x705e1389  pcpyld      $v0, $v0, $fp
    ctx->pc = 0x26ae58u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 30)));
    // 0x26ae5c: 0x7ca20100  sq          $v0, 0x100($a1)
    ctx->pc = 0x26ae5cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 256), GPR_VEC(ctx, 2));
    // 0x26ae60: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x26ae60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x26ae64: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x26ae64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26ae68: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26ae68u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26ae6c: 0x7ca20110  sq          $v0, 0x110($a1)
    ctx->pc = 0x26ae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 272), GPR_VEC(ctx, 2));
    // 0x26ae70: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x26ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x26ae74: 0xdfa30058  ld          $v1, 0x58($sp)
    ctx->pc = 0x26ae74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26ae78: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x26ae78u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x26ae7c: 0x7ca20120  sq          $v0, 0x120($a1)
    ctx->pc = 0x26ae7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 288), GPR_VEC(ctx, 2));
    // 0x26ae80: 0x24a20130  addiu       $v0, $a1, 0x130
    ctx->pc = 0x26ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
    // 0x26ae84: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26ae84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26ae88: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26ae88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26ae8c: 0x3404d802  ori         $a0, $zero, 0xD802
    ctx->pc = 0x26ae8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x26ae90: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x26ae90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x26ae94: 0x3484fe80  ori         $a0, $a0, 0xFE80
    ctx->pc = 0x26ae94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65152);
    // 0x26ae98: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x26ae98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x26ae9c: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x26ae9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x26aea0: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x26aea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x26aea4: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x26aea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x26aea8: 0x708a2389  pcpyld      $a0, $a0, $t2
    ctx->pc = 0x26aea8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 10)));
    // 0x26aeac: 0x7ca40130  sq          $a0, 0x130($a1)
    ctx->pc = 0x26aeacu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 304), GPR_VEC(ctx, 4));
    // 0x26aeb0: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x26aeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x26aeb4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26aeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26aeb8: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x26aeb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26aebc: 0x92620047  lbu         $v0, 0x47($s3)
    ctx->pc = 0x26aebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x26aec0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26aec4: 0x8c634134  lw          $v1, 0x4134($v1)
    ctx->pc = 0x26aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4134u));
    // 0x26aec8: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x26aec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x26aecc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26aeccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26aed0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x26aed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26aed4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26AED4u;
    {
        const bool branch_taken_0x26aed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AED4u;
        // 0x26aed8: 0xaf8290cc  sw          $v0, -0x6F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aed4) {
            ctx->pc = 0x26AEF0u;
            goto label_26aef0;
        }
    }
    ctx->pc = 0x26AEDCu;
    // 0x26aedc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26aee0: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x26aee0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x26aee4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x26aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26aee8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26AEE8u;
    {
        const bool branch_taken_0x26aee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEE8u;
        // 0x26aeec: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aee8) {
            ctx->pc = 0x26AF00u;
            goto label_26af00;
        }
    }
    ctx->pc = 0x26AEF0u;
label_26aef0:
    // 0x26aef0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26aef4: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x26aef4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x26aef8: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x26aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x26aefc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26af00:
    // 0x26af00: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26af00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26af04: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x26af04u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x26af08: 0x92660029  lbu         $a2, 0x29($s3)
    ctx->pc = 0x26af08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x26af0c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x26af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26af10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26af10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26af14: 0x8c423510  lw          $v0, 0x3510($v0)
    ctx->pc = 0x26af14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3510u));
    // 0x26af18: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x26af18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x26af1c: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x26af1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x26af20: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x26af20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x26af24: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x26af24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x26af28: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x26af28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x26af2c: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x26af2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x26af30: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x26af30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x26af34: 0xdc640f90  ld          $a0, 0xF90($v1)
    ctx->pc = 0x26af34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 3984)));
    // 0x26af38: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x26af38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x26af3c: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x26af3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x26af40: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x26af40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x26af44: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x26af44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x26af48: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x26af48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x26af4c: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x26af4cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x26af50: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x26af50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x26af54: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x26af54u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x26af58: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x26af58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x26af5c: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x26af5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x26af60: 0x8cc6412c  lw          $a2, 0x412C($a2)
    ctx->pc = 0x26af60u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26af64: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x26af64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x26af68: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x26af68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x26af6c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26af6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26af70: 0xac26412c  sw          $a2, 0x412C($at)
    ctx->pc = 0x26af70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26af74: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x26af74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x26af78: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x26af78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x26af7c: 0x3442fec0  ori         $v0, $v0, 0xFEC0
    ctx->pc = 0x26af7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65216);
    // 0x26af80: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x26af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x26af84: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x26af84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x26af88: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x26af88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x26af8c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x26af8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x26af90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26af90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af94: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x26af94u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x26af98: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x26af98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x26af9c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x26af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x26afa0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26afa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26afa4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26afa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26afa8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26afac: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x26afacu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x26afb0: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x26afb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x26afb4: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x26afb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x26afb8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26afb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26afbc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26afbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26afc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26AFC0u;
    {
        const bool branch_taken_0x26afc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFC0u;
        // 0x26afc4: 0x92620044  lbu         $v0, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afc0) {
            ctx->pc = 0x26AFD8u;
            goto label_26afd8;
        }
    }
    ctx->pc = 0x26AFC8u;
    // 0x26afc8: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x26afc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x26afcc: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x26afccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x26afd0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26afd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26afd4: 0x0  nop
    ctx->pc = 0x26afd4u;
    // NOP
label_26afd8:
    // 0x26afd8: 0x92630045  lbu         $v1, 0x45($s3)
    ctx->pc = 0x26afd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 69)));
    // 0x26afdc: 0x92640046  lbu         $a0, 0x46($s3)
    ctx->pc = 0x26afdcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 70)));
    // 0x26afe0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x26afe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26afe4: 0x0  nop
    ctx->pc = 0x26afe4u;
    // NOP
    // 0x26afe8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x26afe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x26afec: 0x92650047  lbu         $a1, 0x47($s3)
    ctx->pc = 0x26afecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x26aff0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x26aff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26aff4: 0x0  nop
    ctx->pc = 0x26aff4u;
    // NOP
    // 0x26aff8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x26aff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x26affc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x26affcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26b000: 0x0  nop
    ctx->pc = 0x26b000u;
    // NOP
    // 0x26b004: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26b004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x26b008: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x26b008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x26b00c: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x26b00cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x26b010: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26b010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b014: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x26b014u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b018: 0x0  nop
    ctx->pc = 0x26b018u;
    // NOP
    // 0x26b01c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x26b01cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26b020: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x26b020u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26b024: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x26b024u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x26b028: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x26b028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26b02c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x26b02cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26b030: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x26b030u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x26b034: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x26b034u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x26b038: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x26b038u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x26b03c: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x26b03cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x26b040: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x26b040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26b044: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x26b044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26b048: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x26b048u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x26b04c: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x26b04cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x26b050: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x26b050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x26b054: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b058: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26b058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b05c: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x26b05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x26b060: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x26b060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x26b064: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x26b064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x26b068: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x26b068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x26b06c: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x26b06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x26b070: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x26b070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x26b074: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x26b074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x26b078: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x26b078u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x26b07c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x26b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x26b080: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x26b080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x26b084: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b088: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26b088u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b08c: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x26b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x26b090: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x26b090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x26b094: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x26b094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x26b098: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26b098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26b09c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x26b09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26b0a0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x26b0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26b0a4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26b0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b0a8: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x26b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b0ac: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x26b0acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x26b0b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26b0b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26b0b4: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x26b0b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26b0b8: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x26b0b8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x26b0bc: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x26b0bcu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x26b0c0: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x26b0c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x26b0c4: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x26b0c4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x26b0c8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x26b0c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26b0cc: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x26b0ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26b0d0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x26b0d0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x26b0d4: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x26b0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x26b0d8: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x26b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x26b0dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b0e0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26b0e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b0e4: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x26b0e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x26b0e8: 0x3404d806  ori         $a0, $zero, 0xD806
    ctx->pc = 0x26b0e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x26b0ec: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x26b0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x26b0f0: 0x3484ff40  ori         $a0, $a0, 0xFF40
    ctx->pc = 0x26b0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65344);
    // 0x26b0f4: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x26b0f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x26b0f8: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x26b0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x26b0fc: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x26b0fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x26b100: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x26b100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x26b104: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x26b104u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x26b108: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x26b108u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x26b10c: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x26b10cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x26b110: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x26b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x26b114: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b118: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26b118u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b11c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26b120: 0x8c633560  lw          $v1, 0x3560($v1)
    ctx->pc = 0x26b120u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3560u));
    // 0x26b124: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B124u;
    {
        const bool branch_taken_0x26b124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B124u;
        // 0x26b128: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b124) {
            ctx->pc = 0x26B138u;
            goto label_26b138;
        }
    }
    ctx->pc = 0x26B12Cu;
    // 0x26b12c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x26B12Cu;
    {
        const bool branch_taken_0x26b12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b12c) {
            ctx->pc = 0x26B130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B12Cu;
            // 0x26b130: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B158u;
            goto label_26b158;
        }
    }
    ctx->pc = 0x26B134u;
    // 0x26b134: 0x0  nop
    ctx->pc = 0x26b134u;
    // NOP
label_26b138:
    // 0x26b138: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26b138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26b13c: 0x8c423564  lw          $v0, 0x3564($v0)
    ctx->pc = 0x26b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3564u));
    // 0x26b140: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26B140u;
    {
        const bool branch_taken_0x26b140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B140u;
        // 0x26b144: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b140) {
            ctx->pc = 0x26B188u;
            goto label_26b188;
        }
    }
    ctx->pc = 0x26B148u;
    // 0x26b148: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x26B148u;
    {
        const bool branch_taken_0x26b148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b148) {
            ctx->pc = 0x26B14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B148u;
            // 0x26b14c: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B190u;
            goto label_26b190;
        }
    }
    ctx->pc = 0x26B150u;
    // 0x26b150: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x26b150u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x26b154: 0x0  nop
    ctx->pc = 0x26b154u;
    // NOP
label_26b158:
    // 0x26b158: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x26b158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26b15c: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x26b15cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26b160: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x26b160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26b164: 0x24631030  addiu       $v1, $v1, 0x1030
    ctx->pc = 0x26b164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
    // 0x26b168: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x26b168u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C1030u));
    // 0x26b16c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26b16cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26b170: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x26b170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26b174: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b178: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26b178u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b17c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x26b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26b180: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26B180u;
    {
        const bool branch_taken_0x26b180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B180u;
        // 0x26b184: 0x24631040  addiu       $v1, $v1, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b180) {
            ctx->pc = 0x26B1B8u;
            goto label_26b1b8;
        }
    }
    ctx->pc = 0x26B188u;
label_26b188:
    // 0x26b188: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x26b188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26b18c: 0x0  nop
    ctx->pc = 0x26b18cu;
    // NOP
label_26b190:
    // 0x26b190: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x26b190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26b194: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x26b194u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26b198: 0x24631010  addiu       $v1, $v1, 0x1010
    ctx->pc = 0x26b198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4112));
    // 0x26b19c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x26b19cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b1a0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26b1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26b1a4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x26b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26b1a8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b1ac: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26b1acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b1b0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x26b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26b1b4: 0x24631020  addiu       $v1, $v1, 0x1020
    ctx->pc = 0x26b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4128));
label_26b1b8:
    // 0x26b1b8: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x26b1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26b1bc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x26b1bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b1c0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26b1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26b1c4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b1c8: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x26b1c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b1cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26b1d0: 0x8c634140  lw          $v1, 0x4140($v1)
    ctx->pc = 0x26b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4140u));
    // 0x26b1d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26b1d8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B1D8u;
    {
        const bool branch_taken_0x26b1d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1D8u;
        // 0x26b1dc: 0xaf8084e8  sw          $zero, -0x7B18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1d8) {
            ctx->pc = 0x26B1ECu;
            goto label_26b1ec;
        }
    }
    ctx->pc = 0x26B1E0u;
    // 0x26b1e0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x26b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26b1e4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b1e8: 0xac223558  sw          $v0, 0x3558($at)
    ctx->pc = 0x26b1e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3558u, _value); } while (0);
label_26b1ec:
    // 0x26b1ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26b1f0: 0x9c42355c  lwu         $v0, 0x355C($v0)
    ctx->pc = 0x26b1f0u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x6B355Cu));
    // 0x26b1f4: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x26b1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x26b1f8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x26b1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26b1fc: 0x9c843558  lwu         $a0, 0x3558($a0)
    ctx->pc = 0x26b1fcu;
    SET_GPR_ZE32(ctx, 4, FAST_READ32(0x6B3558u));
    // 0x26b200: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x26b200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x26b204: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26b204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26b208: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x26b208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26b20c: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x26b20cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x26b210: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x26b210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26b214: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x26b214u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26b218: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x26b218u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x26b21c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x26b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26b220: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b224: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26b224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b228: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x26b228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x26b22c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26B22Cu;
    {
        const bool branch_taken_0x26b22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B22Cu;
        // 0x26b230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b22c) {
            ctx->pc = 0x26B2D0u;
            goto label_26b2d0;
        }
    }
    ctx->pc = 0x26B234u;
    // 0x26b234: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x26b234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x26b238: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x26b238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x26b23c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x26b23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x26b240: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x26b240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x26b244: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26b244u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26b248: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26b248u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26b24c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x26b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26b250: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b254: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26b254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b258: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26b258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26b25c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x26b25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x26b260: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x26b260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x26b264: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x26b264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26b268: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26b268u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26b26c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x26b26cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x26b270: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x26b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x26b274: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b278: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26b278u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b27c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26b280: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x26b280u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x26b284: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x26b284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x26b288: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26b288u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26b28c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x26b28cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x26b290: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x26b290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x26b294: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b298: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26b298u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b29c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26b2a0: 0xdc4234f8  ld          $v0, 0x34F8($v0)
    ctx->pc = 0x26b2a0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F8u));
    // 0x26b2a4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x26b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26b2a8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26b2a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26b2ac: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x26b2acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x26b2b0: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x26b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x26b2b4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b2b8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26b2b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b2bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26b2c0: 0xdc4234f0  ld          $v0, 0x34F0($v0)
    ctx->pc = 0x26b2c0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F0u));
    // 0x26b2c4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x26B2C4u;
    {
        const bool branch_taken_0x26b2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2C4u;
        // 0x26b2c8: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2c4) {
            ctx->pc = 0x26B350u;
            goto label_26b350;
        }
    }
    ctx->pc = 0x26B2CCu;
    // 0x26b2cc: 0x0  nop
    ctx->pc = 0x26b2ccu;
    // NOP
label_26b2d0:
    // 0x26b2d0: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x26b2d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26b2d4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26b2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26b2d8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x26b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26b2dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b2e0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26b2e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b2e4: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x26b2e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26b2e8: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x26b2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x26b2ec: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x26b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x26b2f0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b2f4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26b2f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b2f8: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x26b2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x26b2fc: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x26b2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x26b300: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x26b300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x26b304: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x26b304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x26b308: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26b308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b30c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26b30cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26b310: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x26b310u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x26b314: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x26b314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x26b318: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b31c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26b31cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b320: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26b320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26b324: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x26b324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x26b328: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x26b328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x26b32c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x26b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26b330: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26b330u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26b334: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x26b334u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x26b338: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x26b338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x26b33c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b340: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26b340u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b344: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26b344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26b348: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x26b348u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x26b34c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x26b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_26b350:
    // 0x26b350: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26b350u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26b354: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x26b354u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x26b358: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x26b358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x26b35c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b360: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26b360u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b364: 0x92630028  lbu         $v1, 0x28($s3)
    ctx->pc = 0x26b364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x26b368: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x26b368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x26b36c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x26b36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x26b370: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x26b370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26b374: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x26b374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x26b378: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x26b378u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x26b37c: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x26b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x26b380: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26b380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26b384: 0xa262002b  sb          $v0, 0x2B($s3)
    ctx->pc = 0x26b384u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x26b388: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x26b388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26b38c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x26b38cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x26b390: 0x8ca53554  lw          $a1, 0x3554($a1)
    ctx->pc = 0x26b390u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3554u));
    // 0x26b394: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26b394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26b398: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x26b398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x26b39c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26b3a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b3a4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x26b3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b3a8: 0x10a6000d  beq         $a1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x26B3A8u;
    {
        const bool branch_taken_0x26b3a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x26B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3A8u;
        // 0x26b3ac: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3a8) {
            ctx->pc = 0x26B3E0u;
            goto label_26b3e0;
        }
    }
    ctx->pc = 0x26B3B0u;
    // 0x26b3b0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x26b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x26b3b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x26b3b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26b3b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26b3b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b3bc: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x26b3bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x26b3c0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26b3c4: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x26b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26b3c8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26b3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x26b3cc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x26b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x26b3d0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b3d4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26b3d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b3d8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b3dc: 0xac263554  sw          $a2, 0x3554($at)
    ctx->pc = 0x26b3dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B3554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3554u, _value); } while (0);
label_26b3e0:
    // 0x26b3e0: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x26b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x26b3e4: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x26b3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x26b3e8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x26b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26b3ec: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x26b3ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x26b3f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26b3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b3f4: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x26b3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x26b3f8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x26b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x26b3fc: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x26b3fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x26b400: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x26b400u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x26b404: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x26b404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x26b408: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26b408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26b40c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x26b40cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x26b410: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x26b410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x26b414: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x26b414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x26b418: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x26b418u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x26b41c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26b420: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x26b420u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26b424: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26b424u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x26b428: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x26b428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x26b42c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b430: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26b430u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b434: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26b434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_26b438:
    // 0x26b438: 0x42000039  di
    ctx->pc = 0x26b438u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x26b43c: 0x40f  sync.p
    ctx->pc = 0x26b43cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x26b440: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x26b440u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x26b444: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26b444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26b448: 0x0  nop
    ctx->pc = 0x26b448u;
    // NOP
    // 0x26b44c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26B44Cu;
    {
        const bool branch_taken_0x26b44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b44c) {
            ctx->pc = 0x26B438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b438;
        }
    }
    ctx->pc = 0x26B454u;
    // 0x26b454: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x26b454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x26b458: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26b458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26b45c: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x26b45cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x26b460: 0x42000038  ei
    ctx->pc = 0x26b460u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x26b464: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x26b464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x26b468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26b468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b46c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b470: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B470u;
    {
        const bool branch_taken_0x26b470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B470u;
        // 0x26b474: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b470) {
            ctx->pc = 0x26B480u;
            goto label_26b480;
        }
    }
    ctx->pc = 0x26B478u;
    // 0x26b478: 0xc08b97e  jal         func_22E5F8
    ctx->pc = 0x26B478u;
    SET_GPR_U32(ctx, 31, 0x26B480u);
    ctx->pc = 0x26B47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B478u;
    // 0x26b47c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E5F8u, 0x26B478u, 0x26B480u)) {
        return;
    }
    ctx->pc = 0x26B480u;
label_26b480:
    // 0x26b480: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26b480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b484: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x26B484u;
    SET_GPR_U32(ctx, 31, 0x26B48Cu);
    ctx->pc = 0x26B488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B484u;
    // 0x26b488: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x26B484u, 0x26B48Cu)) {
        return;
    }
    ctx->pc = 0x26B48Cu;
label_26b48c:
    // 0x26b48c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x26b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x26b490: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26b490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b494: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x26b494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x26b498: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x26b498u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26b49c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x26b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x26b4a0: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x26b4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x26b4a4: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x26b4a4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x26b4a8: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x26b4a8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26b4ac: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x26b4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26b4b0: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x26b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26b4b4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x26b4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x26b4b8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x26b4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26b4bc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b4c0: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26b4c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b4c4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x26b4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26b4c8: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x26b4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x26b4cc: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x26b4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x26b4d0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x26b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26b4d4: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x26b4d4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x26b4d8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26b4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26b4dc: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x26b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26b4e0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b4e4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26b4e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b4e8: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x26b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x26b4ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26b4f0: 0xdc4234e8  ld          $v0, 0x34E8($v0)
    ctx->pc = 0x26b4f0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34E8u));
    // 0x26b4f4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26b4f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26b4f8: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x26b4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x26b4fc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x26b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x26b500: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b504: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26b504u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b50c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x26b50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26b510: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x26b510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26b514: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x26b514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26b518: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x26b518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26b51c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x26b51cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26b520: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x26b520u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26b524: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x26b524u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26b528: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x26b528u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26b52c: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x26b52cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26b530: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26b530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26b534: 0x3e00008  jr          $ra
    ctx->pc = 0x26B534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B534u;
        // 0x26b538: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B53Cu;
    // 0x26b53c: 0x0  nop
    ctx->pc = 0x26b53cu;
    // NOP
    ctx->pc = 0x26b540u;
}
