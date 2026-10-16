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

// Function: sub_001B2DF0
// Address: 0x1b2df0 - 0x1b30c8
void sub_001B2DF0_0x1b2df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2DF0_0x1b2df0");
#endif

    switch (ctx->pc) {
        case 0x1b2df0u: goto label_1b2df0;
        case 0x1b2df4u: goto label_1b2df4;
        case 0x1b2df8u: goto label_1b2df8;
        case 0x1b2dfcu: goto label_1b2dfc;
        case 0x1b2e00u: goto label_1b2e00;
        case 0x1b2e04u: goto label_1b2e04;
        case 0x1b2e08u: goto label_1b2e08;
        case 0x1b2e0cu: goto label_1b2e0c;
        case 0x1b2e10u: goto label_1b2e10;
        case 0x1b2e14u: goto label_1b2e14;
        case 0x1b2e18u: goto label_1b2e18;
        case 0x1b2e1cu: goto label_1b2e1c;
        case 0x1b2e20u: goto label_1b2e20;
        case 0x1b2e24u: goto label_1b2e24;
        case 0x1b2e28u: goto label_1b2e28;
        case 0x1b2e2cu: goto label_1b2e2c;
        case 0x1b2e30u: goto label_1b2e30;
        case 0x1b2e34u: goto label_1b2e34;
        case 0x1b2e38u: goto label_1b2e38;
        case 0x1b2e3cu: goto label_1b2e3c;
        case 0x1b2e40u: goto label_1b2e40;
        case 0x1b2e44u: goto label_1b2e44;
        case 0x1b2e48u: goto label_1b2e48;
        case 0x1b2e4cu: goto label_1b2e4c;
        case 0x1b2e50u: goto label_1b2e50;
        case 0x1b2e54u: goto label_1b2e54;
        case 0x1b2e58u: goto label_1b2e58;
        case 0x1b2e5cu: goto label_1b2e5c;
        case 0x1b2e60u: goto label_1b2e60;
        case 0x1b2e64u: goto label_1b2e64;
        case 0x1b2e68u: goto label_1b2e68;
        case 0x1b2e6cu: goto label_1b2e6c;
        case 0x1b2e70u: goto label_1b2e70;
        case 0x1b2e74u: goto label_1b2e74;
        case 0x1b2e78u: goto label_1b2e78;
        case 0x1b2e7cu: goto label_1b2e7c;
        case 0x1b2e80u: goto label_1b2e80;
        case 0x1b2e84u: goto label_1b2e84;
        case 0x1b2e88u: goto label_1b2e88;
        case 0x1b2e8cu: goto label_1b2e8c;
        case 0x1b2e90u: goto label_1b2e90;
        case 0x1b2e94u: goto label_1b2e94;
        case 0x1b2e98u: goto label_1b2e98;
        case 0x1b2e9cu: goto label_1b2e9c;
        case 0x1b2ea0u: goto label_1b2ea0;
        case 0x1b2ea4u: goto label_1b2ea4;
        case 0x1b2ea8u: goto label_1b2ea8;
        case 0x1b2eacu: goto label_1b2eac;
        case 0x1b2eb0u: goto label_1b2eb0;
        case 0x1b2eb4u: goto label_1b2eb4;
        case 0x1b2eb8u: goto label_1b2eb8;
        case 0x1b2ebcu: goto label_1b2ebc;
        case 0x1b2ec0u: goto label_1b2ec0;
        case 0x1b2ec4u: goto label_1b2ec4;
        case 0x1b2ec8u: goto label_1b2ec8;
        case 0x1b2eccu: goto label_1b2ecc;
        case 0x1b2ed0u: goto label_1b2ed0;
        case 0x1b2ed4u: goto label_1b2ed4;
        case 0x1b2ed8u: goto label_1b2ed8;
        case 0x1b2edcu: goto label_1b2edc;
        case 0x1b2ee0u: goto label_1b2ee0;
        case 0x1b2ee4u: goto label_1b2ee4;
        case 0x1b2ee8u: goto label_1b2ee8;
        case 0x1b2eecu: goto label_1b2eec;
        case 0x1b2ef0u: goto label_1b2ef0;
        case 0x1b2ef4u: goto label_1b2ef4;
        case 0x1b2ef8u: goto label_1b2ef8;
        case 0x1b2efcu: goto label_1b2efc;
        case 0x1b2f00u: goto label_1b2f00;
        case 0x1b2f04u: goto label_1b2f04;
        case 0x1b2f08u: goto label_1b2f08;
        case 0x1b2f0cu: goto label_1b2f0c;
        case 0x1b2f10u: goto label_1b2f10;
        case 0x1b2f14u: goto label_1b2f14;
        case 0x1b2f18u: goto label_1b2f18;
        case 0x1b2f1cu: goto label_1b2f1c;
        case 0x1b2f20u: goto label_1b2f20;
        case 0x1b2f24u: goto label_1b2f24;
        case 0x1b2f28u: goto label_1b2f28;
        case 0x1b2f2cu: goto label_1b2f2c;
        case 0x1b2f30u: goto label_1b2f30;
        case 0x1b2f34u: goto label_1b2f34;
        case 0x1b2f38u: goto label_1b2f38;
        case 0x1b2f3cu: goto label_1b2f3c;
        case 0x1b2f40u: goto label_1b2f40;
        case 0x1b2f44u: goto label_1b2f44;
        case 0x1b2f48u: goto label_1b2f48;
        case 0x1b2f4cu: goto label_1b2f4c;
        case 0x1b2f50u: goto label_1b2f50;
        case 0x1b2f54u: goto label_1b2f54;
        case 0x1b2f58u: goto label_1b2f58;
        case 0x1b2f5cu: goto label_1b2f5c;
        case 0x1b2f60u: goto label_1b2f60;
        case 0x1b2f64u: goto label_1b2f64;
        case 0x1b2f68u: goto label_1b2f68;
        case 0x1b2f6cu: goto label_1b2f6c;
        case 0x1b2f70u: goto label_1b2f70;
        case 0x1b2f74u: goto label_1b2f74;
        case 0x1b2f78u: goto label_1b2f78;
        case 0x1b2f7cu: goto label_1b2f7c;
        case 0x1b2f80u: goto label_1b2f80;
        case 0x1b2f84u: goto label_1b2f84;
        case 0x1b2f88u: goto label_1b2f88;
        case 0x1b2f8cu: goto label_1b2f8c;
        case 0x1b2f90u: goto label_1b2f90;
        case 0x1b2f94u: goto label_1b2f94;
        case 0x1b2f98u: goto label_1b2f98;
        case 0x1b2f9cu: goto label_1b2f9c;
        case 0x1b2fa0u: goto label_1b2fa0;
        case 0x1b2fa4u: goto label_1b2fa4;
        case 0x1b2fa8u: goto label_1b2fa8;
        case 0x1b2facu: goto label_1b2fac;
        case 0x1b2fb0u: goto label_1b2fb0;
        case 0x1b2fb4u: goto label_1b2fb4;
        case 0x1b2fb8u: goto label_1b2fb8;
        case 0x1b2fbcu: goto label_1b2fbc;
        case 0x1b2fc0u: goto label_1b2fc0;
        case 0x1b2fc4u: goto label_1b2fc4;
        case 0x1b2fc8u: goto label_1b2fc8;
        case 0x1b2fccu: goto label_1b2fcc;
        case 0x1b2fd0u: goto label_1b2fd0;
        case 0x1b2fd4u: goto label_1b2fd4;
        case 0x1b2fd8u: goto label_1b2fd8;
        case 0x1b2fdcu: goto label_1b2fdc;
        case 0x1b2fe0u: goto label_1b2fe0;
        case 0x1b2fe4u: goto label_1b2fe4;
        case 0x1b2fe8u: goto label_1b2fe8;
        case 0x1b2fecu: goto label_1b2fec;
        case 0x1b2ff0u: goto label_1b2ff0;
        case 0x1b2ff4u: goto label_1b2ff4;
        case 0x1b2ff8u: goto label_1b2ff8;
        case 0x1b2ffcu: goto label_1b2ffc;
        case 0x1b3000u: goto label_1b3000;
        case 0x1b3004u: goto label_1b3004;
        case 0x1b3008u: goto label_1b3008;
        case 0x1b300cu: goto label_1b300c;
        case 0x1b3010u: goto label_1b3010;
        case 0x1b3014u: goto label_1b3014;
        case 0x1b3018u: goto label_1b3018;
        case 0x1b301cu: goto label_1b301c;
        case 0x1b3020u: goto label_1b3020;
        case 0x1b3024u: goto label_1b3024;
        case 0x1b3028u: goto label_1b3028;
        case 0x1b302cu: goto label_1b302c;
        case 0x1b3030u: goto label_1b3030;
        case 0x1b3034u: goto label_1b3034;
        case 0x1b3038u: goto label_1b3038;
        case 0x1b303cu: goto label_1b303c;
        case 0x1b3040u: goto label_1b3040;
        case 0x1b3044u: goto label_1b3044;
        case 0x1b3048u: goto label_1b3048;
        case 0x1b304cu: goto label_1b304c;
        case 0x1b3050u: goto label_1b3050;
        case 0x1b3054u: goto label_1b3054;
        case 0x1b3058u: goto label_1b3058;
        case 0x1b305cu: goto label_1b305c;
        case 0x1b3060u: goto label_1b3060;
        case 0x1b3064u: goto label_1b3064;
        case 0x1b3068u: goto label_1b3068;
        case 0x1b306cu: goto label_1b306c;
        case 0x1b3070u: goto label_1b3070;
        case 0x1b3074u: goto label_1b3074;
        case 0x1b3078u: goto label_1b3078;
        case 0x1b307cu: goto label_1b307c;
        case 0x1b3080u: goto label_1b3080;
        case 0x1b3084u: goto label_1b3084;
        case 0x1b3088u: goto label_1b3088;
        case 0x1b308cu: goto label_1b308c;
        case 0x1b3090u: goto label_1b3090;
        case 0x1b3094u: goto label_1b3094;
        case 0x1b3098u: goto label_1b3098;
        case 0x1b309cu: goto label_1b309c;
        case 0x1b30a0u: goto label_1b30a0;
        case 0x1b30a4u: goto label_1b30a4;
        case 0x1b30a8u: goto label_1b30a8;
        case 0x1b30acu: goto label_1b30ac;
        case 0x1b30b0u: goto label_1b30b0;
        case 0x1b30b4u: goto label_1b30b4;
        case 0x1b30b8u: goto label_1b30b8;
        case 0x1b30bcu: goto label_1b30bc;
        case 0x1b30c0u: goto label_1b30c0;
        case 0x1b30c4u: goto label_1b30c4;
        default: break;
    }

    ctx->pc = 0x1b2df0u;

