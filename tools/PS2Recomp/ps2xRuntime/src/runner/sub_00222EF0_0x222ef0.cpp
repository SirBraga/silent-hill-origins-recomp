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

// Function: sub_00222EF0
// Address: 0x222ef0 - 0x223240
void sub_00222EF0_0x222ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222EF0_0x222ef0");
#endif

    switch (ctx->pc) {
        case 0x222ef0u: goto label_222ef0;
        case 0x222ef4u: goto label_222ef4;
        case 0x222ef8u: goto label_222ef8;
        case 0x222efcu: goto label_222efc;
        case 0x222f00u: goto label_222f00;
        case 0x222f04u: goto label_222f04;
        case 0x222f08u: goto label_222f08;
        case 0x222f0cu: goto label_222f0c;
        case 0x222f10u: goto label_222f10;
        case 0x222f14u: goto label_222f14;
        case 0x222f18u: goto label_222f18;
        case 0x222f1cu: goto label_222f1c;
        case 0x222f20u: goto label_222f20;
        case 0x222f24u: goto label_222f24;
        case 0x222f28u: goto label_222f28;
        case 0x222f2cu: goto label_222f2c;
        case 0x222f30u: goto label_222f30;
        case 0x222f34u: goto label_222f34;
        case 0x222f38u: goto label_222f38;
        case 0x222f3cu: goto label_222f3c;
        case 0x222f40u: goto label_222f40;
        case 0x222f44u: goto label_222f44;
        case 0x222f48u: goto label_222f48;
        case 0x222f4cu: goto label_222f4c;
        case 0x222f50u: goto label_222f50;
        case 0x222f54u: goto label_222f54;
        case 0x222f58u: goto label_222f58;
        case 0x222f5cu: goto label_222f5c;
        case 0x222f60u: goto label_222f60;
        case 0x222f64u: goto label_222f64;
        case 0x222f68u: goto label_222f68;
        case 0x222f6cu: goto label_222f6c;
        case 0x222f70u: goto label_222f70;
        case 0x222f74u: goto label_222f74;
        case 0x222f78u: goto label_222f78;
        case 0x222f7cu: goto label_222f7c;
        case 0x222f80u: goto label_222f80;
        case 0x222f84u: goto label_222f84;
        case 0x222f88u: goto label_222f88;
        case 0x222f8cu: goto label_222f8c;
        case 0x222f90u: goto label_222f90;
        case 0x222f94u: goto label_222f94;
        case 0x222f98u: goto label_222f98;
        case 0x222f9cu: goto label_222f9c;
        case 0x222fa0u: goto label_222fa0;
        case 0x222fa4u: goto label_222fa4;
        case 0x222fa8u: goto label_222fa8;
        case 0x222facu: goto label_222fac;
        case 0x222fb0u: goto label_222fb0;
        case 0x222fb4u: goto label_222fb4;
        case 0x222fb8u: goto label_222fb8;
        case 0x222fbcu: goto label_222fbc;
        case 0x222fc0u: goto label_222fc0;
        case 0x222fc4u: goto label_222fc4;
        case 0x222fc8u: goto label_222fc8;
        case 0x222fccu: goto label_222fcc;
        case 0x222fd0u: goto label_222fd0;
        case 0x222fd4u: goto label_222fd4;
        case 0x222fd8u: goto label_222fd8;
        case 0x222fdcu: goto label_222fdc;
        case 0x222fe0u: goto label_222fe0;
        case 0x222fe4u: goto label_222fe4;
        case 0x222fe8u: goto label_222fe8;
        case 0x222fecu: goto label_222fec;
        case 0x222ff0u: goto label_222ff0;
        case 0x222ff4u: goto label_222ff4;
        case 0x222ff8u: goto label_222ff8;
        case 0x222ffcu: goto label_222ffc;
        case 0x223000u: goto label_223000;
        case 0x223004u: goto label_223004;
        case 0x223008u: goto label_223008;
        case 0x22300cu: goto label_22300c;
        case 0x223010u: goto label_223010;
        case 0x223014u: goto label_223014;
        case 0x223018u: goto label_223018;
        case 0x22301cu: goto label_22301c;
        case 0x223020u: goto label_223020;
        case 0x223024u: goto label_223024;
        case 0x223028u: goto label_223028;
        case 0x22302cu: goto label_22302c;
        case 0x223030u: goto label_223030;
        case 0x223034u: goto label_223034;
        case 0x223038u: goto label_223038;
        case 0x22303cu: goto label_22303c;
        case 0x223040u: goto label_223040;
        case 0x223044u: goto label_223044;
        case 0x223048u: goto label_223048;
        case 0x22304cu: goto label_22304c;
        case 0x223050u: goto label_223050;
        case 0x223054u: goto label_223054;
        case 0x223058u: goto label_223058;
        case 0x22305cu: goto label_22305c;
        case 0x223060u: goto label_223060;
        case 0x223064u: goto label_223064;
        case 0x223068u: goto label_223068;
        case 0x22306cu: goto label_22306c;
        case 0x223070u: goto label_223070;
        case 0x223074u: goto label_223074;
        case 0x223078u: goto label_223078;
        case 0x22307cu: goto label_22307c;
        case 0x223080u: goto label_223080;
        case 0x223084u: goto label_223084;
        case 0x223088u: goto label_223088;
        case 0x22308cu: goto label_22308c;
        case 0x223090u: goto label_223090;
        case 0x223094u: goto label_223094;
        case 0x223098u: goto label_223098;
        case 0x22309cu: goto label_22309c;
        case 0x2230a0u: goto label_2230a0;
        case 0x2230a4u: goto label_2230a4;
        case 0x2230a8u: goto label_2230a8;
        case 0x2230acu: goto label_2230ac;
        case 0x2230b0u: goto label_2230b0;
        case 0x2230b4u: goto label_2230b4;
        case 0x2230b8u: goto label_2230b8;
        case 0x2230bcu: goto label_2230bc;
        case 0x2230c0u: goto label_2230c0;
        case 0x2230c4u: goto label_2230c4;
        case 0x2230c8u: goto label_2230c8;
        case 0x2230ccu: goto label_2230cc;
        case 0x2230d0u: goto label_2230d0;
        case 0x2230d4u: goto label_2230d4;
        case 0x2230d8u: goto label_2230d8;
        case 0x2230dcu: goto label_2230dc;
        case 0x2230e0u: goto label_2230e0;
        case 0x2230e4u: goto label_2230e4;
        case 0x2230e8u: goto label_2230e8;
        case 0x2230ecu: goto label_2230ec;
        case 0x2230f0u: goto label_2230f0;
        case 0x2230f4u: goto label_2230f4;
        case 0x2230f8u: goto label_2230f8;
        case 0x2230fcu: goto label_2230fc;
        case 0x223100u: goto label_223100;
        case 0x223104u: goto label_223104;
        case 0x223108u: goto label_223108;
        case 0x22310cu: goto label_22310c;
        case 0x223110u: goto label_223110;
        case 0x223114u: goto label_223114;
        case 0x223118u: goto label_223118;
        case 0x22311cu: goto label_22311c;
        case 0x223120u: goto label_223120;
        case 0x223124u: goto label_223124;
        case 0x223128u: goto label_223128;
        case 0x22312cu: goto label_22312c;
        case 0x223130u: goto label_223130;
        case 0x223134u: goto label_223134;
        case 0x223138u: goto label_223138;
        case 0x22313cu: goto label_22313c;
        case 0x223140u: goto label_223140;
        case 0x223144u: goto label_223144;
        case 0x223148u: goto label_223148;
        case 0x22314cu: goto label_22314c;
        case 0x223150u: goto label_223150;
        case 0x223154u: goto label_223154;
        case 0x223158u: goto label_223158;
        case 0x22315cu: goto label_22315c;
        case 0x223160u: goto label_223160;
        case 0x223164u: goto label_223164;
        case 0x223168u: goto label_223168;
        case 0x22316cu: goto label_22316c;
        case 0x223170u: goto label_223170;
        case 0x223174u: goto label_223174;
        case 0x223178u: goto label_223178;
        case 0x22317cu: goto label_22317c;
        case 0x223180u: goto label_223180;
        case 0x223184u: goto label_223184;
        case 0x223188u: goto label_223188;
        case 0x22318cu: goto label_22318c;
        case 0x223190u: goto label_223190;
        case 0x223194u: goto label_223194;
        case 0x223198u: goto label_223198;
        case 0x22319cu: goto label_22319c;
        case 0x2231a0u: goto label_2231a0;
        case 0x2231a4u: goto label_2231a4;
        case 0x2231a8u: goto label_2231a8;
        case 0x2231acu: goto label_2231ac;
        case 0x2231b0u: goto label_2231b0;
        case 0x2231b4u: goto label_2231b4;
        case 0x2231b8u: goto label_2231b8;
        case 0x2231bcu: goto label_2231bc;
        case 0x2231c0u: goto label_2231c0;
        case 0x2231c4u: goto label_2231c4;
        case 0x2231c8u: goto label_2231c8;
        case 0x2231ccu: goto label_2231cc;
        case 0x2231d0u: goto label_2231d0;
        case 0x2231d4u: goto label_2231d4;
        case 0x2231d8u: goto label_2231d8;
        case 0x2231dcu: goto label_2231dc;
        case 0x2231e0u: goto label_2231e0;
        case 0x2231e4u: goto label_2231e4;
        case 0x2231e8u: goto label_2231e8;
        case 0x2231ecu: goto label_2231ec;
        case 0x2231f0u: goto label_2231f0;
        case 0x2231f4u: goto label_2231f4;
        case 0x2231f8u: goto label_2231f8;
        case 0x2231fcu: goto label_2231fc;
        case 0x223200u: goto label_223200;
        case 0x223204u: goto label_223204;
        case 0x223208u: goto label_223208;
        case 0x22320cu: goto label_22320c;
        case 0x223210u: goto label_223210;
        case 0x223214u: goto label_223214;
        case 0x223218u: goto label_223218;
        case 0x22321cu: goto label_22321c;
        case 0x223220u: goto label_223220;
        case 0x223224u: goto label_223224;
        case 0x223228u: goto label_223228;
        case 0x22322cu: goto label_22322c;
        case 0x223230u: goto label_223230;
        case 0x223234u: goto label_223234;
        case 0x223238u: goto label_223238;
        case 0x22323cu: goto label_22323c;
        default: break;
    }

    ctx->pc = 0x222ef0u;

