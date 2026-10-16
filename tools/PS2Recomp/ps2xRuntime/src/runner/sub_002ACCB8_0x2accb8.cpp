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

// Function: sub_002ACCB8
// Address: 0x2accb8 - 0x2acee0
void sub_002ACCB8_0x2accb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACCB8_0x2accb8");
#endif

    switch (ctx->pc) {
        case 0x2acd18u: goto label_2acd18;
        case 0x2acd48u: goto label_2acd48;
        case 0x2acd6cu: goto label_2acd6c;
        case 0x2acdc0u: goto label_2acdc0;
        default: break;
    }

    ctx->pc = 0x2accb8u;

    // 0x2accb8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2accb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2accbc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2accbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2accc0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2accc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2accc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2accc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2accc8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2accc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2acccc: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2accccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2accd0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2accd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2accd4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2accd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2accd8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2accd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2accdc: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2accdcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acce0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2acce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2acce4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2acce4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acce8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2acce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2accec: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2accecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2accf0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2accf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2accf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2accf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2accf8: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2accf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2accfc: 0x1240006b  beqz        $s2, . + 4 + (0x6B << 2)
    ctx->pc = 0x2ACCFCu;
    {
        const bool branch_taken_0x2accfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCFCu;
        // 0x2acd00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2accfc) {
            ctx->pc = 0x2ACEACu;
            goto label_2aceac;
        }
    }
    ctx->pc = 0x2ACD04u;
    // 0x2acd04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2acd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2acd08: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2ACD08u;
    {
        const bool branch_taken_0x2acd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD08u;
        // 0x2acd0c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd08) {
            ctx->pc = 0x2ACD34u;
            goto label_2acd34;
        }
    }
    ctx->pc = 0x2ACD10u;
    // 0x2acd10: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x2acd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2acd14: 0x0  nop
    ctx->pc = 0x2acd14u;
    // NOP
label_2acd18:
    // 0x2acd18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2acd18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2acd1c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2acd1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2acd20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2acd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2acd24: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2acd24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2acd28: 0x0  nop
    ctx->pc = 0x2acd28u;
    // NOP
    // 0x2acd2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2ACD2Cu;
    {
        const bool branch_taken_0x2acd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD2Cu;
        // 0x2acd30: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd2c) {
            ctx->pc = 0x2ACD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acd18;
        }
    }
    ctx->pc = 0x2ACD34u;
label_2acd34:
    // 0x2acd34: 0x13c0005c  beqz        $fp, . + 4 + (0x5C << 2)
    ctx->pc = 0x2ACD34u;
    {
        const bool branch_taken_0x2acd34 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD34u;
        // 0x2acd38: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd34) {
            ctx->pc = 0x2ACEA8u;
            goto label_2acea8;
        }
    }
    ctx->pc = 0x2ACD3Cu;
    // 0x2acd3c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2acd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2acd40: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2acd40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd44: 0x2a29818  mult        $s3, $s5, $v0
    ctx->pc = 0x2acd44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_2acd48:
    // 0x2acd48: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2acd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2acd4c: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x2acd4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2acd50: 0x94510020  lhu         $s1, 0x20($v0)
    ctx->pc = 0x2acd50u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2acd54: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2acd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2acd58: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x2acd58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x2acd5c: 0x8e060080  lw          $a2, 0x80($s0)
    ctx->pc = 0x2acd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2acd60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2acd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd64: 0xc0adfa8  jal         func_2B7EA0
    ctx->pc = 0x2ACD64u;
    SET_GPR_U32(ctx, 31, 0x2ACD6Cu);
    ctx->pc = 0x2ACD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD64u;
    // 0x2acd68: 0x8e070070  lw          $a3, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7EA0u, 0x2ACD64u, 0x2ACD6Cu)) {
        return;
    }
    ctx->pc = 0x2ACD6Cu;