label_1b2df0:
    // 0x1b2df0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b2df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1b2df4:
    // 0x1b2df4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b2df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1b2df8:
    // 0x1b2df8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b2df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b2dfc:
    // 0x1b2dfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b2dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b2e00:
    // 0x1b2e00: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b2e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1b2e04:
    // 0x1b2e04: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b2e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1b2e08:
    // 0x1b2e08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b2e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b2e0c:
    // 0x1b2e0c: 0xc04f0bc  jal         func_13C2F0
label_1b2e10:
    if (ctx->pc == 0x1B2E10u) {
        ctx->pc = 0x1B2E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E0Cu;
        // 0x1b2e10: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2E14u;
        goto label_1b2e14;
    }
    ctx->pc = 0x1B2E0Cu;
    SET_GPR_U32(ctx, 31, 0x1B2E14u);
    ctx->pc = 0x1B2E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E0Cu;
    // 0x1b2e10: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x1B2E0Cu, 0x1B2E14u)) {
        return;
    }
    ctx->pc = 0x1B2E14u;
label_1b2e14:
    // 0x1b2e14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b2e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b2e18:
    // 0x1b2e18: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1b2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_1b2e1c:
    // 0x1b2e1c: 0x5482001f  bnel        $a0, $v0, . + 4 + (0x1F << 2)
