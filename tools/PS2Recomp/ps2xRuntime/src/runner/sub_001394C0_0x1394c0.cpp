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

// Function: sub_001394C0
// Address: 0x1394c0 - 0x139660
void sub_001394C0_0x1394c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001394C0_0x1394c0");
#endif

    switch (ctx->pc) {
        case 0x139520u: goto label_139520;
        case 0x139538u: goto label_139538;
        case 0x13954cu: goto label_13954c;
        case 0x139560u: goto label_139560;
        case 0x139574u: goto label_139574;
        case 0x139588u: goto label_139588;
        case 0x13959cu: goto label_13959c;
        case 0x1395b0u: goto label_1395b0;
        case 0x1395c4u: goto label_1395c4;
        case 0x1395ccu: goto label_1395cc;
        case 0x1395d4u: goto label_1395d4;
        case 0x1395dcu: goto label_1395dc;
        case 0x1395e4u: goto label_1395e4;
        case 0x1395ecu: goto label_1395ec;
        case 0x1395f4u: goto label_1395f4;
        case 0x1395fcu: goto label_1395fc;
        case 0x13960cu: goto label_13960c;
        case 0x139614u: goto label_139614;
        case 0x139620u: goto label_139620;
        case 0x13962cu: goto label_13962c;
        default: break;
    }

    ctx->pc = 0x1394c0u;

    // 0x1394c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1394c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1394c4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1394c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1394c8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1394c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1394cc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1394ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1394d0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1394d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1394d4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1394d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1394d8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1394d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1394dc: 0x2463ec90  addiu       $v1, $v1, -0x1370
    ctx->pc = 0x1394dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962320));
    // 0x1394e0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1394e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1394e4: 0x27d10038  addiu       $s1, $fp, 0x38
    ctx->pc = 0x1394e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 56));
    // 0x1394e8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1394e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1394ec: 0x2442ec70  addiu       $v0, $v0, -0x1390
    ctx->pc = 0x1394ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x1394f0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1394f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1394f4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1394f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1394f8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1394f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1394fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1394fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139500: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x139500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x139504: 0x24a5f8a8  addiu       $a1, $a1, -0x758
    ctx->pc = 0x139504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965416));
    // 0x139508: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x139508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x13950c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x13950cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x139510: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x139510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x139514: 0xafc30034  sw          $v1, 0x34($fp)
    ctx->pc = 0x139514u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 3));
    // 0x139518: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x139518u;
    SET_GPR_U32(ctx, 31, 0x139520u);
    ctx->pc = 0x13951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139518u;
    // 0x13951c: 0xafc2003c  sw          $v0, 0x3C($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x139518u, 0x139520u)) {
        return;
    }
    ctx->pc = 0x139520u;
label_139520:
    // 0x139520: 0x27c201cc  addiu       $v0, $fp, 0x1CC
    ctx->pc = 0x139520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 460));
    // 0x139524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139528: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x139528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x13952c: 0x24a54788  addiu       $a1, $a1, 0x4788
    ctx->pc = 0x13952cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18312));
    // 0x139530: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x139530u;
    SET_GPR_U32(ctx, 31, 0x139538u);
    ctx->pc = 0x139534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139530u;
    // 0x139534: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x139530u, 0x139538u)) {
        return;
    }
    ctx->pc = 0x139538u;
label_139538:
    // 0x139538: 0x3c17006b  lui         $s7, 0x6B
    ctx->pc = 0x139538u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)107 << 16));
    // 0x13953c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13953cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139540: 0x26f74780  addiu       $s7, $s7, 0x4780
    ctx->pc = 0x139540u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 18304));
    // 0x139544: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x139544u;
    SET_GPR_U32(ctx, 31, 0x13954Cu);
    ctx->pc = 0x139548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139544u;
    // 0x139548: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x139544u, 0x13954Cu)) {
        return;
    }
    ctx->pc = 0x13954Cu;
label_13954c:
    // 0x13954c: 0x3c16006b  lui         $s6, 0x6B
    ctx->pc = 0x13954cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)107 << 16));
    // 0x139550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139554: 0x26d64778  addiu       $s6, $s6, 0x4778
    ctx->pc = 0x139554u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 18296));
    // 0x139558: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x139558u;
    SET_GPR_U32(ctx, 31, 0x139560u);
    ctx->pc = 0x13955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139558u;
    // 0x13955c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x139558u, 0x139560u)) {
        return;
    }
    ctx->pc = 0x139560u;
label_139560:
    // 0x139560: 0x3c15006b  lui         $s5, 0x6B
    ctx->pc = 0x139560u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)107 << 16));
    // 0x139564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139568: 0x26b54768  addiu       $s5, $s5, 0x4768
    ctx->pc = 0x139568u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 18280));
    // 0x13956c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13956Cu;
    SET_GPR_U32(ctx, 31, 0x139574u);
    ctx->pc = 0x139570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13956Cu;
    // 0x139570: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13956Cu, 0x139574u)) {
        return;
    }
    ctx->pc = 0x139574u;
label_139574:
    // 0x139574: 0x3c14006b  lui         $s4, 0x6B
    ctx->pc = 0x139574u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)107 << 16));
    // 0x139578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13957c: 0x26944770  addiu       $s4, $s4, 0x4770
    ctx->pc = 0x13957cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 18288));
    // 0x139580: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x139580u;
    SET_GPR_U32(ctx, 31, 0x139588u);
    ctx->pc = 0x139584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139580u;
    // 0x139584: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x139580u, 0x139588u)) {
        return;
    }
    ctx->pc = 0x139588u;
