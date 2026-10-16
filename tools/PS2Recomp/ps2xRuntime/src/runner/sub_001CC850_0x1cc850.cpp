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

// Function: sub_001CC850
// Address: 0x1cc850 - 0x1cca38
void sub_001CC850_0x1cc850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC850_0x1cc850");
#endif

    switch (ctx->pc) {
        case 0x1cc86cu: goto label_1cc86c;
        case 0x1cc8c4u: goto label_1cc8c4;
        case 0x1cc8ccu: goto label_1cc8cc;
        case 0x1cc8e0u: goto label_1cc8e0;
        case 0x1cc8f4u: goto label_1cc8f4;
        case 0x1cc908u: goto label_1cc908;
        case 0x1cc91cu: goto label_1cc91c;
        case 0x1cc92cu: goto label_1cc92c;
        case 0x1cc944u: goto label_1cc944;
        case 0x1cc958u: goto label_1cc958;
        case 0x1cc96cu: goto label_1cc96c;
        case 0x1cc984u: goto label_1cc984;
        case 0x1cc998u: goto label_1cc998;
        case 0x1cc9acu: goto label_1cc9ac;
        case 0x1cc9c4u: goto label_1cc9c4;
        case 0x1cc9d8u: goto label_1cc9d8;
        case 0x1cc9ecu: goto label_1cc9ec;
        case 0x1cca04u: goto label_1cca04;
        case 0x1cca18u: goto label_1cca18;
        default: break;
    }

    ctx->pc = 0x1cc850u;

    // 0x1cc850: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1cc850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1cc854: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1cc854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1cc858: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1cc858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1cc85c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc860: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1cc860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1cc864: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1CC864u;
    SET_GPR_U32(ctx, 31, 0x1CC86Cu);
    ctx->pc = 0x1CC868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC864u;
    // 0x1cc868: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1CC864u, 0x1CC86Cu)) {
        return;
    }
    ctx->pc = 0x1CC86Cu;
label_1cc86c:
    // 0x1cc86c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1cc86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1cc870: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1cc870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x1cc874: 0x2463ff38  addiu       $v1, $v1, -0xC8
    ctx->pc = 0x1cc874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967096));
    // 0x1cc878: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1cc878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1cc87c: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1cc87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1cc880: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cc880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc884: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1cc884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1cc888: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cc888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cc88c: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1cc88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1cc890: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1cc890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1cc894: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x1cc894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x1cc898: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x1cc898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x1cc89c: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1cc89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x1cc8a0: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x1cc8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x1cc8a4: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1cc8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x1cc8a8: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x1cc8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x1cc8ac: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x1cc8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x1cc8b0: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x1cc8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    // 0x1cc8b4: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1cc8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x1cc8b8: 0xae00029c  sw          $zero, 0x29C($s0)
    ctx->pc = 0x1cc8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 0));
    // 0x1cc8bc: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1CC8BCu;
    SET_GPR_U32(ctx, 31, 0x1CC8C4u);
    ctx->pc = 0x1CC8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8BCu;
    // 0x1cc8c0: 0xae030258  sw          $v1, 0x258($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1CC8BCu, 0x1CC8C4u)) {
        return;
    }
    ctx->pc = 0x1CC8C4u;
label_1cc8c4:
    // 0x1cc8c4: 0xc06db44  jal         func_1B6D10
    ctx->pc = 0x1CC8C4u;
    SET_GPR_U32(ctx, 31, 0x1CC8CCu);
    ctx->pc = 0x1CC8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8C4u;
    // 0x1cc8c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D10u, 0x1CC8C4u, 0x1CC8CCu)) {
        return;
    }
    ctx->pc = 0x1CC8CCu;
label_1cc8cc:
    // 0x1cc8cc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1cc8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cc8d0: 0x260402ac  addiu       $a0, $s0, 0x2AC
    ctx->pc = 0x1cc8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 684));
    // 0x1cc8d4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1cc8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cc8d8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CC8D8u;
    SET_GPR_U32(ctx, 31, 0x1CC8E0u);
    ctx->pc = 0x1CC8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8D8u;
    // 0x1cc8dc: 0xae020260  sw          $v0, 0x260($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CC8D8u, 0x1CC8E0u)) {
        return;
    }
    ctx->pc = 0x1CC8E0u;