label_1b2e20:
    if (ctx->pc == 0x1B2E20u) {
        ctx->pc = 0x1B2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E1Cu;
        // 0x1b2e20: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2E24u;
        goto label_1b2e24;
    }
    ctx->pc = 0x1B2E1Cu;
    {
        const bool branch_taken_0x1b2e1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b2e1c) {
            ctx->pc = 0x1B2E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2E1Cu;
            // 0x1b2e20: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2E9Cu;
            goto label_1b2e9c;
        }
    }
    ctx->pc = 0x1B2E24u;
label_1b2e24:
    // 0x1b2e24: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1b2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1b2e28:
    // 0x1b2e28: 0x26700038  addiu       $s0, $s3, 0x38
    ctx->pc = 0x1b2e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
label_1b2e2c:
    // 0x1b2e2c: 0x24518880  addiu       $s1, $v0, -0x7780
    ctx->pc = 0x1b2e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936704));
label_1b2e30:
    // 0x1b2e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2e34:
    // 0x1b2e34: 0xc07fcce  jal         func_1FF338
label_1b2e38:
    if (ctx->pc == 0x1B2E38u) {
        ctx->pc = 0x1B2E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E34u;
        // 0x1b2e38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2E3Cu;
        goto label_1b2e3c;
    }
    ctx->pc = 0x1B2E34u;
    SET_GPR_U32(ctx, 31, 0x1B2E3Cu);
    ctx->pc = 0x1B2E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E34u;
    // 0x1b2e38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF338u, 0x1B2E34u, 0x1B2E3Cu)) {
        return;
    }
    ctx->pc = 0x1B2E3Cu;
label_1b2e3c:
    // 0x1b2e3c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b2e40:
    if (ctx->pc == 0x1B2E40u) {
        ctx->pc = 0x1B2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E3Cu;
        // 0x1b2e40: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2E44u;
        goto label_1b2e44;
    }
    ctx->pc = 0x1B2E3Cu;
    {
        const bool branch_taken_0x1b2e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E3Cu;
        // 0x1b2e40: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e3c) {
            ctx->pc = 0x1B2E5Cu;
            goto label_1b2e5c;
        }
    }
    ctx->pc = 0x1B2E44u;
label_1b2e44:
    // 0x1b2e44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b2e48:
    // 0x1b2e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2e4c:
    // 0x1b2e4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2e50:
    // 0x1b2e50: 0xc07fc98  jal         func_1FF260
label_1b2e54:
    if (ctx->pc == 0x1B2E54u) {
        ctx->pc = 0x1B2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E50u;
        // 0x1b2e54: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2E58u;
        goto label_1b2e58;
    }
    ctx->pc = 0x1B2E50u;
    SET_GPR_U32(ctx, 31, 0x1B2E58u);
    ctx->pc = 0x1B2E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E50u;
    // 0x1b2e54: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1B2E50u, 0x1B2E58u)) {
        return;
    }
    ctx->pc = 0x1B2E58u;
label_1b2e58:
    // 0x1b2e58: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1b2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1b2e5c:
    // 0x1b2e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2e60:
    // 0x1b2e60: 0x24518918  addiu       $s1, $v0, -0x76E8
    ctx->pc = 0x1b2e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936856));
label_1b2e64:
    // 0x1b2e64: 0xc07fcce  jal         func_1FF338
label_1b2e68:
    if (ctx->pc == 0x1B2E68u) {
        ctx->pc = 0x1B2E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E64u;
        // 0x1b2e68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2E6Cu;
        goto label_1b2e6c;
    }
    ctx->pc = 0x1B2E64u;
    SET_GPR_U32(ctx, 31, 0x1B2E6Cu);
    ctx->pc = 0x1B2E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E64u;
    // 0x1b2e68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF338u, 0x1B2E64u, 0x1B2E6Cu)) {
        return;
    }
    ctx->pc = 0x1B2E6Cu;
label_1b2e6c:
    // 0x1b2e6c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b2e70:
    if (ctx->pc == 0x1B2E70u) {
        ctx->pc = 0x1B2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E6Cu;
        // 0x1b2e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2E74u;
        goto label_1b2e74;
    }
    ctx->pc = 0x1B2E6Cu;
    {
        const bool branch_taken_0x1b2e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E6Cu;
        // 0x1b2e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e6c) {
            ctx->pc = 0x1B2E84u;
            goto label_1b2e84;
        }
    }
    ctx->pc = 0x1B2E74u;