label_2acd6c:
    // 0x2acd6c: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x2acd6cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd70: 0x112142  srl         $a0, $s1, 5
    ctx->pc = 0x2acd70u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x2acd74: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2acd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2acd78: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2acd78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acd7c: 0x3223001f  andi        $v1, $s1, 0x1F
    ctx->pc = 0x2acd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x2acd80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2acd80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd84: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2acd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2acd88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2acd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acd8c: 0x621804  sllv        $v1, $v0, $v1
    ctx->pc = 0x2acd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2acd90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2acd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2acd94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2acd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2acd98: 0x11a0003f  beqz        $t5, . + 4 + (0x3F << 2)
    ctx->pc = 0x2ACD98u;
    {
        const bool branch_taken_0x2acd98 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD98u;
        // 0x2acd9c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd98) {
            ctx->pc = 0x2ACE98u;
            goto label_2ace98;
        }
    }
    ctx->pc = 0x2ACDA0u;
    // 0x2acda0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2acda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acda4: 0x117080  sll         $t6, $s1, 2
    ctx->pc = 0x2acda4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2acda8: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x2acda8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acdac: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x2acdacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2acdb0: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x2acdb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2acdb4: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x2acdb4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2acdb8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2acdb8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acdbc: 0x2624021  addu        $t0, $s3, $v0
    ctx->pc = 0x2acdbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2acdc0:
    // 0x2acdc0: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2acdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2acdc4: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x2acdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2acdc8: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2acdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2acdcc: 0x94490000  lhu         $t1, 0x0($v0)
    ctx->pc = 0x2acdccu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2acdd0: 0x91942  srl         $v1, $t1, 5
    ctx->pc = 0x2acdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 5));
    // 0x2acdd4: 0x3122001f  andi        $v0, $t1, 0x1F
    ctx->pc = 0x2acdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
    // 0x2acdd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2acdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2acddc: 0x583004  sllv        $a2, $t8, $v0
    ctx->pc = 0x2acddcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 2) & 0x1F));
    // 0x2acde0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2acde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2acde4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2acde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2acde8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2acde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2acdec: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2ACDECu;
    {
        const bool branch_taken_0x2acdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acdec) {
            ctx->pc = 0x2ACDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACDECu;
            // 0x2acdf0: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACE8Cu;
            goto label_2ace8c;
        }
    }
    ctx->pc = 0x2ACDF4u;
    // 0x2acdf4: 0x12510014  beq         $s2, $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2ACDF4u;
    {
        const bool branch_taken_0x2acdf4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x2ACDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDF4u;
        // 0x2acdf8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acdf4) {
            ctx->pc = 0x2ACE48u;
            goto label_2ace48;
        }
    }
    ctx->pc = 0x2ACDFCu;
    // 0x2acdfc: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x2acdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2ace00: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2ace00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2ace04: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2ace04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ace08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ace08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ace0c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ace0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ace10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ace10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ace14: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2ace14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2ace18: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x2ace18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x2ace1c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ACE1Cu;
    {
        const bool branch_taken_0x2ace1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE1Cu;
        // 0x2ace20: 0x1e3380a  movz        $a3, $t7, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace1c) {
            ctx->pc = 0x2ACE3Cu;
            goto label_2ace3c;
        }
    }
    ctx->pc = 0x2ACE24u;
    // 0x2ace24: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2ace24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ace28: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2ace28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2ace2c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ACE2Cu;
    {
        const bool branch_taken_0x2ace2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ace2c) {
            ctx->pc = 0x2ACE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACE2Cu;
            // 0x2ace30: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACE4Cu;
            goto label_2ace4c;
        }
    }
    ctx->pc = 0x2ACE34u;
    // 0x2ace34: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2ACE34u;
    {
        const bool branch_taken_0x2ace34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE34u;
        // 0x2ace38: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace34) {
            ctx->pc = 0x2ACE8Cu;
            goto label_2ace8c;
        }
    }
    ctx->pc = 0x2ACE3Cu;
label_2ace3c:
    // 0x2ace3c: 0x2471024  and         $v0, $s2, $a3
    ctx->pc = 0x2ace3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 7));
    // 0x2ace40: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2ACE40u;
    {
        const bool branch_taken_0x2ace40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ace40) {
            ctx->pc = 0x2ACE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACE40u;
            // 0x2ace44: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACE8Cu;
            goto label_2ace8c;
        }
    }
    ctx->pc = 0x2ACE48u;
label_2ace48:
    // 0x2ace48: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2ace48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2ace4c:
    // 0x2ace4c: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x2ace4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2ace50: 0xa50c0004  sh          $t4, 0x4($t0)
    ctx->pc = 0x2ace50u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 12));
    // 0x2ace54: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x2ace54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x2ace58: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x2ace58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2ace5c: 0xa50c000c  sh          $t4, 0xC($t0)
    ctx->pc = 0x2ace5cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 12));
    // 0x2ace60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ace60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ace64: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2ace64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2ace68: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x2ace68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x2ace6c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2ace6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x2ace70: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2ace70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2ace74: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ace74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ace78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ace78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ace7c: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x2ace7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x2ace80: 0x12b70009  beq         $s5, $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ACE80u;
    {
        const bool branch_taken_0x2ace80 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x2ACE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE80u;
        // 0x2ace84: 0x25080014  addiu       $t0, $t0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace80) {
            ctx->pc = 0x2ACEA8u;
            goto label_2acea8;
        }
    }
    ctx->pc = 0x2ACE88u;
    // 0x2ace88: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2ace88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2ace8c:
    // 0x2ace8c: 0x14d102b  sltu        $v0, $t2, $t5
    ctx->pc = 0x2ace8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2ace90: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2ACE90u;
    {
        const bool branch_taken_0x2ace90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE90u;
        // 0x2ace94: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace90) {
            ctx->pc = 0x2ACDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acdc0;
        }
    }
    ctx->pc = 0x2ACE98u;
label_2ace98:
    // 0x2ace98: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2ace98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2ace9c: 0x29e102b  sltu        $v0, $s4, $fp
    ctx->pc = 0x2ace9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x2acea0: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x2ACEA0u;
    {
        const bool branch_taken_0x2acea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEA0u;
        // 0x2acea4: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acea0) {
            ctx->pc = 0x2ACD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acd48;
        }
    }
    ctx->pc = 0x2ACEA8u;
label_2acea8:
    // 0x2acea8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2acea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2aceac:
    // 0x2aceac: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2aceacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2aceb0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2aceb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aceb4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2aceb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2aceb8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2aceb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2acebc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2acebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2acec0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2acec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2acec4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2acec4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2acec8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2acec8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2acecc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2aceccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aced0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aced0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aced4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACED4u;
        // 0x2aced8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACEDCu;
    // 0x2acedc: 0x0  nop
    ctx->pc = 0x2acedcu;
    // NOP
    ctx->pc = 0x2acee0u;
}
