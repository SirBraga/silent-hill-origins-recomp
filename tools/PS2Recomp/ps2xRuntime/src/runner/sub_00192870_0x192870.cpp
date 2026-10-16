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

// Function: sub_00192870
// Address: 0x192870 - 0x192990
void sub_00192870_0x192870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192870_0x192870");
#endif

    switch (ctx->pc) {
        case 0x192884u: goto label_192884;
        case 0x1928a4u: goto label_1928a4;
        case 0x1928acu: goto label_1928ac;
        case 0x1928b4u: goto label_1928b4;
        case 0x1928bcu: goto label_1928bc;
        case 0x1928c4u: goto label_1928c4;
        case 0x1928ccu: goto label_1928cc;
        case 0x1928d4u: goto label_1928d4;
        case 0x1928dcu: goto label_1928dc;
        case 0x1928e4u: goto label_1928e4;
        case 0x1928ecu: goto label_1928ec;
        case 0x1928f4u: goto label_1928f4;
        case 0x1928fcu: goto label_1928fc;
        case 0x192904u: goto label_192904;
        case 0x19290cu: goto label_19290c;
        case 0x192914u: goto label_192914;
        case 0x19291cu: goto label_19291c;
        case 0x192924u: goto label_192924;
        case 0x19292cu: goto label_19292c;
        case 0x192934u: goto label_192934;
        case 0x19293cu: goto label_19293c;
        case 0x192944u: goto label_192944;
        case 0x19294cu: goto label_19294c;
        case 0x192954u: goto label_192954;
        case 0x19295cu: goto label_19295c;
        case 0x192964u: goto label_192964;
        case 0x19296cu: goto label_19296c;
        case 0x192974u: goto label_192974;
        case 0x19297cu: goto label_19297c;
        default: break;
    }

    ctx->pc = 0x192870u;

    // 0x192870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192874: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x192874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x192878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19287c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x19287Cu;
    SET_GPR_U32(ctx, 31, 0x192884u);
    ctx->pc = 0x192880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19287Cu;
    // 0x192880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x19287Cu, 0x192884u)) {
        return;
    }
    ctx->pc = 0x192884u;
label_192884:
    // 0x192884: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x192884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x192888: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x192888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19288c: 0x24639928  addiu       $v1, $v1, -0x66D8
    ctx->pc = 0x19288cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940968));
    // 0x192890: 0x244298e0  addiu       $v0, $v0, -0x6720
    ctx->pc = 0x192890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940896));
    // 0x192894: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x192894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x192898: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x192898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x19289c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19289Cu;
    SET_GPR_U32(ctx, 31, 0x1928A4u);
    ctx->pc = 0x1928A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19289Cu;
    // 0x1928a0: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19289Cu, 0x1928A4u)) {
        return;
    }
    ctx->pc = 0x1928A4u;
label_1928a4:
    // 0x1928a4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1928A4u;
    SET_GPR_U32(ctx, 31, 0x1928ACu);
    ctx->pc = 0x1928A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1928A4u;
    // 0x1928a8: 0x2604007c  addiu       $a0, $s0, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1928A4u, 0x1928ACu)) {
        return;
    }
    ctx->pc = 0x1928ACu;
label_1928ac:
    // 0x1928ac: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1928ACu;
    SET_GPR_U32(ctx, 31, 0x1928B4u);
    ctx->pc = 0x1928B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1928ACu;
    // 0x1928b0: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1928ACu, 0x1928B4u)) {
        return;
    }
    ctx->pc = 0x1928B4u;
label_1928b4:
    // 0x1928b4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1928B4u;
    SET_GPR_U32(ctx, 31, 0x1928BCu);
    ctx->pc = 0x1928B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1928B4u;
    // 0x1928b8: 0x2604008c  addiu       $a0, $s0, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1928B4u, 0x1928BCu)) {
        return;
    }
    ctx->pc = 0x1928BCu;
label_1928bc:
    // 0x1928bc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1928BCu;
    SET_GPR_U32(ctx, 31, 0x1928C4u);
    ctx->pc = 0x1928C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1928BCu;
    // 0x1928c0: 0x26040094  addiu       $a0, $s0, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1928BCu, 0x1928C4u)) {
        return;
    }
    ctx->pc = 0x1928C4u;