label_1b2e74:
    // 0x1b2e74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b2e78:
    // 0x1b2e78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2e7c:
    // 0x1b2e7c: 0xc07fc98  jal         func_1FF260
label_1b2e80:
    if (ctx->pc == 0x1B2E80u) {
        ctx->pc = 0x1B2E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E7Cu;
        // 0x1b2e80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2E84u;
        goto label_1b2e84;
    }
    ctx->pc = 0x1B2E7Cu;
    SET_GPR_U32(ctx, 31, 0x1B2E84u);
    ctx->pc = 0x1B2E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E7Cu;
    // 0x1b2e80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1B2E7Cu, 0x1B2E84u)) {
        return;
    }
    ctx->pc = 0x1B2E84u;
label_1b2e84:
    // 0x1b2e84: 0xc085ba8  jal         func_216EA0
label_1b2e88:
    if (ctx->pc == 0x1B2E88u) {
        ctx->pc = 0x1B2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E84u;
        // 0x1b2e88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2E8Cu;
        goto label_1b2e8c;
    }
    ctx->pc = 0x1B2E84u;
    SET_GPR_U32(ctx, 31, 0x1B2E8Cu);
    ctx->pc = 0x1B2E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E84u;
    // 0x1b2e88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1B2E84u, 0x1B2E8Cu)) {
        return;
    }
    ctx->pc = 0x1B2E8Cu;
label_1b2e8c:
    // 0x1b2e8c: 0xae62008c  sw          $v0, 0x8C($s3)
    ctx->pc = 0x1b2e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
label_1b2e90:
    // 0x1b2e90: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x1b2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_1b2e94:
    // 0x1b2e94: 0x10000085  b           . + 4 + (0x85 << 2)
label_1b2e98:
    if (ctx->pc == 0x1B2E98u) {
        ctx->pc = 0x1B2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E94u;
        // 0x1b2e98: 0xa2600077  sb          $zero, 0x77($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 119), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2E9Cu;
        goto label_1b2e9c;
    }
    ctx->pc = 0x1B2E94u;
    {
        const bool branch_taken_0x1b2e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E94u;
        // 0x1b2e98: 0xa2600077  sb          $zero, 0x77($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 119), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e94) {
            ctx->pc = 0x1B30ACu;
            goto label_1b30ac;
        }
    }
    ctx->pc = 0x1B2E9Cu;
label_1b2e9c:
    // 0x1b2e9c: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_1b2ea0:
    if (ctx->pc == 0x1B2EA0u) {
        ctx->pc = 0x1B2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E9Cu;
        // 0x1b2ea0: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2EA4u;
        goto label_1b2ea4;
    }
    ctx->pc = 0x1B2E9Cu;
    {
        const bool branch_taken_0x1b2e9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E9Cu;
        // 0x1b2ea0: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e9c) {
            ctx->pc = 0x1B2EC4u;
            goto label_1b2ec4;
        }
    }
    ctx->pc = 0x1B2EA4u;
label_1b2ea4:
    // 0x1b2ea4: 0xc6600088  lwc1        $f0, 0x88($s3)
    ctx->pc = 0x1b2ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b2ea8:
    // 0x1b2ea8: 0xc6610084  lwc1        $f1, 0x84($s3)
    ctx->pc = 0x1b2ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b2eac:
    // 0x1b2eac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b2eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2eb0:
    // 0x1b2eb0: 0x0  nop
    ctx->pc = 0x1b2eb0u;
    // NOP
label_1b2eb4:
    // 0x1b2eb4: 0x4503007d  bc1tl       . + 4 + (0x7D << 2)
label_1b2eb8:
    if (ctx->pc == 0x1B2EB8u) {
        ctx->pc = 0x1B2EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2EB4u;
        // 0x1b2eb8: 0xe6610088  swc1        $f1, 0x88($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2EBCu;
        goto label_1b2ebc;
    }
    ctx->pc = 0x1B2EB4u;
    {
        const bool branch_taken_0x1b2eb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2eb4) {
            ctx->pc = 0x1B2EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2EB4u;
            // 0x1b2eb8: 0xe6610088  swc1        $f1, 0x88($s3) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B30ACu;
            goto label_1b30ac;
        }
    }
    ctx->pc = 0x1B2EBCu;
label_1b2ebc:
    // 0x1b2ebc: 0x1000007c  b           . + 4 + (0x7C << 2)
label_1b2ec0:
    if (ctx->pc == 0x1B2EC0u) {
        ctx->pc = 0x1B2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2EBCu;
        // 0x1b2ec0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2EC4u;
        goto label_1b2ec4;
    }
    ctx->pc = 0x1B2EBCu;
    {
        const bool branch_taken_0x1b2ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2EBCu;
        // 0x1b2ec0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ebc) {
            ctx->pc = 0x1B30B0u;
            goto label_1b30b0;
        }
    }
    ctx->pc = 0x1B2EC4u;
label_1b2ec4:
    // 0x1b2ec4: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x1b2ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936704)));
label_1b2ec8:
    // 0x1b2ec8: 0x14820046  bne         $a0, $v0, . + 4 + (0x46 << 2)
