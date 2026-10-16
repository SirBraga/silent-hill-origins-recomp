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

// Function: sub_002B7820
// Address: 0x2b7820 - 0x2b7a70
void sub_002B7820_0x2b7820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7820_0x2b7820");
#endif

    switch (ctx->pc) {
        case 0x2b7938u: goto label_2b7938;
        case 0x2b7978u: goto label_2b7978;
        case 0x2b79d0u: goto label_2b79d0;
        default: break;
    }

    ctx->pc = 0x2b7820u;

    // 0x2b7820: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2b7820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2b7824: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2b7824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b7828: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b7828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b782c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b782cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b7830: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2b7830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x2b7834: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2b7834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2b7838: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2b7838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2b783c: 0x826821  addu        $t5, $a0, $v0
    ctx->pc = 0x2b783cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b7840: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2b7840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2b7844: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x2b7844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2b7848: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2b7848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2b784c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2b784cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2b7850: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2b7850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x2b7854: 0x25a4181c  addiu       $a0, $t5, 0x181C
    ctx->pc = 0x2b7854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 6172));
    // 0x2b7858: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2b7858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2b785c: 0x25ab1820  addiu       $t3, $t5, 0x1820
    ctx->pc = 0x2b785cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 6176));
    // 0x2b7860: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2b7860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2b7864: 0x63500  sll         $a2, $a2, 20
    ctx->pc = 0x2b7864u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 20));
    // 0x2b7868: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2b7868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x2b786c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2b786cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x2b7870: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b7870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b7874: 0x95ae400e  lhu         $t6, 0x400E($t5)
    ctx->pc = 0x2b7874u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 16398)));
    // 0x2b7878: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x2b7878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x2b787c: 0x1c34818  mult        $t1, $t6, $v1
    ctx->pc = 0x2b787cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2b7880: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x2b7880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b7884: 0x52a80  sll         $a1, $a1, 10
    ctx->pc = 0x2b7884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2b7888: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x2b7888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2b788c: 0x893821  addu        $a3, $a0, $t1
    ctx->pc = 0x2b788cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2b7890: 0x34c603ff  ori         $a2, $a2, 0x3FF
    ctx->pc = 0x2b7890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1023);
    // 0x2b7894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b7894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b7898: 0x340483ff  ori         $a0, $zero, 0x83FF
    ctx->pc = 0x2b7898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33791);
    // 0x2b789c: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x2b789cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b78a0: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2b78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2b78a4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2b78a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b78a8: 0xa5a3400e  sh          $v1, 0x400E($t5)
    ctx->pc = 0x2b78a8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 16398), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b78ac: 0x30b403ff  andi        $s4, $a1, 0x3FF
    ctx->pc = 0x2b78acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1023);
    // 0x2b78b0: 0xa44e0000  sh          $t6, 0x0($v0)
    ctx->pc = 0x2b78b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x2b78b4: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x2b78b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x2b78b8: 0x1691821  addu        $v1, $t3, $t1
    ctx->pc = 0x2b78b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2b78bc: 0x25220002  addiu       $v0, $t1, 0x2
    ctx->pc = 0x2b78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x2b78c0: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2b78c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b78c4: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2b78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2b78c8: 0x12b1821  addu        $v1, $t1, $t3
    ctx->pc = 0x2b78c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x2b78cc: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x2b78ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b78d0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2b78d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b78d4: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x2b78d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b78d8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2b78d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b78dc: 0xa4a40006  sh          $a0, 0x6($a1)
    ctx->pc = 0x2b78dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b78e0: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x2b78e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b78e4: 0xa464000a  sh          $a0, 0xA($v1)
    ctx->pc = 0x2b78e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b78e8: 0xa4a4000c  sh          $a0, 0xC($a1)
    ctx->pc = 0x2b78e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b78ec: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x2b78ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b78f0: 0x12830052  beq         $s4, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x2B78F0u;
    {
        const bool branch_taken_0x2b78f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78F0u;
        // 0x2b78f4: 0xa444000e  sh          $a0, 0xE($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b78f0) {
            ctx->pc = 0x2B7A3Cu;
            goto label_2b7a3c;
        }
    }
    ctx->pc = 0x2B78F8u;
    // 0x2b78f8: 0xe7180  sll         $t6, $t6, 6
    ctx->pc = 0x2b78f8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 6));
    // 0x2b78fc: 0x25a30820  addiu       $v1, $t5, 0x820
    ctx->pc = 0x2b78fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 2080));
    // 0x2b7900: 0x25b60020  addiu       $s6, $t5, 0x20
    ctx->pc = 0x2b7900u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x2b7904: 0x35c2003f  ori         $v0, $t6, 0x3F
    ctx->pc = 0x2b7904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)63);
    // 0x2b7908: 0x25ad081e  addiu       $t5, $t5, 0x81E
    ctx->pc = 0x2b7908u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2078));
    // 0x2b790c: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x2b790cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
    // 0x2b7910: 0xafae0038  sw          $t6, 0x38($sp)
    ctx->pc = 0x2b7910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 14));
    // 0x2b7914: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2b7914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7918: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2b7918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2b791c: 0x37defc00  ori         $fp, $fp, 0xFC00
    ctx->pc = 0x2b791cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)64512);
    // 0x2b7920: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x2b7920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
    // 0x2b7924: 0xafab0034  sw          $t3, 0x34($sp)
    ctx->pc = 0x2b7924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 11));
    // 0x2b7928: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x2b7928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x2b792c: 0xafad002c  sw          $t5, 0x2C($sp)
    ctx->pc = 0x2b792cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 13));
    // 0x2b7930: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2b7930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2b7934: 0x0  nop
    ctx->pc = 0x2b7934u;
    // NOP