label_1cc8e0:
    // 0x1cc8e0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cc8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cc8e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc8e8: 0x24a5fec0  addiu       $a1, $a1, -0x140
    ctx->pc = 0x1cc8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966976));
    // 0x1cc8ec: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1CC8ECu;
    SET_GPR_U32(ctx, 31, 0x1CC8F4u);
    ctx->pc = 0x1CC8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC8ECu;
    // 0x1cc8f0: 0x26060298  addiu       $a2, $s0, 0x298 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1CC8ECu, 0x1CC8F4u)) {
        return;
    }
    ctx->pc = 0x1CC8F4u;
label_1cc8f4:
    // 0x1cc8f4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cc8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cc8f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc8fc: 0x24a5fed0  addiu       $a1, $a1, -0x130
    ctx->pc = 0x1cc8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    // 0x1cc900: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1CC900u;
    SET_GPR_U32(ctx, 31, 0x1CC908u);
    ctx->pc = 0x1CC904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC900u;
    // 0x1cc904: 0x260602a0  addiu       $a2, $s0, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1CC900u, 0x1CC908u)) {
        return;
    }
    ctx->pc = 0x1CC908u;
label_1cc908:
    // 0x1cc908: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cc908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cc90c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc910: 0x24a5fee0  addiu       $a1, $a1, -0x120
    ctx->pc = 0x1cc910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967008));
    // 0x1cc914: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1CC914u;
    SET_GPR_U32(ctx, 31, 0x1CC91Cu);
    ctx->pc = 0x1CC918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC914u;
    // 0x1cc918: 0x260602a4  addiu       $a2, $s0, 0x2A4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1CC914u, 0x1CC91Cu)) {
        return;
    }
    ctx->pc = 0x1CC91Cu;
label_1cc91c:
    // 0x1cc91c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cc91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc924: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CC924u;
    SET_GPR_U32(ctx, 31, 0x1CC92Cu);
    ctx->pc = 0x1CC928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC924u;
    // 0x1cc928: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CC924u, 0x1CC92Cu)) {
        return;
    }
    ctx->pc = 0x1CC92Cu;
label_1cc92c:
    // 0x1cc92c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cc92cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cc930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc934: 0x24a5fef0  addiu       $a1, $a1, -0x110
    ctx->pc = 0x1cc934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967024));
    // 0x1cc938: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cc938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc93c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1CC93Cu;
    SET_GPR_U32(ctx, 31, 0x1CC944u);
    ctx->pc = 0x1CC940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC93Cu;
    // 0x1cc940: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1CC93Cu, 0x1CC944u)) {
        return;
    }
    ctx->pc = 0x1CC944u;
label_1cc944:
    // 0x1cc944: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1cc944u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc948: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC948u;
    {
        const bool branch_taken_0x1cc948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC948u;
        // 0x1cc94c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc948) {
            ctx->pc = 0x1CC95Cu;
            goto label_1cc95c;
        }
    }
    ctx->pc = 0x1CC950u;
    // 0x1cc950: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1CC950u;
    SET_GPR_U32(ctx, 31, 0x1CC958u);
    ctx->pc = 0x1CC954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC950u;
    // 0x1cc954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1CC950u, 0x1CC958u)) {
        return;
    }
    ctx->pc = 0x1CC958u;
label_1cc958:
    // 0x1cc958: 0xae020268  sw          $v0, 0x268($s0)
    ctx->pc = 0x1cc958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
label_1cc95c:
    // 0x1cc95c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cc95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc964: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CC964u;
    SET_GPR_U32(ctx, 31, 0x1CC96Cu);
    ctx->pc = 0x1CC968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC964u;
    // 0x1cc968: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CC964u, 0x1CC96Cu)) {
        return;
    }
    ctx->pc = 0x1CC96Cu;
label_1cc96c:
    // 0x1cc96c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cc96cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cc970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc974: 0x24a5ff00  addiu       $a1, $a1, -0x100
    ctx->pc = 0x1cc974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967040));
    // 0x1cc978: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cc978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc97c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1CC97Cu;
    SET_GPR_U32(ctx, 31, 0x1CC984u);
    ctx->pc = 0x1CC980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC97Cu;
    // 0x1cc980: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1CC97Cu, 0x1CC984u)) {
        return;
    }
    ctx->pc = 0x1CC984u;
