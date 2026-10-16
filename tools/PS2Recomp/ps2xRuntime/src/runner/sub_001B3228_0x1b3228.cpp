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

// Function: sub_001B3228
// Address: 0x1b3228 - 0x1b3358
void sub_001B3228_0x1b3228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3228_0x1b3228");
#endif

    switch (ctx->pc) {
        case 0x1b3280u: goto label_1b3280;
        case 0x1b3290u: goto label_1b3290;
        case 0x1b32a4u: goto label_1b32a4;
        case 0x1b32b8u: goto label_1b32b8;
        case 0x1b32ccu: goto label_1b32cc;
        case 0x1b32dcu: goto label_1b32dc;
        case 0x1b32e8u: goto label_1b32e8;
        case 0x1b32f0u: goto label_1b32f0;
        case 0x1b32f8u: goto label_1b32f8;
        case 0x1b3300u: goto label_1b3300;
        case 0x1b330cu: goto label_1b330c;
        case 0x1b3318u: goto label_1b3318;
        case 0x1b3324u: goto label_1b3324;
        case 0x1b3330u: goto label_1b3330;
        default: break;
    }

    ctx->pc = 0x1b3228u;

    // 0x1b3228: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b3228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b322c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b322cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b3230: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1b3230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1b3234: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1b3234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1b3238: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b3238u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b323c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b323cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b3240: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b3240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b3244: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1b3244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1b3248: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1b3248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1b324c: 0x24908880  addiu       $s0, $a0, -0x7780
    ctx->pc = 0x1b324cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
    // 0x1b3250: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b3250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b3254: 0x26930038  addiu       $s3, $s4, 0x38
    ctx->pc = 0x1b3254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x1b3258: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b3258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b325c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b325cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3264: 0x2442c1b8  addiu       $v0, $v0, -0x3E48
    ctx->pc = 0x1b3264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951352));
    // 0x1b3268: 0x2463c1d8  addiu       $v1, $v1, -0x3E28
    ctx->pc = 0x1b3268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951384));
    // 0x1b326c: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x1b326cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x1b3270: 0xae830034  sw          $v1, 0x34($s4)
    ctx->pc = 0x1b3270u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
    // 0x1b3274: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b3274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3278: 0xc07fcce  jal         func_1FF338
    ctx->pc = 0x1B3278u;
    SET_GPR_U32(ctx, 31, 0x1B3280u);
    ctx->pc = 0x1B327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3278u;
    // 0x1b327c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF338u, 0x1B3278u, 0x1B3280u)) {
        return;
    }
    ctx->pc = 0x1B3280u;
label_1b3280:
    // 0x1b3280: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3280u;
    {
        const bool branch_taken_0x1b3280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3280u;
        // 0x1b3284: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3280) {
            ctx->pc = 0x1B3290u;
            goto label_1b3290;
        }
    }
    ctx->pc = 0x1B3288u;
    // 0x1b3288: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1B3288u;
    SET_GPR_U32(ctx, 31, 0x1B3290u);
    ctx->pc = 0x1B328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3288u;
    // 0x1b328c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1B3288u, 0x1B3290u)) {
        return;
    }
    ctx->pc = 0x1B3290u;
label_1b3290:
    // 0x1b3290: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1b3290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1b3294: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b3294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3298: 0x24508918  addiu       $s0, $v0, -0x76E8
    ctx->pc = 0x1b3298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936856));
    // 0x1b329c: 0xc07fcce  jal         func_1FF338
    ctx->pc = 0x1B329Cu;
    SET_GPR_U32(ctx, 31, 0x1B32A4u);
    ctx->pc = 0x1B32A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B329Cu;
    // 0x1b32a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF338u, 0x1B329Cu, 0x1B32A4u)) {
        return;
    }
    ctx->pc = 0x1B32A4u;
label_1b32a4:
    // 0x1b32a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B32A4u;
    {
        const bool branch_taken_0x1b32a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32A4u;
        // 0x1b32a8: 0x26920044  addiu       $s2, $s4, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32a4) {
            ctx->pc = 0x1B32BCu;
            goto label_1b32bc;
        }
    }
    ctx->pc = 0x1B32ACu;
    // 0x1b32ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b32acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32b0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1B32B0u;
    SET_GPR_U32(ctx, 31, 0x1B32B8u);
    ctx->pc = 0x1B32B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32B0u;
    // 0x1b32b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1B32B0u, 0x1B32B8u)) {
        return;
    }
    ctx->pc = 0x1B32B8u;
