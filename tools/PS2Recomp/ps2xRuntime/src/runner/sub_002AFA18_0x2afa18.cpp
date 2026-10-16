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

// Function: sub_002AFA18
// Address: 0x2afa18 - 0x2afcd0
void sub_002AFA18_0x2afa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFA18_0x2afa18");
#endif

    switch (ctx->pc) {
        case 0x2afa60u: goto label_2afa60;
        case 0x2afa98u: goto label_2afa98;
        case 0x2afb48u: goto label_2afb48;
        case 0x2afc00u: goto label_2afc00;
        default: break;
    }

    ctx->pc = 0x2afa18u;

    // 0x2afa18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2afa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2afa1c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2afa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2afa20: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2afa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2afa24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2afa24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afa28: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2afa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2afa2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2afa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2afa30: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2afa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2afa34: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2afa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2afa38: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2afa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2afa3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2afa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2afa40: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x2afa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2afa44: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2AFA44u;
    {
        const bool branch_taken_0x2afa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFA44u;
        // 0x2afa48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afa44) {
            ctx->pc = 0x2AFCA0u;
            goto label_2afca0;
        }
    }
    ctx->pc = 0x2AFA4Cu;
    // 0x2afa4c: 0x24160028  addiu       $s6, $zero, 0x28
    ctx->pc = 0x2afa4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2afa50: 0x24150014  addiu       $s5, $zero, 0x14
    ctx->pc = 0x2afa50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2afa54: 0x241300e0  addiu       $s3, $zero, 0xE0
    ctx->pc = 0x2afa54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2afa58: 0x241400e0  addiu       $s4, $zero, 0xE0
    ctx->pc = 0x2afa58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2afa5c: 0xb62018  mult        $a0, $a1, $s6
    ctx->pc = 0x2afa5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2afa60:
    // 0x2afa60: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x2afa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2afa64: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x2afa64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2afa68: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2afa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2afa6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2afa6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2afa70: 0x14400086  bnez        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2AFA70u;
    {
        const bool branch_taken_0x2afa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFA70u;
        // 0x2afa74: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afa70) {
            ctx->pc = 0x2AFC8Cu;
            goto label_2afc8c;
        }
    }
    ctx->pc = 0x2AFA78u;
    // 0x2afa78: 0x8e080084  lw          $t0, 0x84($s0)
    ctx->pc = 0x2afa78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2afa7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2afa7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afa80: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2afa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2afa84: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2AFA84u;
    {
        const bool branch_taken_0x2afa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFA84u;
        // 0x2afa88: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afa84) {
            ctx->pc = 0x2AFB18u;
            goto label_2afb18;
        }
    }
    ctx->pc = 0x2AFA8Cu;
    // 0x2afa8c: 0x240b0014  addiu       $t3, $zero, 0x14
    ctx->pc = 0x2afa8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2afa90: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x2afa90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2afa94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2afa94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2afa98:
    // 0x2afa98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2afa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2afa9c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2afa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2afaa0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2afaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2afaa4: 0x94c3000c  lhu         $v1, 0xC($a2)
    ctx->pc = 0x2afaa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2afaa8: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x2afaa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2afaac: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AFAACu;
    {
        const bool branch_taken_0x2afaac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afaac) {
            ctx->pc = 0x2AFAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFAACu;
            // 0x2afab0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFB04u;
            goto label_2afb04;
        }
    }
    ctx->pc = 0x2AFAB4u;
    // 0x2afab4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2afab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2afab8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2afab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2afabc: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AFABCu;
    {
        const bool branch_taken_0x2afabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afabc) {
            ctx->pc = 0x2AFAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFABCu;
            // 0x2afac0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFB04u;
            goto label_2afb04;
        }
    }
    ctx->pc = 0x2AFAC4u;
    // 0x2afac4: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x2afac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2afac8: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x2afac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2afacc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2afaccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2afad0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AFAD0u;
    {
        const bool branch_taken_0x2afad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAD0u;
        // 0x2afad4: 0xab2018  mult        $a0, $a1, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afad0) {
            ctx->pc = 0x2AFB00u;
            goto label_2afb00;
        }
    }
    ctx->pc = 0x2AFAD8u;
    // 0x2afad8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2afad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2afadc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2afadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2afae0: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x2afae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x2afae4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2afae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2afae8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2afae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2afaec: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x2afaecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x2afaf0: 0xa46a0004  sh          $t2, 0x4($v1)
    ctx->pc = 0x2afaf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 10));
    // 0x2afaf4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2afaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2afaf8: 0xa46a000c  sh          $t2, 0xC($v1)
    ctx->pc = 0x2afaf8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 10));
    // 0x2afafc: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2afafcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2afb00:
    // 0x2afb00: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2afb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2afb04:
    // 0x2afb04: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2afb04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2afb08: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2afb08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2afb0c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2afb0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2afb10: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2AFB10u;
    {
        const bool branch_taken_0x2afb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB10u;
        // 0x2afb14: 0x8e060084  lw          $a2, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb10) {
            ctx->pc = 0x2AFA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afa98;
        }
    }
    ctx->pc = 0x2AFB18u;
