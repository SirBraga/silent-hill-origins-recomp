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

// Function: sub_001F3040
// Address: 0x1f3040 - 0x1f31d0
void sub_001F3040_0x1f3040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3040_0x1f3040");
#endif

    switch (ctx->pc) {
        case 0x1f30a0u: goto label_1f30a0;
        case 0x1f30d8u: goto label_1f30d8;
        case 0x1f30ecu: goto label_1f30ec;
        case 0x1f3100u: goto label_1f3100;
        case 0x1f310cu: goto label_1f310c;
        case 0x1f3120u: goto label_1f3120;
        case 0x1f312cu: goto label_1f312c;
        case 0x1f3134u: goto label_1f3134;
        case 0x1f3148u: goto label_1f3148;
        case 0x1f3168u: goto label_1f3168;
        case 0x1f317cu: goto label_1f317c;
        case 0x1f3188u: goto label_1f3188;
        case 0x1f3190u: goto label_1f3190;
        case 0x1f31a4u: goto label_1f31a4;
        default: break;
    }

    ctx->pc = 0x1f3040u;

    // 0x1f3040: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f3040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f3044: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1f3044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f3048: 0x8c43eac4  lw          $v1, -0x153C($v0)
    ctx->pc = 0x1f3048u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33EAC4u));
    // 0x1f304c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f304cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f3050: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f3050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1f3054: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f3054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f3058: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x1f3058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f305c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1f305cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1f3060: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f3060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1f3064: 0x2442ea30  addiu       $v0, $v0, -0x15D0
    ctx->pc = 0x1f3064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961712));
    // 0x1f3068: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f3068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f306c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f306cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3070: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1f3070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1f3074: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f3074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f3078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f307c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f307cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3080: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1f3080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3084: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f3084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3088: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x1f3088u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f308c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F308Cu;
    {
        const bool branch_taken_0x1f308c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F308Cu;
        // 0x1f3090: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f308c) {
            ctx->pc = 0x1F30C8u;
            goto label_1f30c8;
        }
    }
    ctx->pc = 0x1F3094u;
    // 0x1f3094: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x1f3094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1f3098: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x1f3098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1f309c: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x1f309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_1f30a0:
    // 0x1f30a0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1f30a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f30a4: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F30A4u;
    {
        const bool branch_taken_0x1f30a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1f30a4) {
            ctx->pc = 0x1F30A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F30A4u;
            // 0x1f30a8: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F30ACu;
            goto label_1f30ac;
        }
    }
    ctx->pc = 0x1F30ACu;
label_1f30ac:
    // 0x1f30ac: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1f30acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f30b0: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F30B0u;
    {
        const bool branch_taken_0x1f30b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f30b0) {
            ctx->pc = 0x1F30B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F30B0u;
            // 0x1f30b4: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F30B8u;
            goto label_1f30b8;
        }
    }
    ctx->pc = 0x1F30B8u;
label_1f30b8:
    // 0x1f30b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f30b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f30bc: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1f30bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f30c0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F30C0u;
    {
        const bool branch_taken_0x1f30c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f30c0) {
            ctx->pc = 0x1F30A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f30a0;
        }
    }
    ctx->pc = 0x1F30C8u;
label_1f30c8:
    // 0x1f30c8: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F30C8u;
    {
        const bool branch_taken_0x1f30c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f30c8) {
            ctx->pc = 0x1F30CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F30C8u;
            // 0x1f30cc: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F30E0u;
            goto label_1f30e0;
        }
    }
    ctx->pc = 0x1F30D0u;
    // 0x1f30d0: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x1F30D0u;
    SET_GPR_U32(ctx, 31, 0x1F30D8u);
    ctx->pc = 0x1F30D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F30D0u;
    // 0x1f30d4: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x1F30D0u, 0x1F30D8u)) {
        return;
    }
    ctx->pc = 0x1F30D8u;
label_1f30d8:
    // 0x1f30d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f30d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30dc: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1f30dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1f30e0:
    // 0x1f30e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f30e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30e4: 0xc0c4bea  jal         func_312FA8
    ctx->pc = 0x1F30E4u;
    SET_GPR_U32(ctx, 31, 0x1F30ECu);
    ctx->pc = 0x1F30E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F30E4u;
    // 0x1f30e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x1F30E4u, 0x1F30ECu)) {
        return;
    }
    ctx->pc = 0x1F30ECu;
label_1f30ec:
    // 0x1f30ec: 0x3b11821  addu        $v1, $sp, $s1
    ctx->pc = 0x1f30ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x1f30f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f30f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f30f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30f8: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x1F30F8u;
    SET_GPR_U32(ctx, 31, 0x1F3100u);
    ctx->pc = 0x1F30FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F30F8u;
    // 0x1f30fc: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1F30F8u, 0x1F3100u)) {
        return;
    }
    ctx->pc = 0x1F3100u;
label_1f3100:
    // 0x1f3100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3104: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x1F3104u;
    SET_GPR_U32(ctx, 31, 0x1F310Cu);
    ctx->pc = 0x1F3108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3104u;
    // 0x1f3108: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x1F3104u, 0x1F310Cu)) {
        return;
    }
    ctx->pc = 0x1F310Cu;
