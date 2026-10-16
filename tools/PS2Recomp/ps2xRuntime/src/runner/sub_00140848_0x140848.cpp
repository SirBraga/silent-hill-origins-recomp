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

// Function: sub_00140848
// Address: 0x140848 - 0x140a28
void sub_00140848_0x140848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140848_0x140848");
#endif

    switch (ctx->pc) {
        case 0x140890u: goto label_140890;
        case 0x1408a8u: goto label_1408a8;
        case 0x14091cu: goto label_14091c;
        case 0x140924u: goto label_140924;
        case 0x140938u: goto label_140938;
        case 0x140944u: goto label_140944;
        case 0x14095cu: goto label_14095c;
        case 0x14096cu: goto label_14096c;
        case 0x140980u: goto label_140980;
        case 0x1409d8u: goto label_1409d8;
        case 0x1409f8u: goto label_1409f8;
        default: break;
    }

    ctx->pc = 0x140848u;

    // 0x140848: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x140848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14084c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14084cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x140850: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x140850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x140854: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x140854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140858: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x140858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14085c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14085cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140864: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x140864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140868: 0x2843000b  slti        $v1, $v0, 0xB
    ctx->pc = 0x140868u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x14086c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14086Cu;
    {
        const bool branch_taken_0x14086c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x140870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14086Cu;
        // 0x140870: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14086c) {
            ctx->pc = 0x14087Cu;
            goto label_14087c;
        }
    }
    ctx->pc = 0x140874u;
    // 0x140874: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x140874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x140878: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x140878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_14087c:
    // 0x14087c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14087cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x140880: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x140880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140884: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x140884u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x140888: 0xc080924  jal         func_202490
    ctx->pc = 0x140888u;
    SET_GPR_U32(ctx, 31, 0x140890u);
    ctx->pc = 0x14088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140888u;
    // 0x14088c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x140888u, 0x140890u)) {
        return;
    }
    ctx->pc = 0x140890u;
label_140890:
    // 0x140890: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x140890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x140894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140898: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x140898u;
    {
        const bool branch_taken_0x140898 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x14089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140898u;
        // 0x14089c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140898) {
            ctx->pc = 0x1408D0u;
            goto label_1408d0;
        }
    }
    ctx->pc = 0x1408A0u;
    // 0x1408a0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1408a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1408a4: 0x0  nop
    ctx->pc = 0x1408a4u;
    // NOP
label_1408a8:
    // 0x1408a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1408a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1408ac: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1408acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1408b0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1408b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1408b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1408b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1408b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1408b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1408bc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1408bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1408c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1408c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1408c4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1408c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1408c8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1408C8u;
    {
        const bool branch_taken_0x1408c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1408CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408C8u;
        // 0x1408cc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408c8) {
            ctx->pc = 0x1408A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1408a8;
        }
    }
    ctx->pc = 0x1408D0u;
label_1408d0:
    // 0x1408d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1408d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1408d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1408d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1408d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1408d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1408dc: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1408dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1408e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1408e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1408e4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1408e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1408e8: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1408e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1408ec: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1408ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1408f0: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1408f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x1408f4: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x1408f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x1408f8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1408f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1408fc: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x1408fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x140900: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x140900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x140904: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x140904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x140908: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x140908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x14090c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x14090cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x140910: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x140910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x140914: 0xc095e0c  jal         func_257830
    ctx->pc = 0x140914u;
    SET_GPR_U32(ctx, 31, 0x14091Cu);
    ctx->pc = 0x140918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140914u;
    // 0x140918: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257830u, 0x140914u, 0x14091Cu)) {
        return;
    }
    ctx->pc = 0x14091Cu;
label_14091c:
    // 0x14091c: 0xc089892  jal         func_226248
    ctx->pc = 0x14091Cu;
    SET_GPR_U32(ctx, 31, 0x140924u);
    ctx->pc = 0x140920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14091Cu;
    // 0x140920: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x14091Cu, 0x140924u)) {
        return;
    }
    ctx->pc = 0x140924u;
label_140924:
    // 0x140924: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x140924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x140928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x140928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14092c: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x14092cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
    // 0x140930: 0xc089a04  jal         func_226810
    ctx->pc = 0x140930u;
    SET_GPR_U32(ctx, 31, 0x140938u);
    ctx->pc = 0x140934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140930u;
    // 0x140934: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x140930u, 0x140938u)) {
        return;
    }
    ctx->pc = 0x140938u;