label_222ef0:
    // 0x222ef0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x222ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_222ef4:
    // 0x222ef4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x222ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_222ef8:
    // 0x222ef8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x222ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_222efc:
    // 0x222efc: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x222efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_222f00:
    // 0x222f00: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x222f00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_222f04:
    // 0x222f04: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x222f04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_222f08:
    // 0x222f08: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x222f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_222f0c:
    // 0x222f0c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x222f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_222f10:
    // 0x222f10: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x222f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_222f14:
    // 0x222f14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x222f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222f18:
    // 0x222f18: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x222f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_222f1c:
    // 0x222f1c: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x222f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_222f20:
    // 0x222f20: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x222f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_222f24:
    // 0x222f24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x222f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_222f28:
    // 0x222f28: 0xc09270a  jal         func_249C28
label_222f2c:
    if (ctx->pc == 0x222F2Cu) {
        ctx->pc = 0x222F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F28u;
        // 0x222f2c: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x222F30u;
        goto label_222f30;
    }
    ctx->pc = 0x222F28u;
    SET_GPR_U32(ctx, 31, 0x222F30u);
    ctx->pc = 0x222F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F28u;
    // 0x222f2c: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x222F28u, 0x222F30u)) {
        return;
    }
    ctx->pc = 0x222F30u;
label_222f30:
    // 0x222f30: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_222f34:
    if (ctx->pc == 0x222F34u) {
        ctx->pc = 0x222F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F30u;
        // 0x222f34: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222F38u;
        goto label_222f38;
    }
    ctx->pc = 0x222F30u;
    {
        const bool branch_taken_0x222f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F30u;
        // 0x222f34: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f30) {
            ctx->pc = 0x223178u;
            goto label_223178;
        }
    }
    ctx->pc = 0x222F38u;