label_1b2ecc:
    if (ctx->pc == 0x1B2ECCu) {
        ctx->pc = 0x1B2ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2EC8u;
        // 0x1b2ecc: 0x24668880  addiu       $a2, $v1, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2ED0u;
        goto label_1b2ed0;
    }
    ctx->pc = 0x1B2EC8u;
    {
        const bool branch_taken_0x1b2ec8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B2ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2EC8u;
        // 0x1b2ecc: 0x24668880  addiu       $a2, $v1, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ec8) {
            ctx->pc = 0x1B2FE4u;
            goto label_1b2fe4;
        }
    }
    ctx->pc = 0x1B2ED0u;
label_1b2ed0:
    // 0x1b2ed0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1b2ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b2ed4:
    // 0x1b2ed4: 0x10a00076  beqz        $a1, . + 4 + (0x76 << 2)
label_1b2ed8:
    if (ctx->pc == 0x1B2ED8u) {
        ctx->pc = 0x1B2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2ED4u;
        // 0x1b2ed8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2EDCu;
        goto label_1b2edc;
    }
    ctx->pc = 0x1B2ED4u;
    {
        const bool branch_taken_0x1b2ed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2ED4u;
        // 0x1b2ed8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ed4) {
            ctx->pc = 0x1B30B0u;
            goto label_1b30b0;
        }
    }
    ctx->pc = 0x1B2EDCu;
label_1b2edc:
    // 0x1b2edc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1b2edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b2ee0:
    // 0x1b2ee0: 0xc6600088  lwc1        $f0, 0x88($s3)
    ctx->pc = 0x1b2ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b2ee4:
    // 0x1b2ee4: 0xc6620080  lwc1        $f2, 0x80($s3)
    ctx->pc = 0x1b2ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b2ee8:
    // 0x1b2ee8: 0x46010100  add.s       $f4, $f0, $f1
    ctx->pc = 0x1b2ee8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b2eec:
    // 0x1b2eec: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x1b2eecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2ef0:
    // 0x1b2ef0: 0x0  nop
    ctx->pc = 0x1b2ef0u;
    // NOP
label_1b2ef4:
    // 0x1b2ef4: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_1b2ef8:
    if (ctx->pc == 0x1B2EF8u) {
        ctx->pc = 0x1B2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2EF4u;
        // 0x1b2ef8: 0xe6640088  swc1        $f4, 0x88($s3) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2EFCu;
        goto label_1b2efc;
    }
    ctx->pc = 0x1B2EF4u;
    {
        const bool branch_taken_0x1b2ef4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2EF4u;
        // 0x1b2ef8: 0xe6640088  swc1        $f4, 0x88($s3) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ef4) {
            ctx->pc = 0x1B2F58u;
            goto label_1b2f58;
        }
    }
    ctx->pc = 0x1B2EFCu;
label_1b2efc:
    // 0x1b2efc: 0x26700038  addiu       $s0, $s3, 0x38
    ctx->pc = 0x1b2efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
label_1b2f00:
    // 0x1b2f00: 0xa2600077  sb          $zero, 0x77($s3)
    ctx->pc = 0x1b2f00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 119), (uint8_t)GPR_U32(ctx, 0));
label_1b2f04:
    // 0x1b2f04: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b2f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b2f08:
    // 0x1b2f08: 0xc07fb0c  jal         func_1FEC30
label_1b2f0c:
    if (ctx->pc == 0x1B2F0Cu) {
        ctx->pc = 0x1B2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F08u;
        // 0x1b2f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2F10u;
        goto label_1b2f10;
    }
    ctx->pc = 0x1B2F08u;
    SET_GPR_U32(ctx, 31, 0x1B2F10u);
    ctx->pc = 0x1B2F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F08u;
    // 0x1b2f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1B2F08u, 0x1B2F10u)) {
        return;
    }
    ctx->pc = 0x1B2F10u;
label_1b2f10:
    // 0x1b2f10: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1b2f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_1b2f14:
    // 0x1b2f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2f18:
    // 0x1b2f18: 0xc07fb0c  jal         func_1FEC30
label_1b2f1c:
    if (ctx->pc == 0x1B2F1Cu) {
        ctx->pc = 0x1B2F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F18u;
        // 0x1b2f1c: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2F20u;
        goto label_1b2f20;
    }
    ctx->pc = 0x1B2F18u;
    SET_GPR_U32(ctx, 31, 0x1B2F20u);
    ctx->pc = 0x1B2F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F18u;
    // 0x1b2f1c: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1B2F18u, 0x1B2F20u)) {
        return;
    }
    ctx->pc = 0x1B2F20u;
label_1b2f20:
    // 0x1b2f20: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1b2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1b2f24:
    // 0x1b2f24: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x1b2f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_1b2f28:
    // 0x1b2f28: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1b2f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_1b2f2c:
    // 0x1b2f2c: 0x10830060  beq         $a0, $v1, . + 4 + (0x60 << 2)
label_1b2f30:
    if (ctx->pc == 0x1B2F30u) {
        ctx->pc = 0x1B2F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F2Cu;
        // 0x1b2f30: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2F34u;
        goto label_1b2f34;
    }
    ctx->pc = 0x1B2F2Cu;
    {
        const bool branch_taken_0x1b2f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B2F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F2Cu;
        // 0x1b2f30: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f2c) {
            ctx->pc = 0x1B30B0u;
            goto label_1b30b0;
        }
    }
    ctx->pc = 0x1B2F34u;