label_1f310c:
    // 0x1f310c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F310Cu;
    {
        const bool branch_taken_0x1f310c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F310Cu;
        // 0x1f3110: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f310c) {
            ctx->pc = 0x1F312Cu;
            goto label_1f312c;
        }
    }
    ctx->pc = 0x1F3114u;
    // 0x1f3114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3118: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x1F3118u;
    SET_GPR_U32(ctx, 31, 0x1F3120u);
    ctx->pc = 0x1F311Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3118u;
    // 0x1f311c: 0x24a52578  addiu       $a1, $a1, 0x2578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x1F3118u, 0x1F3120u)) {
        return;
    }
    ctx->pc = 0x1F3120u;
label_1f3120:
    // 0x1f3120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3124: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x1F3124u;
    SET_GPR_U32(ctx, 31, 0x1F312Cu);
    ctx->pc = 0x1F3128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3124u;
    // 0x1f3128: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x1F3124u, 0x1F312Cu)) {
        return;
    }
    ctx->pc = 0x1F312Cu;
label_1f312c:
    // 0x1f312c: 0xc0c5d6c  jal         func_3175B0
    ctx->pc = 0x1F312Cu;
    SET_GPR_U32(ctx, 31, 0x1F3134u);
    ctx->pc = 0x1F3130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F312Cu;
    // 0x1f3130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3175B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3175B0u, 0x1F312Cu, 0x1F3134u)) {
        return;
    }
    ctx->pc = 0x1F3134u;
label_1f3134:
    // 0x1f3134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3138: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f313c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f313cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3140: 0xc081782  jal         func_205E08
    ctx->pc = 0x1F3140u;
    SET_GPR_U32(ctx, 31, 0x1F3148u);
    ctx->pc = 0x1F3144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3140u;
    // 0x1f3144: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205E08u, 0x1F3140u, 0x1F3148u)) {
        return;
    }
    ctx->pc = 0x1F3148u;
label_1f3148:
    // 0x1f3148: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f3148u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f314c: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x1f314cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16));
    // 0x1f3150: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f3150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3154: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F3154u;
    {
        const bool branch_taken_0x1f3154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3154) {
            ctx->pc = 0x1F3158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3154u;
            // 0x1f3158: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F31B0u;
            goto label_1f31b0;
        }
    }
    ctx->pc = 0x1F315Cu;
    // 0x1f315c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f315cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3160: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x1F3160u;
    SET_GPR_U32(ctx, 31, 0x1F3168u);
    ctx->pc = 0x1F3164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3160u;
    // 0x1f3164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1F3160u, 0x1F3168u)) {
        return;
    }
    ctx->pc = 0x1F3168u;
label_1f3168:
    // 0x1f3168: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3168u;
    {
        const bool branch_taken_0x1f3168 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3168u;
        // 0x1f316c: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3168) {
            ctx->pc = 0x1F3188u;
            goto label_1f3188;
        }
    }
    ctx->pc = 0x1F3170u;
    // 0x1f3170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3174: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x1F3174u;
    SET_GPR_U32(ctx, 31, 0x1F317Cu);
    ctx->pc = 0x1F3178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3174u;
    // 0x1f3178: 0x24a52578  addiu       $a1, $a1, 0x2578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x1F3174u, 0x1F317Cu)) {
        return;
    }
    ctx->pc = 0x1F317Cu;
label_1f317c:
    // 0x1f317c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f317cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3180: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x1F3180u;
    SET_GPR_U32(ctx, 31, 0x1F3188u);
    ctx->pc = 0x1F3184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3180u;
    // 0x1f3184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x1F3180u, 0x1F3188u)) {
        return;
    }
    ctx->pc = 0x1F3188u;
label_1f3188:
    // 0x1f3188: 0xc0c5d6c  jal         func_3175B0
    ctx->pc = 0x1F3188u;
    SET_GPR_U32(ctx, 31, 0x1F3190u);
    ctx->pc = 0x1F318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3188u;
    // 0x1f318c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3175B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3175B0u, 0x1F3188u, 0x1F3190u)) {
        return;
    }
    ctx->pc = 0x1F3190u;
label_1f3190:
    // 0x1f3190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3194: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3198: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f3198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f319c: 0xc081782  jal         func_205E08
    ctx->pc = 0x1F319Cu;
    SET_GPR_U32(ctx, 31, 0x1F31A4u);
    ctx->pc = 0x1F31A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F319Cu;
    // 0x1f31a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205E08u, 0x1F319Cu, 0x1F31A4u)) {
        return;
    }
    ctx->pc = 0x1F31A4u;
label_1f31a4:
    // 0x1f31a4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x1f31a4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x1f31a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f31a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f31acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f31b0:
    // 0x1f31b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1f31b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f31b4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f31b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f31b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f31b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f31bc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1f31bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f31c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f31c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f31c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F31C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31C4u;
        // 0x1f31c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F31C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F31CCu;
    // 0x1f31cc: 0x0  nop
    ctx->pc = 0x1f31ccu;
    // NOP
    ctx->pc = 0x1f31d0u;
}