label_222f38:
    // 0x222f38: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x222f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_222f3c:
    // 0x222f3c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x222f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_222f40:
    // 0x222f40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x222f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_222f44:
    // 0x222f44: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x222f44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_222f48:
    // 0x222f48: 0x10600083  beqz        $v1, . + 4 + (0x83 << 2)
label_222f4c:
    if (ctx->pc == 0x222F4Cu) {
        ctx->pc = 0x222F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F48u;
        // 0x222f4c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222F50u;
        goto label_222f50;
    }
    ctx->pc = 0x222F48u;
    {
        const bool branch_taken_0x222f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F48u;
        // 0x222f4c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f48) {
            ctx->pc = 0x223158u;
            goto label_223158;
        }
    }
    ctx->pc = 0x222F50u;
label_222f50:
    // 0x222f50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x222f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_222f54:
    // 0x222f54: 0xc093546  jal         func_24D518
label_222f58:
    if (ctx->pc == 0x222F58u) {
        ctx->pc = 0x222F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F54u;
        // 0x222f58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222F5Cu;
        goto label_222f5c;
    }
    ctx->pc = 0x222F54u;
    SET_GPR_U32(ctx, 31, 0x222F5Cu);
    ctx->pc = 0x222F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F54u;
    // 0x222f58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x222F54u, 0x222F5Cu)) {
        return;
    }
    ctx->pc = 0x222F5Cu;
label_222f5c:
    // 0x222f5c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x222f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_222f60:
    // 0x222f60: 0x144300ab  bne         $v0, $v1, . + 4 + (0xAB << 2)
label_222f64:
    if (ctx->pc == 0x222F64u) {
        ctx->pc = 0x222F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F60u;
        // 0x222f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222F68u;
        goto label_222f68;
    }
    ctx->pc = 0x222F60u;
    {
        const bool branch_taken_0x222f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x222F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F60u;
        // 0x222f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f60) {
            ctx->pc = 0x223210u;
            goto label_223210;
        }
    }
    ctx->pc = 0x222F68u;
label_222f68:
    // 0x222f68: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x222f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_222f6c:
    // 0x222f6c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x222f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_222f70:
    // 0x222f70: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x222f70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_222f74:
    // 0x222f74: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x222f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_222f78:
    // 0x222f78: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x222f78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
label_222f7c:
    // 0x222f7c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x222f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_222f80:
    // 0x222f80: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x222f80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_222f84:
    // 0x222f84: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x222f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_222f88:
    // 0x222f88: 0x40f809  jalr        $v0
label_222f8c:
    if (ctx->pc == 0x222F8Cu) {
        ctx->pc = 0x222F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F88u;
        // 0x222f8c: 0x34a5000e  ori         $a1, $a1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x222F90u;
        goto label_222f90;
    }
    ctx->pc = 0x222F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x222F90u);
        ctx->pc = 0x222F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F88u;
        // 0x222f8c: 0x34a5000e  ori         $a1, $a1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222F88u, 0x222F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x222F90u;
label_222f90:
    // 0x222f90: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_222f94:
    if (ctx->pc == 0x222F94u) {
        ctx->pc = 0x222F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F90u;
        // 0x222f94: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222F98u;
        goto label_222f98;
    }
    ctx->pc = 0x222F90u;
    {
        const bool branch_taken_0x222f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F90u;
        // 0x222f94: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f90) {
            ctx->pc = 0x222FC0u;
            goto label_222fc0;
        }
    }
    ctx->pc = 0x222F98u;
