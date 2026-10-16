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

// Function: sub_001E4230
// Address: 0x1e4230 - 0x1e43b0
void sub_001E4230_0x1e4230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4230_0x1e4230");
#endif

    switch (ctx->pc) {
        case 0x1e428cu: goto label_1e428c;
        case 0x1e42a0u: goto label_1e42a0;
        case 0x1e42a8u: goto label_1e42a8;
        case 0x1e42bcu: goto label_1e42bc;
        case 0x1e42c8u: goto label_1e42c8;
        case 0x1e42d0u: goto label_1e42d0;
        case 0x1e42e0u: goto label_1e42e0;
        case 0x1e42ecu: goto label_1e42ec;
        case 0x1e42fcu: goto label_1e42fc;
        case 0x1e4308u: goto label_1e4308;
        case 0x1e4318u: goto label_1e4318;
        case 0x1e4324u: goto label_1e4324;
        case 0x1e4338u: goto label_1e4338;
        case 0x1e4344u: goto label_1e4344;
        case 0x1e4354u: goto label_1e4354;
        case 0x1e4368u: goto label_1e4368;
        case 0x1e4378u: goto label_1e4378;
        default: break;
    }

    ctx->pc = 0x1e4230u;

    // 0x1e4230: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e4230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e4234: 0x24070505  addiu       $a3, $zero, 0x505
    ctx->pc = 0x1e4234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x1e4238: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e4238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e423c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1e423cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e4240: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1e4240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1e4244: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e4244u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4248: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1e4248u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e424c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1e424cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1e4250: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1e4250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1e4254: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e4254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e4258: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1e4258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1e425c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1e425cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e4260: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1e4260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1e4264: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1e4264u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x1e4268: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1e4268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1e426c: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1e426cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x1e4270: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1e4270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1e4274: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x1e4274u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x1e4278: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1e4278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1e427c: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x1e427cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x1e4280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e4280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e4284: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x1E4284u;
    SET_GPR_U32(ctx, 31, 0x1E428Cu);
    ctx->pc = 0x1E4288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4284u;
    // 0x1e4288: 0x3c140034  lui         $s4, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x1E4284u, 0x1E428Cu)) {
        return;
    }
    ctx->pc = 0x1E428Cu;
label_1e428c:
    // 0x1e428c: 0x3c1e0034  lui         $fp, 0x34
    ctx->pc = 0x1e428cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)52 << 16));
    // 0x1e4290: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e4290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4298: 0xc091c52  jal         func_247148
    ctx->pc = 0x1E4298u;
    SET_GPR_U32(ctx, 31, 0x1E42A0u);
    ctx->pc = 0x1E429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4298u;
    // 0x1e429c: 0xae02e730  sw          $v0, -0x18D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960944), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247148u, 0x1E4298u, 0x1E42A0u)) {
        return;
    }
    ctx->pc = 0x1E42A0u;
label_1e42a0:
    // 0x1e42a0: 0xc08ab50  jal         func_22AD40
    ctx->pc = 0x1E42A0u;
    SET_GPR_U32(ctx, 31, 0x1E42A8u);
    ctx->pc = 0x1E42A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42A0u;
    // 0x1e42a4: 0x8e04e730  lw          $a0, -0x18D0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960944)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AD40u, 0x1E42A0u, 0x1E42A8u)) {
        return;
    }
    ctx->pc = 0x1E42A8u;
label_1e42a8:
    // 0x1e42a8: 0x8e04e730  lw          $a0, -0x18D0($s0)
    ctx->pc = 0x1e42a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960944)));
    // 0x1e42ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e42acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e42b0: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x1e42b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1e42b4: 0xc091de2  jal         func_247788
    ctx->pc = 0x1E42B4u;
    SET_GPR_U32(ctx, 31, 0x1E42BCu);
    ctx->pc = 0x1E42B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42B4u;
    // 0x1e42b8: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247788u, 0x1E42B4u, 0x1E42BCu)) {
        return;
    }
    ctx->pc = 0x1E42BCu;
label_1e42bc:
    // 0x1e42bc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1e42bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e42c0: 0xc078fea  jal         func_1E3FA8
    ctx->pc = 0x1E42C0u;
    SET_GPR_U32(ctx, 31, 0x1E42C8u);
    ctx->pc = 0x1E42C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42C0u;
    // 0x1e42c4: 0x30773fff  andi        $s7, $v1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3FA8u, 0x1E42C0u, 0x1E42C8u)) {
        return;
    }
    ctx->pc = 0x1E42C8u;
label_1e42c8:
    // 0x1e42c8: 0xc080858  jal         func_202160
    ctx->pc = 0x1E42C8u;
    SET_GPR_U32(ctx, 31, 0x1E42D0u);
    ctx->pc = 0x1E42CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42C8u;
    // 0x1e42cc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1E42C8u, 0x1E42D0u)) {
        return;
    }
    ctx->pc = 0x1E42D0u;
label_1e42d0:
    // 0x1e42d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e42d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e42d4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1e42d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e42d8: 0xc079672  jal         func_1E59C8
    ctx->pc = 0x1E42D8u;
    SET_GPR_U32(ctx, 31, 0x1E42E0u);
    ctx->pc = 0x1E42DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42D8u;
    // 0x1e42dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E59C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E59C8u, 0x1E42D8u, 0x1E42E0u)) {
        return;
    }
    ctx->pc = 0x1E42E0u;