label_1cc984:
    // 0x1cc984: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1cc984u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc988: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC988u;
    {
        const bool branch_taken_0x1cc988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC988u;
        // 0x1cc98c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc988) {
            ctx->pc = 0x1CC99Cu;
            goto label_1cc99c;
        }
    }
    ctx->pc = 0x1CC990u;
    // 0x1cc990: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1CC990u;
    SET_GPR_U32(ctx, 31, 0x1CC998u);
    ctx->pc = 0x1CC994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC990u;
    // 0x1cc994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1CC990u, 0x1CC998u)) {
        return;
    }
    ctx->pc = 0x1CC998u;
label_1cc998:
    // 0x1cc998: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1cc998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
label_1cc99c:
    // 0x1cc99c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cc99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9a4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CC9A4u;
    SET_GPR_U32(ctx, 31, 0x1CC9ACu);
    ctx->pc = 0x1CC9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9A4u;
    // 0x1cc9a8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CC9A4u, 0x1CC9ACu)) {
        return;
    }
    ctx->pc = 0x1CC9ACu;
label_1cc9ac:
    // 0x1cc9ac: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cc9acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cc9b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9b4: 0x24a5ff10  addiu       $a1, $a1, -0xF0
    ctx->pc = 0x1cc9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967056));
    // 0x1cc9b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cc9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9bc: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1CC9BCu;
    SET_GPR_U32(ctx, 31, 0x1CC9C4u);
    ctx->pc = 0x1CC9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9BCu;
    // 0x1cc9c0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1CC9BCu, 0x1CC9C4u)) {
        return;
    }
    ctx->pc = 0x1CC9C4u;
label_1cc9c4:
    // 0x1cc9c4: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1cc9c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc9c8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC9C8u;
    {
        const bool branch_taken_0x1cc9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9C8u;
        // 0x1cc9cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9c8) {
            ctx->pc = 0x1CC9DCu;
            goto label_1cc9dc;
        }
    }
    ctx->pc = 0x1CC9D0u;
    // 0x1cc9d0: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1CC9D0u;
    SET_GPR_U32(ctx, 31, 0x1CC9D8u);
    ctx->pc = 0x1CC9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9D0u;
    // 0x1cc9d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1CC9D0u, 0x1CC9D8u)) {
        return;
    }
    ctx->pc = 0x1CC9D8u;
label_1cc9d8:
    // 0x1cc9d8: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x1cc9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
label_1cc9dc:
    // 0x1cc9dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cc9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9e4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CC9E4u;
    SET_GPR_U32(ctx, 31, 0x1CC9ECu);
    ctx->pc = 0x1CC9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9E4u;
    // 0x1cc9e8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CC9E4u, 0x1CC9ECu)) {
        return;
    }
    ctx->pc = 0x1CC9ECu;
label_1cc9ec:
    // 0x1cc9ec: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cc9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cc9f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9f4: 0x24a5ff28  addiu       $a1, $a1, -0xD8
    ctx->pc = 0x1cc9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967080));
    // 0x1cc9f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cc9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9fc: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1CC9FCu;
    SET_GPR_U32(ctx, 31, 0x1CCA04u);
    ctx->pc = 0x1CCA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9FCu;
    // 0x1cca00: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1CC9FCu, 0x1CCA04u)) {
        return;
    }
    ctx->pc = 0x1CCA04u;
label_1cca04:
    // 0x1cca04: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1cca04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cca08: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCA08u;
    {
        const bool branch_taken_0x1cca08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA08u;
        // 0x1cca0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca08) {
            ctx->pc = 0x1CCA1Cu;
            goto label_1cca1c;
        }
    }
    ctx->pc = 0x1CCA10u;
    // 0x1cca10: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1CCA10u;
    SET_GPR_U32(ctx, 31, 0x1CCA18u);
    ctx->pc = 0x1CCA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA10u;
    // 0x1cca14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1CCA10u, 0x1CCA18u)) {
        return;
    }
    ctx->pc = 0x1CCA18u;
label_1cca18:
    // 0x1cca18: 0xae020274  sw          $v0, 0x274($s0)
    ctx->pc = 0x1cca18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
label_1cca1c:
    // 0x1cca1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cca1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca20: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1cca20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cca24: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1cca24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cca28: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1cca28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cca2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA2Cu;
        // 0x1cca30: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCA34u;
    // 0x1cca34: 0x0  nop
    ctx->pc = 0x1cca34u;
    // NOP
    ctx->pc = 0x1cca38u;
}
