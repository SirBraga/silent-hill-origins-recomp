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

// Function: sub_0010E140
// Address: 0x10e140 - 0x10e278
void sub_0010E140_0x10e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E140_0x10e140");
#endif

    switch (ctx->pc) {
        case 0x10e164u: goto label_10e164;
        case 0x10e178u: goto label_10e178;
        case 0x10e184u: goto label_10e184;
        case 0x10e190u: goto label_10e190;
        case 0x10e19cu: goto label_10e19c;
        case 0x10e1a8u: goto label_10e1a8;
        case 0x10e1b4u: goto label_10e1b4;
        case 0x10e1c0u: goto label_10e1c0;
        case 0x10e1ccu: goto label_10e1cc;
        case 0x10e1d8u: goto label_10e1d8;
        case 0x10e1ecu: goto label_10e1ec;
        case 0x10e1fcu: goto label_10e1fc;
        case 0x10e20cu: goto label_10e20c;
        case 0x10e21cu: goto label_10e21c;
        case 0x10e22cu: goto label_10e22c;
        case 0x10e23cu: goto label_10e23c;
        case 0x10e24cu: goto label_10e24c;
        case 0x10e25cu: goto label_10e25c;
        case 0x10e26cu: goto label_10e26c;
        default: break;
    }

    ctx->pc = 0x10e140u;

    // 0x10e140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10e144: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x10e144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10e148: 0x14a20048  bne         $a1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x10E148u;
    {
        const bool branch_taken_0x10e148 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E148u;
        // 0x10e14c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e148) {
            ctx->pc = 0x10E26Cu;
            goto label_10e26c;
        }
    }
    ctx->pc = 0x10E150u;
    // 0x10e150: 0x50800023  beql        $a0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x10E150u;
    {
        const bool branch_taken_0x10e150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e150) {
            ctx->pc = 0x10E154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E150u;
            // 0x10e154: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E1E0u;
            goto label_10e1e0;
        }
    }
    ctx->pc = 0x10E158u;
    // 0x10e158: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x10e158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x10e15c: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x10E15Cu;
    SET_GPR_U32(ctx, 31, 0x10E164u);
    ctx->pc = 0x10E160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E15Cu;
    // 0x10e160: 0x2484a1b8  addiu       $a0, $a0, -0x5E48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x10E15Cu, 0x10E164u)) {
        return;
    }
    ctx->pc = 0x10E164u;
label_10e164:
    // 0x10e164: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x10e164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x10e168: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e16c: 0xac624310  sw          $v0, 0x4310($v1)
    ctx->pc = 0x10e16cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4310u, _value); } while (0);
    // 0x10e170: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10E170u;
    SET_GPR_U32(ctx, 31, 0x10E178u);
    ctx->pc = 0x10E174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E170u;
    // 0x10e174: 0x24844318  addiu       $a0, $a0, 0x4318 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10E170u, 0x10E178u)) {
        return;
    }
    ctx->pc = 0x10E178u;
label_10e178:
    // 0x10e178: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e17c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10E17Cu;
    SET_GPR_U32(ctx, 31, 0x10E184u);
    ctx->pc = 0x10E180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E17Cu;
    // 0x10e180: 0x24844320  addiu       $a0, $a0, 0x4320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10E17Cu, 0x10E184u)) {
        return;
    }
    ctx->pc = 0x10E184u;
label_10e184:
    // 0x10e184: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e188: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10E188u;
    SET_GPR_U32(ctx, 31, 0x10E190u);
    ctx->pc = 0x10E18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E188u;
    // 0x10e18c: 0x24844328  addiu       $a0, $a0, 0x4328 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10E188u, 0x10E190u)) {
        return;
    }
    ctx->pc = 0x10E190u;
label_10e190:
    // 0x10e190: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e194: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10E194u;
    SET_GPR_U32(ctx, 31, 0x10E19Cu);
    ctx->pc = 0x10E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E194u;
    // 0x10e198: 0x24844330  addiu       $a0, $a0, 0x4330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10E194u, 0x10E19Cu)) {
        return;
    }
    ctx->pc = 0x10E19Cu;
label_10e19c:
    // 0x10e19c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e19cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e1a0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10E1A0u;
    SET_GPR_U32(ctx, 31, 0x10E1A8u);
    ctx->pc = 0x10E1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E1A0u;
    // 0x10e1a4: 0x24844338  addiu       $a0, $a0, 0x4338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10E1A0u, 0x10E1A8u)) {
        return;
    }
    ctx->pc = 0x10E1A8u;
label_10e1a8:
    // 0x10e1a8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e1ac: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10E1ACu;
    SET_GPR_U32(ctx, 31, 0x10E1B4u);
    ctx->pc = 0x10E1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E1ACu;
    // 0x10e1b0: 0x24844340  addiu       $a0, $a0, 0x4340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10E1ACu, 0x10E1B4u)) {
        return;
    }
    ctx->pc = 0x10E1B4u;
label_10e1b4:
    // 0x10e1b4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e1b8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10E1B8u;
    SET_GPR_U32(ctx, 31, 0x10E1C0u);
    ctx->pc = 0x10E1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E1B8u;
    // 0x10e1bc: 0x24844348  addiu       $a0, $a0, 0x4348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10E1B8u, 0x10E1C0u)) {
        return;
    }
    ctx->pc = 0x10E1C0u;
