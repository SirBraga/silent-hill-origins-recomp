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

// Function: sub_002EDE10
// Address: 0x2ede10 - 0x2ee028
void sub_002EDE10_0x2ede10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDE10_0x2ede10");
#endif

    switch (ctx->pc) {
        case 0x2ede6cu: goto label_2ede6c;
        case 0x2edf48u: goto label_2edf48;
        case 0x2edf68u: goto label_2edf68;
        case 0x2edf8cu: goto label_2edf8c;
        case 0x2edfb0u: goto label_2edfb0;
        case 0x2edff4u: goto label_2edff4;
        default: break;
    }

    ctx->pc = 0x2ede10u;

    // 0x2ede10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2ede10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2ede14: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2ede14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2ede18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ede18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ede1c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ede1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede20: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2ede20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2ede24: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2ede24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede28: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2ede28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2ede2c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2ede2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede30: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2ede30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2ede34: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x2ede34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede38: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2ede38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2ede3c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2ede3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2ede40: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2ede40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2ede44: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2ede44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2ede48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ede48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ede4c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2ede4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2ede50: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2EDE50u;
    {
        const bool branch_taken_0x2ede50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE50u;
        // 0x2ede54: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede50) {
            ctx->pc = 0x2EDE7Cu;
            goto label_2ede7c;
        }
    }
    ctx->pc = 0x2EDE58u;
    // 0x2ede58: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2ede58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2ede5c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2ede5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2ede60: 0x2484f0d0  addiu       $a0, $a0, -0xF30
    ctx->pc = 0x2ede60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963408));
    // 0x2ede64: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x2EDE64u;
    SET_GPR_U32(ctx, 31, 0x2EDE6Cu);
    ctx->pc = 0x2EDE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE64u;
    // 0x2ede68: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2EDE64u, 0x2EDE6Cu)) {
        return;
    }
    ctx->pc = 0x2EDE6Cu;
label_2ede6c:
    // 0x2ede6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ede6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ede70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ede70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede74: 0x1240005f  beqz        $s2, . + 4 + (0x5F << 2)
    ctx->pc = 0x2EDE74u;
    {
        const bool branch_taken_0x2ede74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE74u;
        // 0x2ede78: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede74) {
            ctx->pc = 0x2EDFF4u;
            goto label_2edff4;
        }
    }
    ctx->pc = 0x2EDE7Cu;
label_2ede7c:
    // 0x2ede7c: 0x2f5001b  divu        $zero, $s7, $s5
    ctx->pc = 0x2ede7cu;
    { uint32_t divisor = GPR_U32(ctx, 21); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 23) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 23) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,23); } }
    // 0x2ede80: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ede80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ede84: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x2ede84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x2ede88: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2ede88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2ede8c: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EDE8Cu;
    {
        const bool branch_taken_0x2ede8c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ede8c) {
            ctx->pc = 0x2EDE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDE8Cu;
            // 0x2ede90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDE94u;
            goto label_2ede94;
        }
    }
    ctx->pc = 0x2EDE94u;
label_2ede94:
    // 0x2ede94: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2ede94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede98: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x2ede98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede9c: 0x2012  mflo        $a0
    ctx->pc = 0x2ede9cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2edea0: 0x24840007  addiu       $a0, $a0, 0x7
    ctx->pc = 0x2edea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x2edea4: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x2edea4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2edea8: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x2edea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x2edeac: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EDEACu;
    {
        const bool branch_taken_0x2edeac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEACu;
        // 0x2edeb0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edeac) {
            ctx->pc = 0x2EDEF8u;
            goto label_2edef8;
        }
    }
    ctx->pc = 0x2EDEB4u;
    // 0x2edeb4: 0x101c02  srl         $v1, $s0, 16
    ctx->pc = 0x2edeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x2edeb8: 0x3062ff00  andi        $v0, $v1, 0xFF00
    ctx->pc = 0x2edeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2edebc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EDEBCu;
    {
        const bool branch_taken_0x2edebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEBCu;
        // 0x2edec0: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edebc) {
            ctx->pc = 0x2EDEE0u;
            goto label_2edee0;
        }
    }
    ctx->pc = 0x2EDEC4u;
    // 0x2edec4: 0x102602  srl         $a0, $s0, 24
    ctx->pc = 0x2edec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x2edec8: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x2edec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x2edecc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2edeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eded0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2eded0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eded4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x2eded4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2eded8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2EDED8u;
    {
        const bool branch_taken_0x2eded8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDED8u;
        // 0x2ededc: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eded8) {
            ctx->pc = 0x2EDF2Cu;
            goto label_2edf2c;
        }
    }
    ctx->pc = 0x2EDEE0u;