label_222f98:
    // 0x222f98: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x222f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_222f9c:
    // 0x222f9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222fa0:
    // 0x222fa0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x222fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_222fa4:
    // 0x222fa4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x222fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_222fa8:
    // 0x222fa8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x222fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_222fac:
    // 0x222fac: 0xc092848  jal         func_24A120
label_222fb0:
    if (ctx->pc == 0x222FB0u) {
        ctx->pc = 0x222FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FACu;
        // 0x222fb0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x222FB4u;
        goto label_222fb4;
    }
    ctx->pc = 0x222FACu;
    SET_GPR_U32(ctx, 31, 0x222FB4u);
    ctx->pc = 0x222FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222FACu;
    // 0x222fb0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x222FACu, 0x222FB4u)) {
        return;
    }
    ctx->pc = 0x222FB4u;
label_222fb4:
    // 0x222fb4: 0x1000006e  b           . + 4 + (0x6E << 2)
label_222fb8:
    if (ctx->pc == 0x222FB8u) {
        ctx->pc = 0x222FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FB4u;
        // 0x222fb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222FBCu;
        goto label_222fbc;
    }
    ctx->pc = 0x222FB4u;
    {
        const bool branch_taken_0x222fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FB4u;
        // 0x222fb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222fb4) {
            ctx->pc = 0x223170u;
            goto label_223170;
        }
    }
    ctx->pc = 0x222FBCu;
label_222fbc:
    // 0x222fbc: 0x0  nop
    ctx->pc = 0x222fbcu;
    // NOP
label_222fc0:
    // 0x222fc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x222fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_222fc4:
    // 0x222fc4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x222fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222fc8:
    // 0x222fc8: 0x18400075  blez        $v0, . + 4 + (0x75 << 2)
label_222fcc:
    if (ctx->pc == 0x222FCCu) {
        ctx->pc = 0x222FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FC8u;
        // 0x222fcc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222FD0u;
        goto label_222fd0;
    }
    ctx->pc = 0x222FC8u;
    {
        const bool branch_taken_0x222fc8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x222FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FC8u;
        // 0x222fcc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222fc8) {
            ctx->pc = 0x2231A0u;
            goto label_2231a0;
        }
    }
    ctx->pc = 0x222FD0u;
label_222fd0:
    // 0x222fd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x222fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_222fd4:
    // 0x222fd4: 0x0  nop
    ctx->pc = 0x222fd4u;
    // NOP
label_222fd8:
    // 0x222fd8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x222fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_222fdc:
    // 0x222fdc: 0xc093546  jal         func_24D518
label_222fe0:
    if (ctx->pc == 0x222FE0u) {
        ctx->pc = 0x222FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FDCu;
        // 0x222fe0: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222FE4u;
        goto label_222fe4;
    }
    ctx->pc = 0x222FDCu;
    SET_GPR_U32(ctx, 31, 0x222FE4u);
    ctx->pc = 0x222FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222FDCu;
    // 0x222fe0: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x222FDCu, 0x222FE4u)) {
        return;
    }
    ctx->pc = 0x222FE4u;
label_222fe4:
    // 0x222fe4: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x222fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_222fe8:
    // 0x222fe8: 0x14430068  bne         $v0, $v1, . + 4 + (0x68 << 2)
label_222fec:
    if (ctx->pc == 0x222FECu) {
        ctx->pc = 0x222FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FE8u;
        // 0x222fec: 0x26c30fc8  addiu       $v1, $s6, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222FF0u;
        goto label_222ff0;
    }
    ctx->pc = 0x222FE8u;
    {
        const bool branch_taken_0x222fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x222FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FE8u;
        // 0x222fec: 0x26c30fc8  addiu       $v1, $s6, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222fe8) {
            ctx->pc = 0x22318Cu;
            goto label_22318c;
        }
    }
    ctx->pc = 0x222FF0u;
label_222ff0:
    // 0x222ff0: 0xc089892  jal         func_226248
label_222ff4:
    if (ctx->pc == 0x222FF4u) {
        ctx->pc = 0x222FF8u;
        goto label_222ff8;
    }
    ctx->pc = 0x222FF0u;
    SET_GPR_U32(ctx, 31, 0x222FF8u);
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x222FF0u, 0x222FF8u)) {
        return;
    }
    ctx->pc = 0x222FF8u;
label_222ff8:
    // 0x222ff8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x222ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_222ffc:
    // 0x222ffc: 0x12200062  beqz        $s1, . + 4 + (0x62 << 2)
label_223000:
    if (ctx->pc == 0x223000u) {
        ctx->pc = 0x223000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FFCu;
        // 0x223000: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223004u;
        goto label_223004;
    }
    ctx->pc = 0x222FFCu;
    {
        const bool branch_taken_0x222ffc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x223000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FFCu;
        // 0x223000: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ffc) {
            ctx->pc = 0x223188u;
            goto label_223188;
        }
    }
    ctx->pc = 0x223004u;