label_10e1c0:
    // 0x10e1c0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e1c4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10E1C4u;
    SET_GPR_U32(ctx, 31, 0x10E1CCu);
    ctx->pc = 0x10E1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E1C4u;
    // 0x10e1c8: 0x24844350  addiu       $a0, $a0, 0x4350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10E1C4u, 0x10E1CCu)) {
        return;
    }
    ctx->pc = 0x10E1CCu;
label_10e1cc:
    // 0x10e1cc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e1d0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10E1D0u;
    SET_GPR_U32(ctx, 31, 0x10E1D8u);
    ctx->pc = 0x10E1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E1D0u;
    // 0x10e1d4: 0x24844358  addiu       $a0, $a0, 0x4358 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10E1D0u, 0x10E1D8u)) {
        return;
    }
    ctx->pc = 0x10E1D8u;
label_10e1d8:
    // 0x10e1d8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x10E1D8u;
    {
        const bool branch_taken_0x10e1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1D8u;
        // 0x10e1dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e1d8) {
            ctx->pc = 0x10E270u;
            goto label_10e270;
        }
    }
    ctx->pc = 0x10E1E0u;
label_10e1e0:
    // 0x10e1e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10e1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10e1e4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10E1E4u;
    SET_GPR_U32(ctx, 31, 0x10E1ECu);
    ctx->pc = 0x10E1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E1E4u;
    // 0x10e1e8: 0x24844358  addiu       $a0, $a0, 0x4358 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10E1E4u, 0x10E1ECu)) {
        return;
    }
    ctx->pc = 0x10E1ECu;
label_10e1ec:
    // 0x10e1ec: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e1f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10e1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10e1f4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10E1F4u;
    SET_GPR_U32(ctx, 31, 0x10E1FCu);
    ctx->pc = 0x10E1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E1F4u;
    // 0x10e1f8: 0x24844350  addiu       $a0, $a0, 0x4350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10E1F4u, 0x10E1FCu)) {
        return;
    }
    ctx->pc = 0x10E1FCu;
label_10e1fc:
    // 0x10e1fc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e200: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10e200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10e204: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10E204u;
    SET_GPR_U32(ctx, 31, 0x10E20Cu);
    ctx->pc = 0x10E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E204u;
    // 0x10e208: 0x24844348  addiu       $a0, $a0, 0x4348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10E204u, 0x10E20Cu)) {
        return;
    }
    ctx->pc = 0x10E20Cu;
label_10e20c:
    // 0x10e20c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e210: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10e210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10e214: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10E214u;
    SET_GPR_U32(ctx, 31, 0x10E21Cu);
    ctx->pc = 0x10E218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E214u;
    // 0x10e218: 0x24844340  addiu       $a0, $a0, 0x4340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10E214u, 0x10E21Cu)) {
        return;
    }
    ctx->pc = 0x10E21Cu;
label_10e21c:
    // 0x10e21c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e220: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10e220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10e224: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10E224u;
    SET_GPR_U32(ctx, 31, 0x10E22Cu);
    ctx->pc = 0x10E228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E224u;
    // 0x10e228: 0x24844338  addiu       $a0, $a0, 0x4338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10E224u, 0x10E22Cu)) {
        return;
    }
    ctx->pc = 0x10E22Cu;
label_10e22c:
    // 0x10e22c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e22cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e230: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10e230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10e234: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10E234u;
    SET_GPR_U32(ctx, 31, 0x10E23Cu);
    ctx->pc = 0x10E238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E234u;
    // 0x10e238: 0x24844330  addiu       $a0, $a0, 0x4330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10E234u, 0x10E23Cu)) {
        return;
    }
    ctx->pc = 0x10E23Cu;
label_10e23c:
    // 0x10e23c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e240: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10e240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10e244: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10E244u;
    SET_GPR_U32(ctx, 31, 0x10E24Cu);
    ctx->pc = 0x10E248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E244u;
    // 0x10e248: 0x24844328  addiu       $a0, $a0, 0x4328 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10E244u, 0x10E24Cu)) {
        return;
    }
    ctx->pc = 0x10E24Cu;
label_10e24c:
    // 0x10e24c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e250: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10e250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10e254: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10E254u;
    SET_GPR_U32(ctx, 31, 0x10E25Cu);
    ctx->pc = 0x10E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E254u;
    // 0x10e258: 0x24844320  addiu       $a0, $a0, 0x4320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10E254u, 0x10E25Cu)) {
        return;
    }
    ctx->pc = 0x10E25Cu;
label_10e25c:
    // 0x10e25c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10e260: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10e260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10e264: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10E264u;
    SET_GPR_U32(ctx, 31, 0x10E26Cu);
    ctx->pc = 0x10E268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E264u;
    // 0x10e268: 0x24844318  addiu       $a0, $a0, 0x4318 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10E264u, 0x10E26Cu)) {
        return;
    }
    ctx->pc = 0x10E26Cu;
label_10e26c:
    // 0x10e26c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e270:
    // 0x10e270: 0x3e00008  jr          $ra
    ctx->pc = 0x10E270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E270u;
        // 0x10e274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E278u;
}