label_1928c4:
    // 0x1928c4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1928C4u;
    SET_GPR_U32(ctx, 31, 0x1928CCu);
    ctx->pc = 0x1928C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1928C4u;
    // 0x1928c8: 0x2604009c  addiu       $a0, $s0, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1928C4u, 0x1928CCu)) {
        return;
    }
    ctx->pc = 0x1928CCu;
label_1928cc:
    // 0x1928cc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1928CCu;
    SET_GPR_U32(ctx, 31, 0x1928D4u);
    ctx->pc = 0x1928D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1928CCu;
    // 0x1928d0: 0x260400a4  addiu       $a0, $s0, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1928CCu, 0x1928D4u)) {
        return;
    }
    ctx->pc = 0x1928D4u;
label_1928d4:
    // 0x1928d4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1928D4u;
    SET_GPR_U32(ctx, 31, 0x1928DCu);
    ctx->pc = 0x1928D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1928D4u;
    // 0x1928d8: 0x260400ac  addiu       $a0, $s0, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1928D4u, 0x1928DCu)) {
        return;
    }
    ctx->pc = 0x1928DCu;
label_1928dc:
    // 0x1928dc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1928DCu;
    SET_GPR_U32(ctx, 31, 0x1928E4u);
    ctx->pc = 0x1928E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1928DCu;
    // 0x1928e0: 0x260400b4  addiu       $a0, $s0, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1928DCu, 0x1928E4u)) {
        return;
    }
    ctx->pc = 0x1928E4u;
label_1928e4:
    // 0x1928e4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1928E4u;
    SET_GPR_U32(ctx, 31, 0x1928ECu);
    ctx->pc = 0x1928E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1928E4u;
    // 0x1928e8: 0x260400bc  addiu       $a0, $s0, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1928E4u, 0x1928ECu)) {
        return;
    }
    ctx->pc = 0x1928ECu;
label_1928ec:
    // 0x1928ec: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1928ECu;
    SET_GPR_U32(ctx, 31, 0x1928F4u);
    ctx->pc = 0x1928F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1928ECu;
    // 0x1928f0: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1928ECu, 0x1928F4u)) {
        return;
    }
    ctx->pc = 0x1928F4u;
label_1928f4:
    // 0x1928f4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1928F4u;
    SET_GPR_U32(ctx, 31, 0x1928FCu);
    ctx->pc = 0x1928F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1928F4u;
    // 0x1928f8: 0x260400cc  addiu       $a0, $s0, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1928F4u, 0x1928FCu)) {
        return;
    }
    ctx->pc = 0x1928FCu;
label_1928fc:
    // 0x1928fc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1928FCu;
    SET_GPR_U32(ctx, 31, 0x192904u);
    ctx->pc = 0x192900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1928FCu;
    // 0x192900: 0x260400d4  addiu       $a0, $s0, 0xD4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1928FCu, 0x192904u)) {
        return;
    }
    ctx->pc = 0x192904u;
label_192904:
    // 0x192904: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x192904u;
    SET_GPR_U32(ctx, 31, 0x19290Cu);
    ctx->pc = 0x192908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192904u;
    // 0x192908: 0x260400dc  addiu       $a0, $s0, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x192904u, 0x19290Cu)) {
        return;
    }
    ctx->pc = 0x19290Cu;
label_19290c:
    // 0x19290c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19290Cu;
    SET_GPR_U32(ctx, 31, 0x192914u);
    ctx->pc = 0x192910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19290Cu;
    // 0x192910: 0x260400e4  addiu       $a0, $s0, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19290Cu, 0x192914u)) {
        return;
    }
    ctx->pc = 0x192914u;
label_192914:
    // 0x192914: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x192914u;
    SET_GPR_U32(ctx, 31, 0x19291Cu);
    ctx->pc = 0x192918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192914u;
    // 0x192918: 0x260400ec  addiu       $a0, $s0, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x192914u, 0x19291Cu)) {
        return;
    }
    ctx->pc = 0x19291Cu;
label_19291c:
    // 0x19291c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19291Cu;
    SET_GPR_U32(ctx, 31, 0x192924u);
    ctx->pc = 0x192920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19291Cu;
    // 0x192920: 0x260400f4  addiu       $a0, $s0, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19291Cu, 0x192924u)) {
        return;
    }
    ctx->pc = 0x192924u;