label_223004:
    // 0x223004: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x223004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_223008:
    // 0x223008: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x223008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_22300c:
    // 0x22300c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22300cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_223010:
    // 0x223010: 0xb2220017  sdl         $v0, 0x17($s1)
    ctx->pc = 0x223010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_223014:
    // 0x223014: 0xb6220010  sdr         $v0, 0x10($s1)
    ctx->pc = 0x223014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_223018:
    // 0x223018: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x223018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_22301c:
    // 0x22301c: 0x6ba60023  ldl         $a2, 0x23($sp)
    ctx->pc = 0x22301cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_223020:
    // 0x223020: 0x6fa6001c  ldr         $a2, 0x1C($sp)
    ctx->pc = 0x223020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_223024:
    // 0x223024: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x223024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_223028:
    // 0x223028: 0xb2260027  sdl         $a2, 0x27($s1)
    ctx->pc = 0x223028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_22302c:
    // 0x22302c: 0xb6260020  sdr         $a2, 0x20($s1)
    ctx->pc = 0x22302cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_223030:
    // 0x223030: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x223030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_223034:
    // 0x223034: 0x6ba5002f  ldl         $a1, 0x2F($sp)
    ctx->pc = 0x223034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_223038:
    // 0x223038: 0x6fa50028  ldr         $a1, 0x28($sp)
    ctx->pc = 0x223038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_22303c:
    // 0x22303c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x22303cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_223040:
    // 0x223040: 0xb2250037  sdl         $a1, 0x37($s1)
    ctx->pc = 0x223040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_223044:
    // 0x223044: 0xb6250030  sdr         $a1, 0x30($s1)
    ctx->pc = 0x223044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_223048:
    // 0x223048: 0xae260038  sw          $a2, 0x38($s1)
    ctx->pc = 0x223048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 6));
label_22304c:
    // 0x22304c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x22304cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_223050:
    // 0x223050: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x223050u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_223054:
    // 0x223054: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x223054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_223058:
    // 0x223058: 0x6ba5003b  ldl         $a1, 0x3B($sp)
    ctx->pc = 0x223058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_22305c:
    // 0x22305c: 0x6fa50034  ldr         $a1, 0x34($sp)
    ctx->pc = 0x22305cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_223060:
    // 0x223060: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x223060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_223064:
    // 0x223064: 0xb2250047  sdl         $a1, 0x47($s1)
    ctx->pc = 0x223064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_223068:
    // 0x223068: 0xb6250040  sdr         $a1, 0x40($s1)
    ctx->pc = 0x223068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_22306c:
    // 0x22306c: 0xae260048  sw          $a2, 0x48($s1)
    ctx->pc = 0x22306cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 6));
label_223070:
    // 0x223070: 0xc092c88  jal         func_24B220
label_223074:
    if (ctx->pc == 0x223074u) {
        ctx->pc = 0x223074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223070u;
        // 0x223074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223078u;
        goto label_223078;
    }
    ctx->pc = 0x223070u;
    SET_GPR_U32(ctx, 31, 0x223078u);
    ctx->pc = 0x223074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223070u;
    // 0x223074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B220u, 0x223070u, 0x223078u)) {
        return;
    }
    ctx->pc = 0x223078u;
label_223078:
    // 0x223078: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x223078u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22307c:
    // 0x22307c: 0x0  nop
    ctx->pc = 0x22307cu;
    // NOP
label_223080:
    // 0x223080: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_223084:
    if (ctx->pc == 0x223084u) {
        ctx->pc = 0x223084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223080u;
        // 0x223084: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223088u;
        goto label_223088;
    }
    ctx->pc = 0x223080u;
    {
        const bool branch_taken_0x223080 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x223080) {
            ctx->pc = 0x223084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223080u;
            // 0x223084: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2230D4u;
            goto label_2230d4;
        }
    }
    ctx->pc = 0x223088u;
label_223088:
    // 0x223088: 0xc092c62  jal         func_24B188
label_22308c:
    if (ctx->pc == 0x22308Cu) {
        ctx->pc = 0x22308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223088u;
        // 0x22308c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223090u;
        goto label_223090;
    }
    ctx->pc = 0x223088u;
    SET_GPR_U32(ctx, 31, 0x223090u);
    ctx->pc = 0x22308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223088u;
    // 0x22308c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B188u, 0x223088u, 0x223090u)) {
        return;
    }
    ctx->pc = 0x223090u;
label_223090:
    // 0x223090: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x223090u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_223094:
    // 0x223094: 0x0  nop
    ctx->pc = 0x223094u;
    // NOP
label_223098:
    // 0x223098: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_22309c:
    if (ctx->pc == 0x22309Cu) {
        ctx->pc = 0x22309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223098u;
        // 0x22309c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2230A0u;
        goto label_2230a0;
    }
    ctx->pc = 0x223098u;
    {
        const bool branch_taken_0x223098 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x223098) {
            ctx->pc = 0x22309Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223098u;
            // 0x22309c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2230D4u;
            goto label_2230d4;
        }
    }
    ctx->pc = 0x2230A0u;
label_2230a0:
    // 0x2230a0: 0xc092c42  jal         func_24B108
label_2230a4:
    if (ctx->pc == 0x2230A4u) {
        ctx->pc = 0x2230A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2230A0u;
        // 0x2230a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2230A8u;
        goto label_2230a8;
    }
    ctx->pc = 0x2230A0u;
    SET_GPR_U32(ctx, 31, 0x2230A8u);
    ctx->pc = 0x2230A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2230A0u;
    // 0x2230a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B108u, 0x2230A0u, 0x2230A8u)) {
        return;
    }
    ctx->pc = 0x2230A8u;
label_2230a8:
    // 0x2230a8: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x2230a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