label_1b2f34:
    // 0x1b2f34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b2f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b2f38:
    // 0x1b2f38: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_1b2f3c:
    if (ctx->pc == 0x1B2F3Cu) {
        ctx->pc = 0x1B2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F38u;
        // 0x1b2f3c: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2F40u;
        goto label_1b2f40;
    }
    ctx->pc = 0x1B2F38u;
    {
        const bool branch_taken_0x1b2f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F38u;
        // 0x1b2f3c: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f38) {
            ctx->pc = 0x1B30B4u;
            goto label_1b30b4;
        }
    }
    ctx->pc = 0x1B2F40u;
label_1b2f40:
    // 0x1b2f40: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b2f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1b2f44:
    // 0x1b2f44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b2f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b2f48:
    // 0x1b2f48: 0xc07fd18  jal         func_1FF460
label_1b2f4c:
    if (ctx->pc == 0x1B2F4Cu) {
        ctx->pc = 0x1B2F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F48u;
        // 0x1b2f4c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2F50u;
        goto label_1b2f50;
    }
    ctx->pc = 0x1B2F48u;
    SET_GPR_U32(ctx, 31, 0x1B2F50u);
    ctx->pc = 0x1B2F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F48u;
    // 0x1b2f4c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1B2F48u, 0x1B2F50u)) {
        return;
    }
    ctx->pc = 0x1B2F50u;
label_1b2f50:
    // 0x1b2f50: 0x10000057  b           . + 4 + (0x57 << 2)
label_1b2f54:
    if (ctx->pc == 0x1B2F54u) {
        ctx->pc = 0x1B2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F50u;
        // 0x1b2f54: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2F58u;
        goto label_1b2f58;
    }
    ctx->pc = 0x1B2F50u;
    {
        const bool branch_taken_0x1b2f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F50u;
        // 0x1b2f54: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f50) {
            ctx->pc = 0x1B30B0u;
            goto label_1b30b0;
        }
    }
    ctx->pc = 0x1B2F58u;
label_1b2f58:
    // 0x1b2f58: 0xc6600084  lwc1        $f0, 0x84($s3)
    ctx->pc = 0x1b2f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b2f5c:
    // 0x1b2f5c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1b2f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2f60:
    // 0x1b2f60: 0x0  nop
    ctx->pc = 0x1b2f60u;
    // NOP
label_1b2f64:
    // 0x1b2f64: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
label_1b2f68:
    if (ctx->pc == 0x1B2F68u) {
        ctx->pc = 0x1B2F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F64u;
        // 0x1b2f68: 0xc661007c  lwc1        $f1, 0x7C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2F6Cu;
        goto label_1b2f6c;
    }
    ctx->pc = 0x1B2F64u;
    {
        const bool branch_taken_0x1b2f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2f64) {
            ctx->pc = 0x1B2F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2F64u;
            // 0x1b2f68: 0xc661007c  lwc1        $f1, 0x7C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2F9Cu;
            goto label_1b2f9c;
        }
    }
    ctx->pc = 0x1B2F6Cu;
label_1b2f6c:
    // 0x1b2f6c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1b2f6cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1b2f70:
    // 0x1b2f70: 0x3c01c37f  lui         $at, 0xC37F
    ctx->pc = 0x1b2f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50047 << 16));
label_1b2f74:
    // 0x1b2f74: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b2f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b2f78:
    // 0x1b2f78: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x1b2f78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_1b2f7c:
    // 0x1b2f7c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1b2f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1b2f80:
    // 0x1b2f80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2f84:
    // 0x1b2f84: 0x0  nop
    ctx->pc = 0x1b2f84u;
    // NOP
label_1b2f88:
    // 0x1b2f88: 0x0  nop
    ctx->pc = 0x1b2f88u;
    // NOP
label_1b2f8c:
    // 0x1b2f8c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b2f8cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
label_1b2f90:
    // 0x1b2f90: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1b2f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1b2f94:
    // 0x1b2f94: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b2f98:
    if (ctx->pc == 0x1B2F98u) {
        ctx->pc = 0x1B2F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F94u;
        // 0x1b2f98: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2F9Cu;
        goto label_1b2f9c;
    }
    ctx->pc = 0x1B2F94u;
    {
        const bool branch_taken_0x1b2f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F94u;
        // 0x1b2f98: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f94) {
            ctx->pc = 0x1B2FD4u;
            goto label_1b2fd4;
        }
    }
    ctx->pc = 0x1B2F9Cu;
label_1b2f9c:
    // 0x1b2f9c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x1b2f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2fa0:
    // 0x1b2fa0: 0x0  nop
    ctx->pc = 0x1b2fa0u;
    // NOP
label_1b2fa4:
    // 0x1b2fa4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1b2fa8:
    if (ctx->pc == 0x1B2FA8u) {
        ctx->pc = 0x1B2FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FA4u;
        // 0x1b2fa8: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2FACu;
        goto label_1b2fac;
    }
    ctx->pc = 0x1B2FA4u;
    {
        const bool branch_taken_0x1b2fa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FA4u;
        // 0x1b2fa8: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2fa4) {
            ctx->pc = 0x1B2FB4u;
            goto label_1b2fb4;
        }
    }
    ctx->pc = 0x1B2FACu;
label_1b2fac:
    // 0x1b2fac: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1b2fb0:
    if (ctx->pc == 0x1B2FB0u) {
        ctx->pc = 0x1B2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FACu;
        // 0x1b2fb0: 0xa2620077  sb          $v0, 0x77($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 119), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2FB4u;
        goto label_1b2fb4;
    }
    ctx->pc = 0x1B2FACu;
    {
        const bool branch_taken_0x1b2fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FACu;
        // 0x1b2fb0: 0xa2620077  sb          $v0, 0x77($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 119), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2fac) {
            ctx->pc = 0x1B30ACu;
            goto label_1b30ac;
        }
    }
    ctx->pc = 0x1B2FB4u;
