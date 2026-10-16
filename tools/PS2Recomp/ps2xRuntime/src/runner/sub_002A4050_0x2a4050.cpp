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

// Function: sub_002A4050
// Address: 0x2a4050 - 0x2a41e8
void sub_002A4050_0x2a4050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4050_0x2a4050");
#endif

    switch (ctx->pc) {
        case 0x2a4140u: goto label_2a4140;
        case 0x2a4188u: goto label_2a4188;
        case 0x2a4190u: goto label_2a4190;
        default: break;
    }

    ctx->pc = 0x2a4050u;

    // 0x2a4050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a4050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a4054: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2a4054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4058: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2a4058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2a405c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2a405cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4060: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a4060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a4064: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a4064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4068: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2a4068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2a406c: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A406Cu;
    {
        const bool branch_taken_0x2a406c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A406Cu;
        // 0x2a4070: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a406c) {
            ctx->pc = 0x2A40BCu;
            goto label_2a40bc;
        }
    }
    ctx->pc = 0x2A4074u;
    // 0x2a4074: 0x26220068  addiu       $v0, $s1, 0x68
    ctx->pc = 0x2a4074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x2a4078: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a4078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a407c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2a407cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2a4080: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2a4080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2a4084: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x2a4084u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a4088: 0x2484da40  addiu       $a0, $a0, -0x25C0
    ctx->pc = 0x2a4088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957632));
    // 0x2a408c: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x2a408cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4090: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2a4090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a4094: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2a4094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2a4098: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2a4098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a409c: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x2a409cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x2a40a0: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x2a40a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a40a4: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x2a40a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x2a40a8: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x2a40a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x2a40ac: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2a40acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2a40b0: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2a40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x2a40b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a40b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a40b8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2a40b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_2a40bc:
    // 0x2a40bc: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2a40bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a40c0: 0x3c12006b  lui         $s2, 0x6B
    ctx->pc = 0x2a40c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    // 0x2a40c4: 0x2642d868  addiu       $v0, $s2, -0x2798
    ctx->pc = 0x2a40c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294957160));
    // 0x2a40c8: 0xace20028  sw          $v0, 0x28($a3)
    ctx->pc = 0x2a40c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
    // 0x2a40cc: 0x24e3fff8  addiu       $v1, $a3, -0x8
    ctx->pc = 0x2a40ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x2a40d0: 0x94440008  lhu         $a0, 0x8($v0)
    ctx->pc = 0x2a40d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x6AD870u));
    // 0x2a40d4: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x2a40d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2a40d8: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x2a40d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a40dc: 0xde46d868  ld          $a2, -0x2798($s2)
    ctx->pc = 0x2a40dcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 4294957160)));
    // 0x2a40e0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2a40e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a40e4: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x2a40e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x2a40e8: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x2a40e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x2a40ec: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x2a40ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a40f0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2a40f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2a40f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a40f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a40f8: 0x2444e1d8  addiu       $a0, $v0, -0x1E28
    ctx->pc = 0x2a40f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959576));
    // 0x2a40fc: 0x1500000c  bnez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A40FCu;
    {
        const bool branch_taken_0x2a40fc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A40FCu;
        // 0x2a4100: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a40fc) {
            ctx->pc = 0x2A4130u;
            goto label_2a4130;
        }
    }
    ctx->pc = 0x2A4104u;
    // 0x2a4104: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x2a4104u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a4108: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2a4108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a410c: 0xdc46e1d8  ld          $a2, -0x1E28($v0)
    ctx->pc = 0x2a410cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294959576)));
    // 0x2a4110: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x2a4110u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a4114: 0x24e2ff98  addiu       $v0, $a3, -0x68
    ctx->pc = 0x2a4114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967192));
    // 0x2a4118: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x2a4118u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a411c: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x2a411cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x2a4120: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x2a4120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x2a4124: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4128: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x2a4128u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x2a412c: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x2a412cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_2a4130:
    // 0x2a4130: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x2a4130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2a4134: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2a4134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4138: 0xc0a8e56  jal         func_2A3958
    ctx->pc = 0x2A4138u;
    SET_GPR_U32(ctx, 31, 0x2A4140u);
    ctx->pc = 0x2A413Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4138u;
    // 0x2a413c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A3958u, 0x2A4138u, 0x2A4140u)) {
        return;
    }
    ctx->pc = 0x2A4140u;