label_2b7938:
    // 0x2b7938: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2b7938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2b793c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2b793cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b7940: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x2b7940u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b7944: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2b7944u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b7948: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x2b7948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b794c: 0x305103ff  andi        $s1, $v0, 0x3FF
    ctx->pc = 0x2b794cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x2b7950: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2b7950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2b7954: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2B7954u;
    {
        const bool branch_taken_0x2b7954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7954u;
        // 0x2b7958: 0x96570000  lhu         $s7, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7954) {
            ctx->pc = 0x2B7A00u;
            goto label_2b7a00;
        }
    }
    ctx->pc = 0x2B795Cu;
    // 0x2b795c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7960: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x2b7960u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x2b7964: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x2b7964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2b7968: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b7968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b796c: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x2b796cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b7970: 0xc0ad968  jal         func_2B65A0
    ctx->pc = 0x2B7970u;
    SET_GPR_U32(ctx, 31, 0x2B7978u);
    ctx->pc = 0x2B7974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7970u;
    // 0x2b7974: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B65A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B65A0u, 0x2B7970u, 0x2B7978u)) {
        return;
    }
    ctx->pc = 0x2B7978u;
label_2b7978:
    // 0x2b7978: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b7978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b797c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2b797cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b7980: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2b7980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b7984: 0x113840  sll         $a3, $s1, 1
    ctx->pc = 0x2b7984u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2b7988: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b7988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b798c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2b798cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2b7990: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2b7990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2b7994: 0x2c73821  addu        $a3, $s6, $a3
    ctx->pc = 0x2b7994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x2b7998: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b7998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b799c: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x2b799cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b79a0: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x2b79a0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b79a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b79a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2b79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b79ac: 0x30c603ff  andi        $a2, $a2, 0x3FF
    ctx->pc = 0x2b79acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1023);
    // 0x2b79b0: 0xa6460000  sh          $a2, 0x0($s2)
    ctx->pc = 0x2b79b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2b79b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2b79b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b79b8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2b79b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b79bc: 0x3063fc00  andi        $v1, $v1, 0xFC00
    ctx->pc = 0x2b79bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64512);
    // 0x2b79c0: 0x2831825  or          $v1, $s4, $v1
    ctx->pc = 0x2b79c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
    // 0x2b79c4: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x2b79c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b79c8: 0xc0ad91a  jal         func_2B6468
    ctx->pc = 0x2B79C8u;
    SET_GPR_U32(ctx, 31, 0x2B79D0u);
    ctx->pc = 0x2B79CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B79C8u;
    // 0x2b79cc: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B6468u, 0x2B79C8u, 0x2B79D0u)) {
        return;
    }
    ctx->pc = 0x2B79D0u;
label_2b79d0:
    // 0x2b79d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B79D0u;
    {
        const bool branch_taken_0x2b79d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79D0u;
        // 0x2b79d4: 0x24047c00  addiu       $a0, $zero, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b79d0) {
            ctx->pc = 0x2B79F0u;
            goto label_2b79f0;
        }
    }
    ctx->pc = 0x2B79D8u;
    // 0x2b79d8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2b79d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b79dc: 0x30627c00  andi        $v0, $v1, 0x7C00
    ctx->pc = 0x2b79dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x2b79e0: 0x10440012  beq         $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B79E0u;
    {
        const bool branch_taken_0x2b79e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B79E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79E0u;
        // 0x2b79e4: 0x24620400  addiu       $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b79e0) {
            ctx->pc = 0x2B7A2Cu;
            goto label_2b7a2c;
        }
    }
    ctx->pc = 0x2B79E8u;
    // 0x2b79e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B79E8u;
    {
        const bool branch_taken_0x2b79e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79E8u;
        // 0x2b79ec: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b79e8) {
            ctx->pc = 0x2B7A2Cu;
            goto label_2b7a2c;
        }
    }
    ctx->pc = 0x2B79F0u;
label_2b79f0:
    // 0x2b79f0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x2b79f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b79f4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x2b79f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2b79f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B79F8u;
    {
        const bool branch_taken_0x2b79f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79F8u;
        // 0x2b79fc: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b79f8) {
            ctx->pc = 0x2B7A2Cu;
            goto label_2b7a2c;
        }
    }
    ctx->pc = 0x2B7A00u;
label_2b7a00:
    // 0x2b7a00: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x2b7a00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2b7a04: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x2b7a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2b7a08: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2b7a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2b7a0c: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x2b7a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x2b7a10: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x2b7a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x2b7a14: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x2b7a14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b7a18: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x2b7a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x2b7a1c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2b7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2b7a20: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x2b7a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x2b7a24: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2b7a24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2b7a28: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2b7a28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_2b7a2c:
    // 0x2b7a2c: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x2b7a2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a30: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x2b7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2b7a34: 0x1683ffc0  bne         $s4, $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2B7A34u;
    {
        const bool branch_taken_0x2b7a34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A34u;
        // 0x2b7a38: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a34) {
            ctx->pc = 0x2B7938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7938;
        }
    }
    ctx->pc = 0x2B7A3Cu;
label_2b7a3c:
    // 0x2b7a3c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2b7a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b7a40: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2b7a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b7a44: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2b7a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b7a48: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2b7a48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b7a4c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2b7a4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b7a50: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2b7a50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b7a54: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2b7a54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b7a58: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2b7a58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b7a5c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2b7a5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7a60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b7a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7a64: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A64u;
        // 0x2b7a68: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7A6Cu;
    // 0x2b7a6c: 0x0  nop
    ctx->pc = 0x2b7a6cu;
    // NOP
    ctx->pc = 0x2b7a70u;
}