label_1b2fb4:
    // 0x1b2fb4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b2fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b2fb8:
    // 0x1b2fb8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1b2fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1b2fbc:
    // 0x1b2fbc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b2fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b2fc0:
    // 0x1b2fc0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1b2fc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1b2fc4:
    // 0x1b2fc4: 0x46022001  sub.s       $f0, $f4, $f2
    ctx->pc = 0x1b2fc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_1b2fc8:
    // 0x1b2fc8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b2fc8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_1b2fcc:
    // 0x1b2fcc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1b2fccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1b2fd0:
    // 0x1b2fd0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b2fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1b2fd4:
    // 0x1b2fd4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b2fd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1b2fd8:
    // 0x1b2fd8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b2fd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b2fdc:
    // 0x1b2fdc: 0x10000033  b           . + 4 + (0x33 << 2)
label_1b2fe0:
    if (ctx->pc == 0x1B2FE0u) {
        ctx->pc = 0x1B2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FDCu;
        // 0x1b2fe0: 0xa2620077  sb          $v0, 0x77($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 119), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2FE4u;
        goto label_1b2fe4;
    }
    ctx->pc = 0x1B2FDCu;
    {
        const bool branch_taken_0x1b2fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FDCu;
        // 0x1b2fe0: 0xa2620077  sb          $v0, 0x77($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 119), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2fdc) {
            ctx->pc = 0x1B30ACu;
            goto label_1b30ac;
        }
    }
    ctx->pc = 0x1B2FE4u;
label_1b2fe4:
    // 0x1b2fe4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1b2fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1b2fe8:
    // 0x1b2fe8: 0x8c438918  lw          $v1, -0x76E8($v0)
    ctx->pc = 0x1b2fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936856)));
label_1b2fec:
    // 0x1b2fec: 0x14830030  bne         $a0, $v1, . + 4 + (0x30 << 2)
label_1b2ff0:
    if (ctx->pc == 0x1B2FF0u) {
        ctx->pc = 0x1B2FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FECu;
        // 0x1b2ff0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2FF4u;
        goto label_1b2ff4;
    }
    ctx->pc = 0x1B2FECu;
    {
        const bool branch_taken_0x1b2fec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B2FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FECu;
        // 0x1b2ff0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2fec) {
            ctx->pc = 0x1B30B0u;
            goto label_1b30b0;
        }
    }
    ctx->pc = 0x1B2FF4u;
label_1b2ff4:
    // 0x1b2ff4: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x1b2ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_1b2ff8:
    // 0x1b2ff8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_1b2ffc:
    if (ctx->pc == 0x1B2FFCu) {
        ctx->pc = 0x1B2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FF8u;
        // 0x1b2ffc: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3000u;
        goto label_1b3000;
    }
    ctx->pc = 0x1B2FF8u;
    {
        const bool branch_taken_0x1b2ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FF8u;
        // 0x1b2ffc: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ff8) {
            ctx->pc = 0x1B30B4u;
            goto label_1b30b4;
        }
    }
    ctx->pc = 0x1B3000u;
label_1b3000:
    // 0x1b3000: 0xc075da2  jal         func_1D7688
label_1b3004:
    if (ctx->pc == 0x1B3004u) {
        ctx->pc = 0x1B3008u;
        goto label_1b3008;
    }
    ctx->pc = 0x1B3000u;
    SET_GPR_U32(ctx, 31, 0x1B3008u);
    ctx->pc = 0x1D7688u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7688u, 0x1B3000u, 0x1B3008u)) {
        return;
    }
    ctx->pc = 0x1B3008u;
label_1b3008:
    // 0x1b3008: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_1b300c:
    if (ctx->pc == 0x1B300Cu) {
        ctx->pc = 0x1B300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3008u;
        // 0x1b300c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3010u;
        goto label_1b3010;
    }
    ctx->pc = 0x1B3008u;
    {
        const bool branch_taken_0x1b3008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3008u;
        // 0x1b300c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3008) {
            ctx->pc = 0x1B30B0u;
            goto label_1b30b0;
        }
    }
    ctx->pc = 0x1B3010u;
label_1b3010:
    // 0x1b3010: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x1b3010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1b3014:
    // 0x1b3014: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1b3018:
    if (ctx->pc == 0x1B3018u) {
        ctx->pc = 0x1B3018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3014u;
        // 0x1b3018: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B301Cu;
        goto label_1b301c;
    }
    ctx->pc = 0x1B3014u;
    {
        const bool branch_taken_0x1b3014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3014u;
        // 0x1b3018: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3014) {
            ctx->pc = 0x1B30ACu;
            goto label_1b30ac;
        }
    }
    ctx->pc = 0x1B301Cu;
label_1b301c:
    // 0x1b301c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1b301cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b3020:
    // 0x1b3020: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1b3020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1b3024:
    // 0x1b3024: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1b3024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b3028:
    // 0x1b3028: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b3028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b302c:
    // 0x1b302c: 0x40f809  jalr        $v0
label_1b3030:
    if (ctx->pc == 0x1B3030u) {
        ctx->pc = 0x1B3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B302Cu;
        // 0x1b3030: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3034u;
        goto label_1b3034;
    }
    ctx->pc = 0x1B302Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3034u);
        ctx->pc = 0x1B3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B302Cu;
        // 0x1b3030: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B302Cu, 0x1B3034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B3034u;