label_140938:
    // 0x140938: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x140938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x14093c: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x14093Cu;
    SET_GPR_U32(ctx, 31, 0x140944u);
    ctx->pc = 0x140940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14093Cu;
    // 0x140940: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x14093Cu, 0x140944u)) {
        return;
    }
    ctx->pc = 0x140944u;
label_140944:
    // 0x140944: 0x8e42870c  lw          $v0, -0x78F4($s2)
    ctx->pc = 0x140944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936332)));
    // 0x140948: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x140948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x14094c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14094cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x140950: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x140950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x140954: 0xc095c3a  jal         func_2570E8
    ctx->pc = 0x140954u;
    SET_GPR_U32(ctx, 31, 0x14095Cu);
    ctx->pc = 0x140958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140954u;
    // 0x140958: 0x8c50000c  lw          $s0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2570E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2570E8u, 0x140954u, 0x14095Cu)) {
        return;
    }
    ctx->pc = 0x14095Cu;
label_14095c:
    // 0x14095c: 0x8e44870c  lw          $a0, -0x78F4($s2)
    ctx->pc = 0x14095cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936332)));
    // 0x140960: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x140960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140964: 0xc05eeaa  jal         func_17BAA8
    ctx->pc = 0x140964u;
    SET_GPR_U32(ctx, 31, 0x14096Cu);
    ctx->pc = 0x140968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140964u;
    // 0x140968: 0x8e250044  lw          $a1, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BAA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BAA8u, 0x140964u, 0x14096Cu)) {
        return;
    }
    ctx->pc = 0x14096Cu;
label_14096c:
    // 0x14096c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x14096cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x140970: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x140970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x140974: 0x24638448  addiu       $v1, $v1, -0x7BB8
    ctx->pc = 0x140974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935624));
    // 0x140978: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x140978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14097c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x14097cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_140980:
    // 0x140980: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x140980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140984: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x140984u;
    {
        const bool branch_taken_0x140984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140984) {
            ctx->pc = 0x140988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140984u;
            // 0x140988: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1409A0u;
            goto label_1409a0;
        }
    }
    ctx->pc = 0x14098Cu;
    // 0x14098c: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x14098cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x140990: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x140990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x140994: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x140994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x140998: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x140998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14099c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14099cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1409a0:
    // 0x1409a0: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1409a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1409a4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1409A4u;
    {
        const bool branch_taken_0x1409a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1409A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1409A4u;
        // 0x1409a8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1409a4) {
            ctx->pc = 0x140980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140980;
        }
    }
    ctx->pc = 0x1409ACu;
    // 0x1409ac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1409acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1409b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1409b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1409b4: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x1409b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1409b8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x1409b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1409bc: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x1409bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1409c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1409c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1409c4: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1409C4u;
    {
        const bool branch_taken_0x1409c4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1409C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1409C4u;
        // 0x1409c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1409c4) {
            ctx->pc = 0x140A08u;
            goto label_140a08;
        }
    }
    ctx->pc = 0x1409CCu;
    // 0x1409cc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1409ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1409d0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1409d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1409d4: 0x0  nop
    ctx->pc = 0x1409d4u;
    // NOP
label_1409d8:
    // 0x1409d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1409d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1409dc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1409dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1409e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1409e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1409e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1409e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1409e8: 0xb22804  sllv        $a1, $s2, $a1
    ctx->pc = 0x1409e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 5) & 0x1F));
    // 0x1409ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1409ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1409f0: 0xc097b1e  jal         func_25EC78
    ctx->pc = 0x1409F0u;
    SET_GPR_U32(ctx, 31, 0x1409F8u);
    ctx->pc = 0x1409F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1409F0u;
    // 0x1409f4: 0x34a50001  ori         $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EC78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EC78u, 0x1409F0u, 0x1409F8u)) {
        return;
    }
    ctx->pc = 0x1409F8u;
label_1409f8:
    // 0x1409f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1409f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1409fc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1409fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x140a00: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x140A00u;
    {
        const bool branch_taken_0x140a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140a00) {
            ctx->pc = 0x140A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140A00u;
            // 0x140a04: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1409D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1409d8;
        }
    }
    ctx->pc = 0x140A08u;
label_140a08:
    // 0x140a08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x140a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a0c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x140a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140a10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x140a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140a14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x140a14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x140A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A1Cu;
        // 0x140a20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140A24u;
    // 0x140a24: 0x0  nop
    ctx->pc = 0x140a24u;
    // NOP
    ctx->pc = 0x140a28u;
}