label_1b32b8:
    // 0x1b32b8: 0x26920044  addiu       $s2, $s4, 0x44
    ctx->pc = 0x1b32b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 68));
label_1b32bc:
    // 0x1b32bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b32bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b32c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32c4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1B32C4u;
    SET_GPR_U32(ctx, 31, 0x1B32CCu);
    ctx->pc = 0x1B32C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32C4u;
    // 0x1b32c8: 0x2691004c  addiu       $s1, $s4, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1B32C4u, 0x1B32CCu)) {
        return;
    }
    ctx->pc = 0x1B32CCu;
label_1b32cc:
    // 0x1b32cc: 0x26900054  addiu       $s0, $s4, 0x54
    ctx->pc = 0x1b32ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 84));
    // 0x1b32d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b32d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32d4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1B32D4u;
    SET_GPR_U32(ctx, 31, 0x1B32DCu);
    ctx->pc = 0x1B32D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32D4u;
    // 0x1b32d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1B32D4u, 0x1B32DCu)) {
        return;
    }
    ctx->pc = 0x1B32DCu;
label_1b32dc:
    // 0x1b32dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b32dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32e0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1B32E0u;
    SET_GPR_U32(ctx, 31, 0x1B32E8u);
    ctx->pc = 0x1B32E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32E0u;
    // 0x1b32e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1B32E0u, 0x1B32E8u)) {
        return;
    }
    ctx->pc = 0x1B32E8u;
label_1b32e8:
    // 0x1b32e8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1B32E8u;
    SET_GPR_U32(ctx, 31, 0x1B32F0u);
    ctx->pc = 0x1B32ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32E8u;
    // 0x1b32ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1B32E8u, 0x1B32F0u)) {
        return;
    }
    ctx->pc = 0x1B32F0u;
label_1b32f0:
    // 0x1b32f0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1B32F0u;
    SET_GPR_U32(ctx, 31, 0x1B32F8u);
    ctx->pc = 0x1B32F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32F0u;
    // 0x1b32f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1B32F0u, 0x1B32F8u)) {
        return;
    }
    ctx->pc = 0x1B32F8u;
label_1b32f8:
    // 0x1b32f8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1B32F8u;
    SET_GPR_U32(ctx, 31, 0x1B3300u);
    ctx->pc = 0x1B32FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32F8u;
    // 0x1b32fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1B32F8u, 0x1B3300u)) {
        return;
    }
    ctx->pc = 0x1B3300u;
label_1b3300:
    // 0x1b3300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3304: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1B3304u;
    SET_GPR_U32(ctx, 31, 0x1B330Cu);
    ctx->pc = 0x1B3308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3304u;
    // 0x1b3308: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1B3304u, 0x1B330Cu)) {
        return;
    }
    ctx->pc = 0x1B330Cu;
label_1b330c:
    // 0x1b330c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b330cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3310: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1B3310u;
    SET_GPR_U32(ctx, 31, 0x1B3318u);
    ctx->pc = 0x1B3314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3310u;
    // 0x1b3314: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1B3310u, 0x1B3318u)) {
        return;
    }
    ctx->pc = 0x1B3318u;
label_1b3318:
    // 0x1b3318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b3318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b331c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1B331Cu;
    SET_GPR_U32(ctx, 31, 0x1B3324u);
    ctx->pc = 0x1B3320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B331Cu;
    // 0x1b3320: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1B331Cu, 0x1B3324u)) {
        return;
    }
    ctx->pc = 0x1B3324u;
label_1b3324:
    // 0x1b3324: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b3324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3328: 0xc04f084  jal         func_13C210
    ctx->pc = 0x1B3328u;
    SET_GPR_U32(ctx, 31, 0x1B3330u);
    ctx->pc = 0x1B332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3328u;
    // 0x1b332c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x1B3328u, 0x1B3330u)) {
        return;
    }
    ctx->pc = 0x1B3330u;
label_1b3330:
    // 0x1b3330: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b3330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b3334: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b3334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3338: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b3338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b333c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b333cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3340: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1b3340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3344: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1b3344u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b334c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B334Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B334Cu;
        // 0x1b3350: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B334Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3354u;
    // 0x1b3354: 0x0  nop
    ctx->pc = 0x1b3354u;
    // NOP
    ctx->pc = 0x1b3358u;
}