label_2230ac:
    // 0x2230ac: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x2230acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_2230b0:
    // 0x2230b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2230b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2230b4:
    // 0x2230b4: 0x0  nop
    ctx->pc = 0x2230b4u;
    // NOP
label_2230b8:
    // 0x2230b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2230b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2230bc:
    // 0x2230bc: 0x0  nop
    ctx->pc = 0x2230bcu;
    // NOP
label_2230c0:
    // 0x2230c0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2230c4:
    if (ctx->pc == 0x2230C4u) {
        ctx->pc = 0x2230C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2230C0u;
        // 0x2230c4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2230C8u;
        goto label_2230c8;
    }
    ctx->pc = 0x2230C0u;
    {
        const bool branch_taken_0x2230c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2230C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2230C0u;
        // 0x2230c4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2230c0) {
            ctx->pc = 0x2230D4u;
            goto label_2230d4;
        }
    }
    ctx->pc = 0x2230C8u;
label_2230c8:
    // 0x2230c8: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x2230c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
label_2230cc:
    // 0x2230cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2230d0:
    if (ctx->pc == 0x2230D0u) {
        ctx->pc = 0x2230D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2230CCu;
        // 0x2230d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2230D4u;
        goto label_2230d4;
    }
    ctx->pc = 0x2230CCu;
    {
        const bool branch_taken_0x2230cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2230D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2230CCu;
        // 0x2230d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2230cc) {
            ctx->pc = 0x2230DCu;
            goto label_2230dc;
        }
    }
    ctx->pc = 0x2230D4u;
label_2230d4:
    // 0x2230d4: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x2230d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
label_2230d8:
    // 0x2230d8: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x2230d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_2230dc:
    // 0x2230dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2230dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2230e0:
    // 0x2230e0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2230e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2230e4:
    // 0x2230e4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2230e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2230e8:
    // 0x2230e8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2230e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2230ec:
    // 0x2230ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2230ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2230f0:
    // 0x2230f0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2230f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_2230f4:
    // 0x2230f4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2230f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2230f8:
    // 0x2230f8: 0x480000f  bltz        $a0, . + 4 + (0xF << 2)
label_2230fc:
    if (ctx->pc == 0x2230FCu) {
        ctx->pc = 0x2230FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2230F8u;
        // 0x2230fc: 0x8f828390  lw          $v0, -0x7C70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223100u;
        goto label_223100;
    }
    ctx->pc = 0x2230F8u;
    {
        const bool branch_taken_0x2230f8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2230FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2230F8u;
        // 0x2230fc: 0x8f828390  lw          $v0, -0x7C70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2230f8) {
            ctx->pc = 0x223138u;
            goto label_223138;
        }
    }
    ctx->pc = 0x223100u;
label_223100:
    // 0x223100: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_223104:
    if (ctx->pc == 0x223104u) {
        ctx->pc = 0x223104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223100u;
        // 0x223104: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223108u;
        goto label_223108;
    }
    ctx->pc = 0x223100u;
    {
        const bool branch_taken_0x223100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223100u;
        // 0x223104: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223100) {
            ctx->pc = 0x223124u;
            goto label_223124;
        }
    }
    ctx->pc = 0x223108u;
label_223108:
    // 0x223108: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x223108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_22310c:
    // 0x22310c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22310cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_223110:
    // 0x223110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x223110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_223114:
    // 0x223114: 0xc089974  jal         func_2265D0
label_223118:
    if (ctx->pc == 0x223118u) {
        ctx->pc = 0x223118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223114u;
        // 0x223118: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22311Cu;
        goto label_22311c;
    }
    ctx->pc = 0x223114u;
    SET_GPR_U32(ctx, 31, 0x22311Cu);
    ctx->pc = 0x223118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223114u;
    // 0x223118: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2265D0u, 0x223114u, 0x22311Cu)) {
        return;
    }
    ctx->pc = 0x22311Cu;
label_22311c:
    // 0x22311c: 0x10000007  b           . + 4 + (0x7 << 2)
label_223120:
    if (ctx->pc == 0x223120u) {
        ctx->pc = 0x223120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22311Cu;
        // 0x223120: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223124u;
        goto label_223124;
    }
    ctx->pc = 0x22311Cu;
    {
        const bool branch_taken_0x22311c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22311Cu;
        // 0x223120: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22311c) {
            ctx->pc = 0x22313Cu;
            goto label_22313c;
        }
    }
    ctx->pc = 0x223124u;
label_223124:
    // 0x223124: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x223124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_223128:
    // 0x223128: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x223128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22312c:
    // 0x22312c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22312cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_223130:
    // 0x223130: 0xc08995c  jal         func_226570
label_223134:
    if (ctx->pc == 0x223134u) {
        ctx->pc = 0x223134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223130u;
        // 0x223134: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223138u;
        goto label_223138;
    }
    ctx->pc = 0x223130u;
    SET_GPR_U32(ctx, 31, 0x223138u);
    ctx->pc = 0x223134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223130u;
    // 0x223134: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226570u, 0x223130u, 0x223138u)) {
        return;
    }
    ctx->pc = 0x223138u;
label_223138:
    // 0x223138: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x223138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_22313c:
    // 0x22313c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22313cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_223140:
    // 0x223140: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x223140u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223144:
    // 0x223144: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x223144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_223148:
    // 0x223148: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