label_2edee0:
    // 0x2edee0: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x2edee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x2edee4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2edee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2edee8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2edee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2edeec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2edeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2edef0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2EDEF0u;
    {
        const bool branch_taken_0x2edef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEF0u;
        // 0x2edef4: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edef0) {
            ctx->pc = 0x2EDF2Cu;
            goto label_2edf2c;
        }
    }
    ctx->pc = 0x2EDEF8u;
label_2edef8:
    // 0x2edef8: 0x3082ff00  andi        $v0, $a0, 0xFF00
    ctx->pc = 0x2edef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x2edefc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EDEFCu;
    {
        const bool branch_taken_0x2edefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEFCu;
        // 0x2edf00: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edefc) {
            ctx->pc = 0x2EDF20u;
            goto label_2edf20;
        }
    }
    ctx->pc = 0x2EDF04u;
    // 0x2edf04: 0x102202  srl         $a0, $s0, 8
    ctx->pc = 0x2edf04u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x2edf08: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x2edf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x2edf0c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2edf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2edf10: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2edf10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2edf14: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2edf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2edf18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDF18u;
    {
        const bool branch_taken_0x2edf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF18u;
        // 0x2edf1c: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf18) {
            ctx->pc = 0x2EDF2Cu;
            goto label_2edf2c;
        }
    }
    ctx->pc = 0x2EDF20u;
label_2edf20:
    // 0x2edf20: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x2edf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x2edf24: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2edf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2edf28: 0x90530000  lbu         $s3, 0x0($v0)
    ctx->pc = 0x2edf28u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2edf2c:
    // 0x2edf2c: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EDF2Cu;
    {
        const bool branch_taken_0x2edf2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF2Cu;
        // 0x2edf30: 0x1080c2  srl         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf2c) {
            ctx->pc = 0x2EDF54u;
            goto label_2edf54;
        }
    }
    ctx->pc = 0x2EDF34u;
    // 0x2edf34: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2edf34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2edf38: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2edf38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2edf3c: 0x2484f0a8  addiu       $a0, $a0, -0xF58
    ctx->pc = 0x2edf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963368));
    // 0x2edf40: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x2EDF40u;
    SET_GPR_U32(ctx, 31, 0x2EDF48u);
    ctx->pc = 0x2EDF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF40u;
    // 0x2edf44: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2EDF40u, 0x2EDF48u)) {
        return;
    }
    ctx->pc = 0x2EDF48u;
label_2edf48:
    // 0x2edf48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2edf48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf4c: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2EDF4Cu;
    {
        const bool branch_taken_0x2edf4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF4Cu;
        // 0x2edf50: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf4c) {
            ctx->pc = 0x2EDFE0u;
            goto label_2edfe0;
        }
    }
    ctx->pc = 0x2EDF54u;
label_2edf54:
    // 0x2edf54: 0x57c00008  bnel        $fp, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EDF54u;
    {
        const bool branch_taken_0x2edf54 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edf54) {
            ctx->pc = 0x2EDF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDF54u;
            // 0x2edf58: 0xa2330008  sb          $s3, 0x8($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDF78u;
            goto label_2edf78;
        }
    }
    ctx->pc = 0x2EDF5Cu;
    // 0x2edf5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf60: 0xc0b7076  jal         func_2DC1D8
    ctx->pc = 0x2EDF60u;
    SET_GPR_U32(ctx, 31, 0x2EDF68u);
    ctx->pc = 0x2EDF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF60u;
    // 0x2edf64: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2EDF60u, 0x2EDF68u)) {
        return;
    }
    ctx->pc = 0x2EDF68u;