label_2afb18:
    // 0x2afb18: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2afb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2afb1c: 0x1154818  mult        $t1, $t0, $s5
    ctx->pc = 0x2afb1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2afb20: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x2afb20u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2afb24: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x2afb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2afb28: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x2afb28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2afb2c: 0x8e07008c  lw          $a3, 0x8C($s0)
    ctx->pc = 0x2afb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2afb30: 0x8e080094  lw          $t0, 0x94($s0)
    ctx->pc = 0x2afb30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2afb34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2afb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afb38: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2afb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2afb3c: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x2afb3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2afb40: 0xc0b12cc  jal         func_2C4B30
    ctx->pc = 0x2AFB40u;
    SET_GPR_U32(ctx, 31, 0x2AFB48u);
    ctx->pc = 0x2AFB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFB40u;
    // 0x2afb44: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4B30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C4B30u, 0x2AFB40u, 0x2AFB48u)) {
        return;
    }
    ctx->pc = 0x2AFB48u;
label_2afb48:
    // 0x2afb48: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2afb48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afb4c: 0x51600050  beql        $t3, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x2AFB4Cu;
    {
        const bool branch_taken_0x2afb4c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afb4c) {
            ctx->pc = 0x2AFB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFB4Cu;
            // 0x2afb50: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFC90u;
            goto label_2afc90;
        }
    }
    ctx->pc = 0x2AFB54u;
    // 0x2afb54: 0x1160004a  beqz        $t3, . + 4 + (0x4A << 2)
    ctx->pc = 0x2AFB54u;
    {
        const bool branch_taken_0x2afb54 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB54u;
        // 0x2afb58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb54) {
            ctx->pc = 0x2AFC80u;
            goto label_2afc80;
        }
    }
    ctx->pc = 0x2AFB5Cu;
    // 0x2afb5c: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2afb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2afb60: 0x31630003  andi        $v1, $t3, 0x3
    ctx->pc = 0x2afb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x2afb64: 0x1960001a  blez        $t3, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AFB64u;
    {
        const bool branch_taken_0x2afb64 = (GPR_S64(ctx, 11) <= 0);
        ctx->pc = 0x2AFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB64u;
        // 0x2afb68: 0x544018  mult        $t0, $v0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb64) {
            ctx->pc = 0x2AFBD0u;
            goto label_2afbd0;
        }
    }
    ctx->pc = 0x2AFB6Cu;
    // 0x2afb6c: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x2AFB6Cu;
    {
        const bool branch_taken_0x2afb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afb6c) {
            ctx->pc = 0x2AFB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFB6Cu;
            // 0x2afb70: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFC04u;
            goto label_2afc04;
        }
    }
    ctx->pc = 0x2AFB74u;
    // 0x2afb74: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2afb74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2afb78: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AFB78u;
    {
        const bool branch_taken_0x2afb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afb78) {
            ctx->pc = 0x2AFB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFB78u;
            // 0x2afb7c: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFBD4u;
            goto label_2afbd4;
        }
    }
    ctx->pc = 0x2AFB80u;
    // 0x2afb80: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2afb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2afb84: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AFB84u;
    {
        const bool branch_taken_0x2afb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB84u;
        // 0x2afb88: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb84) {
            ctx->pc = 0x2AFBB0u;
            goto label_2afbb0;
        }
    }
    ctx->pc = 0x2AFB8Cu;
    // 0x2afb8c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2afb8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2afb90: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2afb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2afb94: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2afb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2afb98: 0xac4400dc  sw          $a0, 0xDC($v0)
    ctx->pc = 0x2afb98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 4));
    // 0x2afb9c: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2afb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2afba0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2afba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2afba4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2afba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2afba8: 0x250800e0  addiu       $t0, $t0, 0xE0
    ctx->pc = 0x2afba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 224));
    // 0x2afbac: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2afbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2afbb0:
    // 0x2afbb0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2afbb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2afbb4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2afbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2afbb8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2afbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2afbbc: 0xac4400dc  sw          $a0, 0xDC($v0)
    ctx->pc = 0x2afbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 4));
    // 0x2afbc0: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2afbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2afbc4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2afbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2afbc8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2afbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2afbcc: 0x250800e0  addiu       $t0, $t0, 0xE0
    ctx->pc = 0x2afbccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 224));