label_22314c:
    if (ctx->pc == 0x22314Cu) {
        ctx->pc = 0x22314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223148u;
        // 0x22314c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223150u;
        goto label_223150;
    }
    ctx->pc = 0x223148u;
    {
        const bool branch_taken_0x223148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223148u;
        // 0x22314c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223148) {
            ctx->pc = 0x222FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222fd8;
        }
    }
    ctx->pc = 0x223150u;
label_223150:
    // 0x223150: 0x10000013  b           . + 4 + (0x13 << 2)
label_223154:
    if (ctx->pc == 0x223154u) {
        ctx->pc = 0x223154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223150u;
        // 0x223154: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223158u;
        goto label_223158;
    }
    ctx->pc = 0x223150u;
    {
        const bool branch_taken_0x223150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223150u;
        // 0x223154: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223150) {
            ctx->pc = 0x2231A0u;
            goto label_2231a0;
        }
    }
    ctx->pc = 0x223158u;
label_223158:
    // 0x223158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22315c:
    // 0x22315c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x22315cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_223160:
    // 0x223160: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x223160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_223164:
    // 0x223164: 0xc092848  jal         func_24A120
label_223168:
    if (ctx->pc == 0x223168u) {
        ctx->pc = 0x223168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223164u;
        // 0x223168: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22316Cu;
        goto label_22316c;
    }
    ctx->pc = 0x223164u;
    SET_GPR_U32(ctx, 31, 0x22316Cu);
    ctx->pc = 0x223168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223164u;
    // 0x223168: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x223164u, 0x22316Cu)) {
        return;
    }
    ctx->pc = 0x22316Cu;
label_22316c:
    // 0x22316c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22316cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_223170:
    // 0x223170: 0xc09281a  jal         func_24A068
label_223174:
    if (ctx->pc == 0x223174u) {
        ctx->pc = 0x223174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223170u;
        // 0x223174: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223178u;
        goto label_223178;
    }
    ctx->pc = 0x223170u;
    SET_GPR_U32(ctx, 31, 0x223178u);
    ctx->pc = 0x223174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223170u;
    // 0x223174: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x223170u, 0x223178u)) {
        return;
    }
    ctx->pc = 0x223178u;
label_223178:
    // 0x223178: 0x10000025  b           . + 4 + (0x25 << 2)
label_22317c:
    if (ctx->pc == 0x22317Cu) {
        ctx->pc = 0x22317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223178u;
        // 0x22317c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223180u;
        goto label_223180;
    }
    ctx->pc = 0x223178u;
    {
        const bool branch_taken_0x223178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223178u;
        // 0x22317c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223178) {
            ctx->pc = 0x223210u;
            goto label_223210;
        }
    }
    ctx->pc = 0x223180u;
label_223180:
    // 0x223180: 0xc089926  jal         func_226498
label_223184:
    if (ctx->pc == 0x223184u) {
        ctx->pc = 0x223184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223180u;
        // 0x223184: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223188u;
        goto label_223188;
    }
    ctx->pc = 0x223180u;
    SET_GPR_U32(ctx, 31, 0x223188u);
    ctx->pc = 0x223184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223180u;
    // 0x223184: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226498u, 0x223180u, 0x223188u)) {
        return;
    }
    ctx->pc = 0x223188u;
label_223188:
    // 0x223188: 0x26c30fc8  addiu       $v1, $s6, 0xFC8
    ctx->pc = 0x223188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
label_22318c:
    // 0x22318c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x22318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_223190:
    // 0x223190: 0x40f809  jalr        $v0
label_223194:
    if (ctx->pc == 0x223194u) {
        ctx->pc = 0x223194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223190u;
        // 0x223194: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223198u;
        goto label_223198;
    }
    ctx->pc = 0x223190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x223198u);
        ctx->pc = 0x223194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223190u;
        // 0x223194: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223190u, 0x223198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x223198u;
label_223198:
    // 0x223198: 0x1000001d  b           . + 4 + (0x1D << 2)
label_22319c:
    if (ctx->pc == 0x22319Cu) {
        ctx->pc = 0x22319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223198u;
        // 0x22319c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2231A0u;
        goto label_2231a0;
    }
    ctx->pc = 0x223198u;
    {
        const bool branch_taken_0x223198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223198u;
        // 0x22319c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223198) {
            ctx->pc = 0x223210u;
            goto label_223210;
        }
    }
    ctx->pc = 0x2231A0u;
label_2231a0:
    // 0x2231a0: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_2231a4:
    if (ctx->pc == 0x2231A4u) {
        ctx->pc = 0x2231A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231A0u;
        // 0x2231a4: 0x3c15005c  lui         $s5, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2231A8u;
        goto label_2231a8;
    }
    ctx->pc = 0x2231A0u;
    {
        const bool branch_taken_0x2231a0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2231A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231A0u;
        // 0x2231a4: 0x3c15005c  lui         $s5, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231a0) {
            ctx->pc = 0x22320Cu;
            goto label_22320c;
        }
    }
    ctx->pc = 0x2231A8u;
label_2231a8:
    // 0x2231a8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2231a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2231ac:
    // 0x2231ac: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2231acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2231b0:
    // 0x2231b0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2231b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2231b4:
    // 0x2231b4: 0x26a40400  addiu       $a0, $s5, 0x400
    ctx->pc = 0x2231b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1024));