label_2edf68:
    // 0x2edf68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2edf68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf6c: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x2EDF6Cu;
    {
        const bool branch_taken_0x2edf6c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF6Cu;
        // 0x2edf70: 0x36d60002  ori         $s6, $s6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf6c) {
            ctx->pc = 0x2EDF98u;
            goto label_2edf98;
        }
    }
    ctx->pc = 0x2EDF74u;
    // 0x2edf74: 0xa2330008  sb          $s3, 0x8($s1)
    ctx->pc = 0x2edf74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 19));
label_2edf78:
    // 0x2edf78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2edf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf7c: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x2edf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x2edf80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2edf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf84: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2EDF84u;
    SET_GPR_U32(ctx, 31, 0x2EDF8Cu);
    ctx->pc = 0x2EDF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF84u;
    // 0x2edf88: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2EDF84u, 0x2EDF8Cu)) {
        return;
    }
    ctx->pc = 0x2EDF8Cu;
label_2edf8c:
    // 0x2edf8c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2edf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2edf90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EDF90u;
    {
        const bool branch_taken_0x2edf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF90u;
        // 0x2edf94: 0xa2360009  sb          $s6, 0x9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf90) {
            ctx->pc = 0x2EDFB4u;
            goto label_2edfb4;
        }
    }
    ctx->pc = 0x2EDF98u;
label_2edf98:
    // 0x2edf98: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x2edf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x2edf9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDF9Cu;
    {
        const bool branch_taken_0x2edf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF9Cu;
        // 0x2edfa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf9c) {
            ctx->pc = 0x2EDFB0u;
            goto label_2edfb0;
        }
    }
    ctx->pc = 0x2EDFA4u;
    // 0x2edfa4: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2edfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2edfa8: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2EDFA8u;
    SET_GPR_U32(ctx, 31, 0x2EDFB0u);
    ctx->pc = 0x2EDFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDFA8u;
    // 0x2edfac: 0x2484f0a8  addiu       $a0, $a0, -0xF58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2EDFA8u, 0x2EDFB0u)) {
        return;
    }
    ctx->pc = 0x2EDFB0u;
label_2edfb0:
    // 0x2edfb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2edfb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2edfb4:
    // 0x2edfb4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2EDFB4u;
    {
        const bool branch_taken_0x2edfb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFB4u;
        // 0x2edfb8: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edfb4) {
            ctx->pc = 0x2EDFE4u;
            goto label_2edfe4;
        }
    }
    ctx->pc = 0x2EDFBCu;
    // 0x2edfbc: 0xae550014  sw          $s5, 0x14($s2)
    ctx->pc = 0x2edfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 21));
    // 0x2edfc0: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x2edfc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x2edfc4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2edfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2edfc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2edfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2edfcc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2edfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edfd0: 0xa2420009  sb          $v0, 0x9($s2)
    ctx->pc = 0x2edfd0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x2edfd4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x2edfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x2edfd8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EDFD8u;
    {
        const bool branch_taken_0x2edfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFD8u;
        // 0x2edfdc: 0xae570010  sw          $s7, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edfd8) {
            ctx->pc = 0x2EDFF4u;
            goto label_2edff4;
        }
    }
    ctx->pc = 0x2EDFE0u;
label_2edfe0:
    // 0x2edfe0: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2edfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2edfe4:
    // 0x2edfe4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2edfe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edfe8: 0x2484f0d0  addiu       $a0, $a0, -0xF30
    ctx->pc = 0x2edfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963408));
    // 0x2edfec: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2EDFECu;
    SET_GPR_U32(ctx, 31, 0x2EDFF4u);
    ctx->pc = 0x2EDFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDFECu;
    // 0x2edff0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2EDFECu, 0x2EDFF4u)) {
        return;
    }
    ctx->pc = 0x2EDFF4u;
label_2edff4:
    // 0x2edff4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2edff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edff8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2edff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2edffc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2edffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ee000: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2ee000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ee004: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2ee004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ee008: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2ee008u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ee00c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ee00cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ee010: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2ee010u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ee014: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2ee014u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee018: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2ee018u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee01c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ee01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee020: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE020u;
        // 0x2ee024: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE028u;
}