label_139588:
    // 0x139588: 0x3c12006b  lui         $s2, 0x6B
    ctx->pc = 0x139588u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    // 0x13958c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13958cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139590: 0x26524760  addiu       $s2, $s2, 0x4760
    ctx->pc = 0x139590u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 18272));
    // 0x139594: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x139594u;
    SET_GPR_U32(ctx, 31, 0x13959Cu);
    ctx->pc = 0x139598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139594u;
    // 0x139598: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x139594u, 0x13959Cu)) {
        return;
    }
    ctx->pc = 0x13959Cu;
label_13959c:
    // 0x13959c: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x13959cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x1395a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1395a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1395a4: 0x26104758  addiu       $s0, $s0, 0x4758
    ctx->pc = 0x1395a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18264));
    // 0x1395a8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1395A8u;
    SET_GPR_U32(ctx, 31, 0x1395B0u);
    ctx->pc = 0x1395ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1395A8u;
    // 0x1395ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1395A8u, 0x1395B0u)) {
        return;
    }
    ctx->pc = 0x1395B0u;
label_1395b0:
    // 0x1395b0: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x1395b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x1395b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1395b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1395b8: 0x26734790  addiu       $s3, $s3, 0x4790
    ctx->pc = 0x1395b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 18320));
    // 0x1395bc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1395BCu;
    SET_GPR_U32(ctx, 31, 0x1395C4u);
    ctx->pc = 0x1395C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1395BCu;
    // 0x1395c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1395BCu, 0x1395C4u)) {
        return;
    }
    ctx->pc = 0x1395C4u;
label_1395c4:
    // 0x1395c4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1395C4u;
    SET_GPR_U32(ctx, 31, 0x1395CCu);
    ctx->pc = 0x1395C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1395C4u;
    // 0x1395c8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1395C4u, 0x1395CCu)) {
        return;
    }
    ctx->pc = 0x1395CCu;
label_1395cc:
    // 0x1395cc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1395CCu;
    SET_GPR_U32(ctx, 31, 0x1395D4u);
    ctx->pc = 0x1395D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1395CCu;
    // 0x1395d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1395CCu, 0x1395D4u)) {
        return;
    }
    ctx->pc = 0x1395D4u;
label_1395d4:
    // 0x1395d4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1395D4u;
    SET_GPR_U32(ctx, 31, 0x1395DCu);
    ctx->pc = 0x1395D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1395D4u;
    // 0x1395d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1395D4u, 0x1395DCu)) {
        return;
    }
    ctx->pc = 0x1395DCu;
label_1395dc:
    // 0x1395dc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1395DCu;
    SET_GPR_U32(ctx, 31, 0x1395E4u);
    ctx->pc = 0x1395E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1395DCu;
    // 0x1395e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1395DCu, 0x1395E4u)) {
        return;
    }
    ctx->pc = 0x1395E4u;
label_1395e4:
    // 0x1395e4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1395E4u;
    SET_GPR_U32(ctx, 31, 0x1395ECu);
    ctx->pc = 0x1395E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1395E4u;
    // 0x1395e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1395E4u, 0x1395ECu)) {
        return;
    }
    ctx->pc = 0x1395ECu;
label_1395ec:
    // 0x1395ec: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1395ECu;
    SET_GPR_U32(ctx, 31, 0x1395F4u);
    ctx->pc = 0x1395F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1395ECu;
    // 0x1395f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1395ECu, 0x1395F4u)) {
        return;
    }
    ctx->pc = 0x1395F4u;
label_1395f4:
    // 0x1395f4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1395F4u;
    SET_GPR_U32(ctx, 31, 0x1395FCu);
    ctx->pc = 0x1395F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1395F4u;
    // 0x1395f8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1395F4u, 0x1395FCu)) {
        return;
    }
    ctx->pc = 0x1395FCu;
label_1395fc:
    // 0x1395fc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1395fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x139600: 0x24844788  addiu       $a0, $a0, 0x4788
    ctx->pc = 0x139600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18312));
    // 0x139604: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x139604u;
    SET_GPR_U32(ctx, 31, 0x13960Cu);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x139604u, 0x13960Cu)) {
        return;
    }
    ctx->pc = 0x13960Cu;
label_13960c:
    // 0x13960c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13960Cu;
    SET_GPR_U32(ctx, 31, 0x139614u);
    ctx->pc = 0x139610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13960Cu;
    // 0x139610: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13960Cu, 0x139614u)) {
        return;
    }
    ctx->pc = 0x139614u;
label_139614:
    // 0x139614: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x139614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x139618: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x139618u;
    SET_GPR_U32(ctx, 31, 0x139620u);
    ctx->pc = 0x13961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139618u;
    // 0x13961c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x139618u, 0x139620u)) {
        return;
    }
    ctx->pc = 0x139620u;
label_139620:
    // 0x139620: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x139620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139624: 0xc04f084  jal         func_13C210
    ctx->pc = 0x139624u;
    SET_GPR_U32(ctx, 31, 0x13962Cu);
    ctx->pc = 0x139628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139624u;
    // 0x139628: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x139624u, 0x13962Cu)) {
        return;
    }
    ctx->pc = 0x13962Cu;
label_13962c:
    // 0x13962c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x13962cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x139630: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x139630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x139634: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x139634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x139638: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x139638u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13963c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x13963cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139640: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x139640u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139644: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x139644u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139648: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x139648u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13964c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x13964cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139650: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x139650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139654: 0x3e00008  jr          $ra
    ctx->pc = 0x139654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139654u;
        // 0x139658: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13965Cu;
    // 0x13965c: 0x0  nop
    ctx->pc = 0x13965cu;
    // NOP
    ctx->pc = 0x139660u;
}