label_192924:
    // 0x192924: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x192924u;
    SET_GPR_U32(ctx, 31, 0x19292Cu);
    ctx->pc = 0x192928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192924u;
    // 0x192928: 0x260400fc  addiu       $a0, $s0, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x192924u, 0x19292Cu)) {
        return;
    }
    ctx->pc = 0x19292Cu;
label_19292c:
    // 0x19292c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19292Cu;
    SET_GPR_U32(ctx, 31, 0x192934u);
    ctx->pc = 0x192930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19292Cu;
    // 0x192930: 0x26040104  addiu       $a0, $s0, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19292Cu, 0x192934u)) {
        return;
    }
    ctx->pc = 0x192934u;
label_192934:
    // 0x192934: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x192934u;
    SET_GPR_U32(ctx, 31, 0x19293Cu);
    ctx->pc = 0x192938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192934u;
    // 0x192938: 0x2604010c  addiu       $a0, $s0, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x192934u, 0x19293Cu)) {
        return;
    }
    ctx->pc = 0x19293Cu;
label_19293c:
    // 0x19293c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19293Cu;
    SET_GPR_U32(ctx, 31, 0x192944u);
    ctx->pc = 0x192940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19293Cu;
    // 0x192940: 0x26040114  addiu       $a0, $s0, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19293Cu, 0x192944u)) {
        return;
    }
    ctx->pc = 0x192944u;
label_192944:
    // 0x192944: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x192944u;
    SET_GPR_U32(ctx, 31, 0x19294Cu);
    ctx->pc = 0x192948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192944u;
    // 0x192948: 0x2604011c  addiu       $a0, $s0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x192944u, 0x19294Cu)) {
        return;
    }
    ctx->pc = 0x19294Cu;
label_19294c:
    // 0x19294c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19294Cu;
    SET_GPR_U32(ctx, 31, 0x192954u);
    ctx->pc = 0x192950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19294Cu;
    // 0x192950: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19294Cu, 0x192954u)) {
        return;
    }
    ctx->pc = 0x192954u;
label_192954:
    // 0x192954: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x192954u;
    SET_GPR_U32(ctx, 31, 0x19295Cu);
    ctx->pc = 0x192958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192954u;
    // 0x192958: 0x2604012c  addiu       $a0, $s0, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x192954u, 0x19295Cu)) {
        return;
    }
    ctx->pc = 0x19295Cu;
label_19295c:
    // 0x19295c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19295Cu;
    SET_GPR_U32(ctx, 31, 0x192964u);
    ctx->pc = 0x192960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19295Cu;
    // 0x192960: 0x26040134  addiu       $a0, $s0, 0x134 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19295Cu, 0x192964u)) {
        return;
    }
    ctx->pc = 0x192964u;
label_192964:
    // 0x192964: 0xc0650ea  jal         func_1943A8
    ctx->pc = 0x192964u;
    SET_GPR_U32(ctx, 31, 0x19296Cu);
    ctx->pc = 0x192968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192964u;
    // 0x192968: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1943A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1943A8u, 0x192964u, 0x19296Cu)) {
        return;
    }
    ctx->pc = 0x19296Cu;
label_19296c:
    // 0x19296c: 0xc0650ea  jal         func_1943A8
    ctx->pc = 0x19296Cu;
    SET_GPR_U32(ctx, 31, 0x192974u);
    ctx->pc = 0x192970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19296Cu;
    // 0x192970: 0x26040154  addiu       $a0, $s0, 0x154 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1943A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1943A8u, 0x19296Cu, 0x192974u)) {
        return;
    }
    ctx->pc = 0x192974u;
label_192974:
    // 0x192974: 0xc064a64  jal         func_192990
    ctx->pc = 0x192974u;
    SET_GPR_U32(ctx, 31, 0x19297Cu);
    ctx->pc = 0x192978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192974u;
    // 0x192978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x192990u, 0x192974u, 0x19297Cu)) {
        return;
    }
    ctx->pc = 0x19297Cu;
label_19297c:
    // 0x19297c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19297cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192984: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x192984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192988: 0x3e00008  jr          $ra
    ctx->pc = 0x192988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192988u;
        // 0x19298c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192990u;
}