label_2afbd0:
    // 0x2afbd0: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2afbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2afbd4:
    // 0x2afbd4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2afbd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2afbd8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2afbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2afbdc: 0x12b502b  sltu        $t2, $t1, $t3
    ctx->pc = 0x2afbdcu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2afbe0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2afbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2afbe4: 0xac4400dc  sw          $a0, 0xDC($v0)
    ctx->pc = 0x2afbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 4));
    // 0x2afbe8: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2afbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2afbec: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2afbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2afbf0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2afbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2afbf4: 0x11400022  beqz        $t2, . + 4 + (0x22 << 2)
    ctx->pc = 0x2AFBF4u;
    {
        const bool branch_taken_0x2afbf4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBF4u;
        // 0x2afbf8: 0x250800e0  addiu       $t0, $t0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afbf4) {
            ctx->pc = 0x2AFC80u;
            goto label_2afc80;
        }
    }
    ctx->pc = 0x2AFBFCu;
    // 0x2afbfc: 0x0  nop
    ctx->pc = 0x2afbfcu;
    // NOP
label_2afc00:
    // 0x2afc00: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2afc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2afc04:
    // 0x2afc04: 0x250500e0  addiu       $a1, $t0, 0xE0
    ctx->pc = 0x2afc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 224));
    // 0x2afc08: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2afc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2afc0c: 0x250601c0  addiu       $a2, $t0, 0x1C0
    ctx->pc = 0x2afc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 448));
    // 0x2afc10: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2afc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2afc14: 0x250702a0  addiu       $a3, $t0, 0x2A0
    ctx->pc = 0x2afc14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 672));
    // 0x2afc18: 0xac4300dc  sw          $v1, 0xDC($v0)
    ctx->pc = 0x2afc18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 3));
    // 0x2afc1c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2afc1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2afc20: 0x12b502b  sltu        $t2, $t1, $t3
    ctx->pc = 0x2afc20u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2afc24: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x2afc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2afc28: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x2afc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2afc2c: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x2afc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x2afc30: 0x25080380  addiu       $t0, $t0, 0x380
    ctx->pc = 0x2afc30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 896));
    // 0x2afc34: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2afc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2afc38: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2afc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2afc3c: 0xac4400dc  sw          $a0, 0xDC($v0)
    ctx->pc = 0x2afc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 4));
    // 0x2afc40: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2afc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2afc44: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2afc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2afc48: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2afc48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2afc4c: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2afc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2afc50: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2afc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2afc54: 0xac4300dc  sw          $v1, 0xDC($v0)
    ctx->pc = 0x2afc54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 3));
    // 0x2afc58: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x2afc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2afc5c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2afc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2afc60: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x2afc60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x2afc64: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2afc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2afc68: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2afc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2afc6c: 0xac4400dc  sw          $a0, 0xDC($v0)
    ctx->pc = 0x2afc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 4));
    // 0x2afc70: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2afc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2afc74: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2afc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2afc78: 0x1540ffe1  bnez        $t2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2AFC78u;
    {
        const bool branch_taken_0x2afc78 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC78u;
        // 0x2afc7c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afc78) {
            ctx->pc = 0x2AFC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afc00;
        }
    }
    ctx->pc = 0x2AFC80u;
label_2afc80:
    // 0x2afc80: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2afc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2afc84: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2afc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2afc88: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x2afc88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_2afc8c:
    // 0x2afc8c: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x2afc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_2afc90:
    // 0x2afc90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2afc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afc94: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2afc94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2afc98: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
    ctx->pc = 0x2AFC98u;
    {
        const bool branch_taken_0x2afc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC98u;
        // 0x2afc9c: 0xb62018  mult        $a0, $a1, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afc98) {
            ctx->pc = 0x2AFA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afa60;
        }
    }
    ctx->pc = 0x2AFCA0u;
label_2afca0:
    // 0x2afca0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2afca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afca4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2afca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2afca8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2afca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2afcac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2afcacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2afcb0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2afcb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2afcb4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2afcb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afcb8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2afcb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2afcbc: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2afcbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afcc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2afcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCC4u;
        // 0x2afcc8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFCCCu;
    // 0x2afccc: 0x0  nop
    ctx->pc = 0x2afcccu;
    // NOP
    ctx->pc = 0x2afcd0u;
}