label_1b3034:
    // 0x1b3034: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x1b3034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_1b3038:
    // 0x1b3038: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b3038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b303c:
    // 0x1b303c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b303cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b3040:
    // 0x1b3040: 0x40f809  jalr        $v0
label_1b3044:
    if (ctx->pc == 0x1B3044u) {
        ctx->pc = 0x1B3044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3040u;
        // 0x1b3044: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3048u;
        goto label_1b3048;
    }
    ctx->pc = 0x1B3040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3048u);
        ctx->pc = 0x1B3044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3040u;
        // 0x1b3044: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3040u, 0x1B3048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B3048u;
label_1b3048:
    // 0x1b3048: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b3048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b304c:
    // 0x1b304c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1b304cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b3050:
    // 0x1b3050: 0x40f809  jalr        $v0
label_1b3054:
    if (ctx->pc == 0x1B3054u) {
        ctx->pc = 0x1B3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3050u;
        // 0x1b3054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3058u;
        goto label_1b3058;
    }
    ctx->pc = 0x1B3050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3058u);
        ctx->pc = 0x1B3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3050u;
        // 0x1b3054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3050u, 0x1B3058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B3058u;
label_1b3058:
    // 0x1b3058: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b3058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b305c:
    // 0x1b305c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b305cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3060:
    // 0x1b3060: 0x40f809  jalr        $v0
label_1b3064:
    if (ctx->pc == 0x1B3064u) {
        ctx->pc = 0x1B3064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3060u;
        // 0x1b3064: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3068u;
        goto label_1b3068;
    }
    ctx->pc = 0x1B3060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3068u);
        ctx->pc = 0x1B3064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3060u;
        // 0x1b3064: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3060u, 0x1B3068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B3068u;
label_1b3068:
    // 0x1b3068: 0xc085ba8  jal         func_216EA0
label_1b306c:
    if (ctx->pc == 0x1B306Cu) {
        ctx->pc = 0x1B306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3068u;
        // 0x1b306c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3070u;
        goto label_1b3070;
    }
    ctx->pc = 0x1B3068u;
    SET_GPR_U32(ctx, 31, 0x1B3070u);
    ctx->pc = 0x1B306Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3068u;
    // 0x1b306c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1B3068u, 0x1B3070u)) {
        return;
    }
    ctx->pc = 0x1B3070u;
label_1b3070:
    // 0x1b3070: 0x8e680070  lw          $t0, 0x70($s3)
    ctx->pc = 0x1b3070u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_1b3074:
    // 0x1b3074: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b3074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3078:
    // 0x1b3078: 0xc66c0078  lwc1        $f12, 0x78($s3)
    ctx->pc = 0x1b3078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b307c:
    // 0x1b307c: 0x26660060  addiu       $a2, $s3, 0x60
    ctx->pc = 0x1b307cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_1b3080:
    // 0x1b3080: 0x8e65005c  lw          $a1, 0x5C($s3)
    ctx->pc = 0x1b3080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_1b3084:
    // 0x1b3084: 0xc085cec  jal         func_2173B0
label_1b3088:
    if (ctx->pc == 0x1B3088u) {
        ctx->pc = 0x1B3088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3084u;
        // 0x1b3088: 0x26670074  addiu       $a3, $s3, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B308Cu;
        goto label_1b308c;
    }
    ctx->pc = 0x1B3084u;
    SET_GPR_U32(ctx, 31, 0x1B308Cu);
    ctx->pc = 0x1B3088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3084u;
    // 0x1b3088: 0x26670074  addiu       $a3, $s3, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1B3084u, 0x1B308Cu)) {
        return;
    }
    ctx->pc = 0x1B308Cu;
label_1b308c:
    // 0x1b308c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b308cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b3090:
    // 0x1b3090: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b3090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b3094:
    // 0x1b3094: 0x40f809  jalr        $v0
label_1b3098:
    if (ctx->pc == 0x1B3098u) {
        ctx->pc = 0x1B3098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3094u;
        // 0x1b3098: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B309Cu;
        goto label_1b309c;
    }
    ctx->pc = 0x1B3094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B309Cu);
        ctx->pc = 0x1B3098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3094u;
        // 0x1b3098: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3094u, 0x1B309Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B309Cu;
label_1b309c:
    // 0x1b309c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b30a0:
    // 0x1b30a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b30a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b30a4:
    // 0x1b30a4: 0x40f809  jalr        $v0
label_1b30a8:
    if (ctx->pc == 0x1B30A8u) {
        ctx->pc = 0x1B30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30A4u;
        // 0x1b30a8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B30ACu;
        goto label_1b30ac;
    }
    ctx->pc = 0x1B30A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B30ACu);
        ctx->pc = 0x1B30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30A4u;
        // 0x1b30a8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B30A4u, 0x1B30ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B30ACu;
label_1b30ac:
    // 0x1b30ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b30acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b30b0:
    // 0x1b30b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b30b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b30b4:
    // 0x1b30b4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b30b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b30b8:
    // 0x1b30b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b30b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b30bc:
    // 0x1b30bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b30bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b30c0:
    // 0x1b30c0: 0x3e00008  jr          $ra
label_1b30c4:
    if (ctx->pc == 0x1B30C4u) {
        ctx->pc = 0x1B30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30C0u;
        // 0x1b30c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B30C8u;
        goto label_fallthrough_0x1b30c0;
    }
    ctx->pc = 0x1B30C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30C0u;
        // 0x1b30c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B30C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b30c0:
    ctx->pc = 0x1B30C8u;
}