label_1e42e0:
    // 0x1e42e0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1e42e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e42e4: 0xc080858  jal         func_202160
    ctx->pc = 0x1E42E4u;
    SET_GPR_U32(ctx, 31, 0x1E42ECu);
    ctx->pc = 0x1E42E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42E4u;
    // 0x1e42e8: 0xae22e718  sw          $v0, -0x18E8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294960920), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1E42E4u, 0x1E42ECu)) {
        return;
    }
    ctx->pc = 0x1E42ECu;
label_1e42ec:
    // 0x1e42ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e42ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e42f0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1e42f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e42f4: 0xc07987a  jal         func_1E61E8
    ctx->pc = 0x1E42F4u;
    SET_GPR_U32(ctx, 31, 0x1E42FCu);
    ctx->pc = 0x1E42F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42F4u;
    // 0x1e42f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E61E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E61E8u, 0x1E42F4u, 0x1E42FCu)) {
        return;
    }
    ctx->pc = 0x1E42FCu;
label_1e42fc:
    // 0x1e42fc: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1e42fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1e4300: 0xc080858  jal         func_202160
    ctx->pc = 0x1E4300u;
    SET_GPR_U32(ctx, 31, 0x1E4308u);
    ctx->pc = 0x1E4304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4300u;
    // 0x1e4304: 0xae42e71c  sw          $v0, -0x18E4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960924), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1E4300u, 0x1E4308u)) {
        return;
    }
    ctx->pc = 0x1E4308u;
label_1e4308:
    // 0x1e4308: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e4308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e430c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1e430cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4310: 0xc079914  jal         func_1E6450
    ctx->pc = 0x1E4310u;
    SET_GPR_U32(ctx, 31, 0x1E4318u);
    ctx->pc = 0x1E4314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4310u;
    // 0x1e4314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E6450u, 0x1E4310u, 0x1E4318u)) {
        return;
    }
    ctx->pc = 0x1E4318u;
label_1e4318:
    // 0x1e4318: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1e4318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1e431c: 0xc080858  jal         func_202160
    ctx->pc = 0x1E431Cu;
    SET_GPR_U32(ctx, 31, 0x1E4324u);
    ctx->pc = 0x1E4320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E431Cu;
    // 0x1e4320: 0xae62e720  sw          $v0, -0x18E0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294960928), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1E431Cu, 0x1E4324u)) {
        return;
    }
    ctx->pc = 0x1E4324u;
label_1e4324:
    // 0x1e4324: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e4324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4328: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1e4328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e432c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1e432cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4330: 0xc079872  jal         func_1E61C8
    ctx->pc = 0x1E4330u;
    SET_GPR_U32(ctx, 31, 0x1E4338u);
    ctx->pc = 0x1E4334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4330u;
    // 0x1e4334: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E61C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E61C8u, 0x1E4330u, 0x1E4338u)) {
        return;
    }
    ctx->pc = 0x1E4338u;
label_1e4338:
    // 0x1e4338: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1e4338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e433c: 0xc080858  jal         func_202160
    ctx->pc = 0x1E433Cu;
    SET_GPR_U32(ctx, 31, 0x1E4344u);
    ctx->pc = 0x1E4340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E433Cu;
    // 0x1e4340: 0xae82e724  sw          $v0, -0x18DC($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294960932), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1E433Cu, 0x1E4344u)) {
        return;
    }
    ctx->pc = 0x1E4344u;
label_1e4344:
    // 0x1e4344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4348: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e4348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e434c: 0xc079780  jal         func_1E5E00
    ctx->pc = 0x1E434Cu;
    SET_GPR_U32(ctx, 31, 0x1E4354u);
    ctx->pc = 0x1E4350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E434Cu;
    // 0x1e4350: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E5E00u, 0x1E434Cu, 0x1E4354u)) {
        return;
    }
    ctx->pc = 0x1E4354u;
label_1e4354:
    // 0x1e4354: 0x8fc3e780  lw          $v1, -0x1880($fp)
    ctx->pc = 0x1e4354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294961024)));
    // 0x1e4358: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4358u;
    {
        const bool branch_taken_0x1e4358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4358u;
        // 0x1e435c: 0xae02e728  sw          $v0, -0x18D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4358) {
            ctx->pc = 0x1E4380u;
            goto label_1e4380;
        }
    }
    ctx->pc = 0x1E4360u;
    // 0x1e4360: 0xc080858  jal         func_202160
    ctx->pc = 0x1E4360u;
    SET_GPR_U32(ctx, 31, 0x1E4368u);
    ctx->pc = 0x1E4364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4360u;
    // 0x1e4364: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1E4360u, 0x1E4368u)) {
        return;
    }
    ctx->pc = 0x1E4368u;
label_1e4368:
    // 0x1e4368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e436c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e436cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4370: 0xc079f28  jal         func_1E7CA0
    ctx->pc = 0x1E4370u;
    SET_GPR_U32(ctx, 31, 0x1E4378u);
    ctx->pc = 0x1E4374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4370u;
    // 0x1e4374: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7CA0u, 0x1E4370u, 0x1E4378u)) {
        return;
    }
    ctx->pc = 0x1E4378u;
label_1e4378:
    // 0x1e4378: 0xafc2e780  sw          $v0, -0x1880($fp)
    ctx->pc = 0x1e4378u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294961024), GPR_U32(ctx, 2));
    // 0x1e437c: 0xac570008  sw          $s7, 0x8($v0)
    ctx->pc = 0x1e437cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 23));
label_1e4380:
    // 0x1e4380: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1e4380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e4384: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1e4384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e4388: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1e4388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e438c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1e438cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e4390: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1e4390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e4394: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e4394u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4398: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1e4398u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e439c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1e439cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e43a0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e43a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e43a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e43a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e43a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E43A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43A8u;
        // 0x1e43ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E43A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E43B0u;
}