label_2a4140:
    // 0x2a4140: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4140u;
    {
        const bool branch_taken_0x2a4140 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4140u;
        // 0x2a4144: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4140) {
            ctx->pc = 0x2A4154u;
            goto label_2a4154;
        }
    }
    ctx->pc = 0x2A4148u;
    // 0x2a4148: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a4148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a414c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A414Cu;
    {
        const bool branch_taken_0x2a414c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A414Cu;
        // 0x2a4150: 0xa0a2001a  sb          $v0, 0x1A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a414c) {
            ctx->pc = 0x2A4158u;
            goto label_2a4158;
        }
    }
    ctx->pc = 0x2A4154u;
label_2a4154:
    // 0x2a4154: 0xa0a0001a  sb          $zero, 0x1A($a1)
    ctx->pc = 0x2a4154u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 0));
label_2a4158:
    // 0x2a4158: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2a4158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a415c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2a415cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2a4160: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2a4160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a4164: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x2a4164u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x2a4168: 0xa4a20018  sh          $v0, 0x18($a1)
    ctx->pc = 0x2a4168u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a416c: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x2a416cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x2a4170: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x2a4170u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x2a4174: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x2a4174u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x2a4178: 0xa0a0001b  sb          $zero, 0x1B($a1)
    ctx->pc = 0x2a4178u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a417c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a417cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2a4180: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4180u;
    {
        const bool branch_taken_0x2a4180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4180u;
        // 0x2a4184: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4180) {
            ctx->pc = 0x2A4190u;
            goto label_2a4190;
        }
    }
    ctx->pc = 0x2A4188u;
label_2a4188:
    // 0x2a4188: 0xc07e3f2  jal         func_1F8FC8
    ctx->pc = 0x2A4188u;
    SET_GPR_U32(ctx, 31, 0x2A4190u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x2A4188u, 0x2A4190u)) {
        return;
    }
    ctx->pc = 0x2A4190u;
label_2a4190:
    // 0x2a4190: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A4190u;
    {
        const bool branch_taken_0x2a4190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4190u;
        // 0x2a4194: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4190) {
            ctx->pc = 0x2A41D0u;
            goto label_2a41d0;
        }
    }
    ctx->pc = 0x2A4198u;
    // 0x2a4198: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2a4198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a419c: 0x2643d868  addiu       $v1, $s2, -0x2798
    ctx->pc = 0x2a419cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294957160));
    // 0x2a41a0: 0x94650008  lhu         $a1, 0x8($v1)
    ctx->pc = 0x2a41a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a41a4: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x2a41a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x2a41a8: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x2a41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x2a41ac: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x2a41acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a41b0: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x2a41b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a41b4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2a41b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a41b8: 0xde47d868  ld          $a3, -0x2798($s2)
    ctx->pc = 0x2a41b8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 4294957160)));
    // 0x2a41bc: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x2a41bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x2a41c0: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2a41c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2a41c4: 0xa7a50008  sh          $a1, 0x8($sp)
    ctx->pc = 0x2a41c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a41c8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x2A41C8u;
    {
        const bool branch_taken_0x2a41c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A41C8u;
        // 0x2a41cc: 0xacdd0028  sw          $sp, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a41c8) {
            ctx->pc = 0x2A4188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4188;
        }
    }
    ctx->pc = 0x2A41D0u;
label_2a41d0:
    // 0x2a41d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a41d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a41d4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2a41d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a41d8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2a41d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a41dc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2a41dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a41e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A41E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A41E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A41E0u;
        // 0x2a41e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A41E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A41E8u;
}