label_2231b8:
    // 0x2231b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2231b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2231bc:
    // 0x2231bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2231bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2231c0:
    // 0x2231c0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2231c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2231c4:
    // 0x2231c4: 0xc093708  jal         func_24DC20
label_2231c8:
    if (ctx->pc == 0x2231C8u) {
        ctx->pc = 0x2231C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231C4u;
        // 0x2231c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2231CCu;
        goto label_2231cc;
    }
    ctx->pc = 0x2231C4u;
    SET_GPR_U32(ctx, 31, 0x2231CCu);
    ctx->pc = 0x2231C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2231C4u;
    // 0x2231c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DC20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DC20u, 0x2231C4u, 0x2231CCu)) {
        return;
    }
    ctx->pc = 0x2231CCu;
label_2231cc:
    // 0x2231cc: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
label_2231d0:
    if (ctx->pc == 0x2231D0u) {
        ctx->pc = 0x2231D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231CCu;
        // 0x2231d0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2231D4u;
        goto label_2231d4;
    }
    ctx->pc = 0x2231CCu;
    {
        const bool branch_taken_0x2231cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2231cc) {
            ctx->pc = 0x2231D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2231CCu;
            // 0x2231d0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223180;
        }
    }
    ctx->pc = 0x2231D4u;
label_2231d4:
    // 0x2231d4: 0xc08995a  jal         func_226568
label_2231d8:
    if (ctx->pc == 0x2231D8u) {
        ctx->pc = 0x2231D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231D4u;
        // 0x2231d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2231DCu;
        goto label_2231dc;
    }
    ctx->pc = 0x2231D4u;
    SET_GPR_U32(ctx, 31, 0x2231DCu);
    ctx->pc = 0x2231D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2231D4u;
    // 0x2231d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226568u, 0x2231D4u, 0x2231DCu)) {
        return;
    }
    ctx->pc = 0x2231DCu;
label_2231dc:
    // 0x2231dc: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_2231e0:
    if (ctx->pc == 0x2231E0u) {
        ctx->pc = 0x2231E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231DCu;
        // 0x2231e0: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2231E4u;
        goto label_2231e4;
    }
    ctx->pc = 0x2231DCu;
    {
        const bool branch_taken_0x2231dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2231E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231DCu;
        // 0x2231e0: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231dc) {
            ctx->pc = 0x2231FCu;
            goto label_2231fc;
        }
    }
    ctx->pc = 0x2231E4u;
label_2231e4:
    // 0x2231e4: 0x8f828390  lw          $v0, -0x7C70($gp)
    ctx->pc = 0x2231e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
label_2231e8:
    // 0x2231e8: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
label_2231ec:
    if (ctx->pc == 0x2231ECu) {
        ctx->pc = 0x2231ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231E8u;
        // 0x2231ec: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2231F0u;
        goto label_2231f0;
    }
    ctx->pc = 0x2231E8u;
    {
        const bool branch_taken_0x2231e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2231ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231E8u;
        // 0x2231ec: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231e8) {
            ctx->pc = 0x2231FCu;
            goto label_2231fc;
        }
    }
    ctx->pc = 0x2231F0u;
label_2231f0:
    // 0x2231f0: 0xc08992e  jal         func_2264B8
label_2231f4:
    if (ctx->pc == 0x2231F4u) {
        ctx->pc = 0x2231F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231F0u;
        // 0x2231f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2231F8u;
        goto label_2231f8;
    }
    ctx->pc = 0x2231F0u;
    SET_GPR_U32(ctx, 31, 0x2231F8u);
    ctx->pc = 0x2231F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2231F0u;
    // 0x2231f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x2231F0u, 0x2231F8u)) {
        return;
    }
    ctx->pc = 0x2231F8u;
label_2231f8:
    // 0x2231f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2231f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2231fc:
    // 0x2231fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2231fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_223200:
    // 0x223200: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x223200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_223204:
    // 0x223204: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
label_223208:
    if (ctx->pc == 0x223208u) {
        ctx->pc = 0x223208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223204u;
        // 0x223208: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22320Cu;
        goto label_22320c;
    }
    ctx->pc = 0x223204u;
    {
        const bool branch_taken_0x223204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223204) {
            ctx->pc = 0x223208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223204u;
            // 0x223208: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2231B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2231b0;
        }
    }
    ctx->pc = 0x22320Cu;
label_22320c:
    // 0x22320c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x22320cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_223210:
    // 0x223210: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x223210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_223214:
    // 0x223214: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x223214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_223218:
    // 0x223218: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x223218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_22321c:
    // 0x22321c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x22321cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_223220:
    // 0x223220: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x223220u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_223224:
    // 0x223224: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x223224u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_223228:
    // 0x223228: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x223228u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_22322c:
    // 0x22322c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22322cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_223230:
    // 0x223230: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x223230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_223234:
    // 0x223234: 0x3e00008  jr          $ra
label_223238:
    if (ctx->pc == 0x223238u) {
        ctx->pc = 0x223238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223234u;
        // 0x223238: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22323Cu;
        goto label_22323c;
    }
    ctx->pc = 0x223234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223234u;
        // 0x223238: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22323Cu;
label_22323c:
    // 0x22323c: 0x0  nop
    ctx->pc = 0x22323cu;
    // NOP
    ctx->pc = 0x223240u;
}
