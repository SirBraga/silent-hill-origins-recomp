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

// Function: sub_00279DF8
// Address: 0x279df8 - 0x27a030
void sub_00279DF8_0x279df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279DF8_0x279df8");
#endif

    switch (ctx->pc) {
        case 0x279df8u: goto label_279df8;
        case 0x279dfcu: goto label_279dfc;
        case 0x279e00u: goto label_279e00;
        case 0x279e04u: goto label_279e04;
        case 0x279e08u: goto label_279e08;
        case 0x279e0cu: goto label_279e0c;
        case 0x279e10u: goto label_279e10;
        case 0x279e14u: goto label_279e14;
        case 0x279e18u: goto label_279e18;
        case 0x279e1cu: goto label_279e1c;
        case 0x279e20u: goto label_279e20;
        case 0x279e24u: goto label_279e24;
        case 0x279e28u: goto label_279e28;
        case 0x279e2cu: goto label_279e2c;
        case 0x279e30u: goto label_279e30;
        case 0x279e34u: goto label_279e34;
        case 0x279e38u: goto label_279e38;
        case 0x279e3cu: goto label_279e3c;
        case 0x279e40u: goto label_279e40;
        case 0x279e44u: goto label_279e44;
        case 0x279e48u: goto label_279e48;
        case 0x279e4cu: goto label_279e4c;
        case 0x279e50u: goto label_279e50;
        case 0x279e54u: goto label_279e54;
        case 0x279e58u: goto label_279e58;
        case 0x279e5cu: goto label_279e5c;
        case 0x279e60u: goto label_279e60;
        case 0x279e64u: goto label_279e64;
        case 0x279e68u: goto label_279e68;
        case 0x279e6cu: goto label_279e6c;
        case 0x279e70u: goto label_279e70;
        case 0x279e74u: goto label_279e74;
        case 0x279e78u: goto label_279e78;
        case 0x279e7cu: goto label_279e7c;
        case 0x279e80u: goto label_279e80;
        case 0x279e84u: goto label_279e84;
        case 0x279e88u: goto label_279e88;
        case 0x279e8cu: goto label_279e8c;
        case 0x279e90u: goto label_279e90;
        case 0x279e94u: goto label_279e94;
        case 0x279e98u: goto label_279e98;
        case 0x279e9cu: goto label_279e9c;
        case 0x279ea0u: goto label_279ea0;
        case 0x279ea4u: goto label_279ea4;
        case 0x279ea8u: goto label_279ea8;
        case 0x279eacu: goto label_279eac;
        case 0x279eb0u: goto label_279eb0;
        case 0x279eb4u: goto label_279eb4;
        case 0x279eb8u: goto label_279eb8;
        case 0x279ebcu: goto label_279ebc;
        case 0x279ec0u: goto label_279ec0;
        case 0x279ec4u: goto label_279ec4;
        case 0x279ec8u: goto label_279ec8;
        case 0x279eccu: goto label_279ecc;
        case 0x279ed0u: goto label_279ed0;
        case 0x279ed4u: goto label_279ed4;
        case 0x279ed8u: goto label_279ed8;
        case 0x279edcu: goto label_279edc;
        case 0x279ee0u: goto label_279ee0;
        case 0x279ee4u: goto label_279ee4;
        case 0x279ee8u: goto label_279ee8;
        case 0x279eecu: goto label_279eec;
        case 0x279ef0u: goto label_279ef0;
        case 0x279ef4u: goto label_279ef4;
        case 0x279ef8u: goto label_279ef8;
        case 0x279efcu: goto label_279efc;
        case 0x279f00u: goto label_279f00;
        case 0x279f04u: goto label_279f04;
        case 0x279f08u: goto label_279f08;
        case 0x279f0cu: goto label_279f0c;
        case 0x279f10u: goto label_279f10;
        case 0x279f14u: goto label_279f14;
        case 0x279f18u: goto label_279f18;
        case 0x279f1cu: goto label_279f1c;
        case 0x279f20u: goto label_279f20;
        case 0x279f24u: goto label_279f24;
        case 0x279f28u: goto label_279f28;
        case 0x279f2cu: goto label_279f2c;
        case 0x279f30u: goto label_279f30;
        case 0x279f34u: goto label_279f34;
        case 0x279f38u: goto label_279f38;
        case 0x279f3cu: goto label_279f3c;
        case 0x279f40u: goto label_279f40;
        case 0x279f44u: goto label_279f44;
        case 0x279f48u: goto label_279f48;
        case 0x279f4cu: goto label_279f4c;
        case 0x279f50u: goto label_279f50;
        case 0x279f54u: goto label_279f54;
        case 0x279f58u: goto label_279f58;
        case 0x279f5cu: goto label_279f5c;
        case 0x279f60u: goto label_279f60;
        case 0x279f64u: goto label_279f64;
        case 0x279f68u: goto label_279f68;
        case 0x279f6cu: goto label_279f6c;
        case 0x279f70u: goto label_279f70;
        case 0x279f74u: goto label_279f74;
        case 0x279f78u: goto label_279f78;
        case 0x279f7cu: goto label_279f7c;
        case 0x279f80u: goto label_279f80;
        case 0x279f84u: goto label_279f84;
        case 0x279f88u: goto label_279f88;
        case 0x279f8cu: goto label_279f8c;
        case 0x279f90u: goto label_279f90;
        case 0x279f94u: goto label_279f94;
        case 0x279f98u: goto label_279f98;
        case 0x279f9cu: goto label_279f9c;
        case 0x279fa0u: goto label_279fa0;
        case 0x279fa4u: goto label_279fa4;
        case 0x279fa8u: goto label_279fa8;
        case 0x279facu: goto label_279fac;
        case 0x279fb0u: goto label_279fb0;
        case 0x279fb4u: goto label_279fb4;
        case 0x279fb8u: goto label_279fb8;
        case 0x279fbcu: goto label_279fbc;
        case 0x279fc0u: goto label_279fc0;
        case 0x279fc4u: goto label_279fc4;
        case 0x279fc8u: goto label_279fc8;
        case 0x279fccu: goto label_279fcc;
        case 0x279fd0u: goto label_279fd0;
        case 0x279fd4u: goto label_279fd4;
        case 0x279fd8u: goto label_279fd8;
        case 0x279fdcu: goto label_279fdc;
        case 0x279fe0u: goto label_279fe0;
        case 0x279fe4u: goto label_279fe4;
        case 0x279fe8u: goto label_279fe8;
        case 0x279fecu: goto label_279fec;
        case 0x279ff0u: goto label_279ff0;
        case 0x279ff4u: goto label_279ff4;
        case 0x279ff8u: goto label_279ff8;
        case 0x279ffcu: goto label_279ffc;
        case 0x27a000u: goto label_27a000;
        case 0x27a004u: goto label_27a004;
        case 0x27a008u: goto label_27a008;
        case 0x27a00cu: goto label_27a00c;
        case 0x27a010u: goto label_27a010;
        case 0x27a014u: goto label_27a014;
        case 0x27a018u: goto label_27a018;
        case 0x27a01cu: goto label_27a01c;
        case 0x27a020u: goto label_27a020;
        case 0x27a024u: goto label_27a024;
        case 0x27a028u: goto label_27a028;
        case 0x27a02cu: goto label_27a02c;
        default: break;
    }

    ctx->pc = 0x279df8u;

label_279df8:
    // 0x279df8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x279df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_279dfc:
    // 0x279dfc: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x279dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_279e00:
    // 0x279e00: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x279e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_279e04:
    // 0x279e04: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x279e04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279e08:
    // 0x279e08: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x279e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_279e0c:
    // 0x279e0c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x279e0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_279e10:
    // 0x279e10: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x279e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_279e14:
    // 0x279e14: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x279e14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_279e18:
    // 0x279e18: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x279e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_279e1c:
    // 0x279e1c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x279e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_279e20:
    // 0x279e20: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x279e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_279e24:
    // 0x279e24: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x279e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_279e28:
    // 0x279e28: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x279e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_279e2c:
    // 0x279e2c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x279e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_279e30:
    // 0x279e30: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x279e30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_279e34:
    // 0x279e34: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x279e34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_279e38:
    // 0x279e38: 0x8ec4002c  lw          $a0, 0x2C($s6)
    ctx->pc = 0x279e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
label_279e3c:
    // 0x279e3c: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x279e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_279e40:
    // 0x279e40: 0x8ec3005c  lw          $v1, 0x5C($s6)
    ctx->pc = 0x279e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 92)));
label_279e44:
    // 0x279e44: 0xafa70054  sw          $a3, 0x54($sp)
    ctx->pc = 0x279e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 7));
label_279e48:
    // 0x279e48: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x279e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_279e4c:
    // 0x279e4c: 0x18400069  blez        $v0, . + 4 + (0x69 << 2)
label_279e50:
    if (ctx->pc == 0x279E50u) {
        ctx->pc = 0x279E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E4Cu;
        // 0x279e50: 0x8c750014  lw          $s5, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279E54u;
        goto label_279e54;
    }
    ctx->pc = 0x279E4Cu;
    {
        const bool branch_taken_0x279e4c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x279E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E4Cu;
        // 0x279e50: 0x8c750014  lw          $s5, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e4c) {
            ctx->pc = 0x279FF4u;
            goto label_279ff4;
        }
    }
    ctx->pc = 0x279E54u;
label_279e54:
    // 0x279e54: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x279e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_279e58:
    // 0x279e58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x279e58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_279e5c:
    // 0x279e5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x279e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_279e60:
    // 0x279e60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x279e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_279e64:
    // 0x279e64: 0x241e000c  addiu       $fp, $zero, 0xC
    ctx->pc = 0x279e64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_279e68:
    // 0x279e68: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x279e68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_279e6c:
    // 0x279e6c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x279e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_279e70:
    // 0x279e70: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x279e70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_279e74:
    // 0x279e74: 0x5e3018  mult        $a2, $v0, $fp
    ctx->pc = 0x279e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_279e78:
    // 0x279e78: 0x96650004  lhu         $a1, 0x4($s3)
    ctx->pc = 0x279e78u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_279e7c:
    // 0x279e7c: 0x7e1018  mult        $v0, $v1, $fp
    ctx->pc = 0x279e7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_279e80:
    // 0x279e80: 0xd58021  addu        $s0, $a2, $s5
    ctx->pc = 0x279e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_279e84:
    // 0x279e84: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x279e84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_279e88:
    // 0x279e88: 0xbe1018  mult        $v0, $a1, $fp
    ctx->pc = 0x279e88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_279e8c:
    // 0x279e8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x279e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_279e90:
    // 0x279e90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x279e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279e94:
    // 0x279e94: 0x559021  addu        $s2, $v0, $s5
    ctx->pc = 0x279e94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_279e98:
    // 0x279e98: 0xc0a45ea  jal         func_2917A8
label_279e9c:
    if (ctx->pc == 0x279E9Cu) {
        ctx->pc = 0x279E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E98u;
        // 0x279e9c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279EA0u;
        goto label_279ea0;
    }
    ctx->pc = 0x279E98u;
    SET_GPR_U32(ctx, 31, 0x279EA0u);
    ctx->pc = 0x279E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279E98u;
    // 0x279e9c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2917A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2917A8u, 0x279E98u, 0x279EA0u)) {
        return;
    }
    ctx->pc = 0x279EA0u;
label_279ea0:
    // 0x279ea0: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
label_279ea4:
    if (ctx->pc == 0x279EA4u) {
        ctx->pc = 0x279EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279EA0u;
        // 0x279ea4: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279EA8u;
        goto label_279ea8;
    }
    ctx->pc = 0x279EA0u;
    {
        const bool branch_taken_0x279ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279ea0) {
            ctx->pc = 0x279EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279EA0u;
            // 0x279ea4: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279FE4u;
            goto label_279fe4;
        }
    }
    ctx->pc = 0x279EA8u;
label_279ea8:
    // 0x279ea8: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x279ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_279eac:
    // 0x279eac: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x279eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_279eb0:
    // 0x279eb0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x279eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_279eb4:
    // 0x279eb4: 0xb3a30013  sdl         $v1, 0x13($sp)
    ctx->pc = 0x279eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_279eb8:
    // 0x279eb8: 0xb7a3000c  sdr         $v1, 0xC($sp)
    ctx->pc = 0x279eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_279ebc:
    // 0x279ebc: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x279ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
label_279ec0:
    // 0x279ec0: 0xafb40018  sw          $s4, 0x18($sp)
    ctx->pc = 0x279ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 20));
label_279ec4:
    // 0x279ec4: 0xafb0001c  sw          $s0, 0x1C($sp)
    ctx->pc = 0x279ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 16));
label_279ec8:
    // 0x279ec8: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x279ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
label_279ecc:
    // 0x279ecc: 0xafb20024  sw          $s2, 0x24($sp)
    ctx->pc = 0x279eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
label_279ed0:
    // 0x279ed0: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x279ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_279ed4:
    // 0x279ed4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x279ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279ed8:
    // 0x279ed8: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x279ed8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_279edc:
    // 0x279edc: 0xe7a70030  swc1        $f7, 0x30($sp)
    ctx->pc = 0x279edcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_279ee0:
    // 0x279ee0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x279ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279ee4:
    // 0x279ee4: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x279ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_279ee8:
    // 0x279ee8: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x279ee8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_279eec:
    // 0x279eec: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x279eecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_279ef0:
    // 0x279ef0: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x279ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_279ef4:
    // 0x279ef4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x279ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279ef8:
    // 0x279ef8: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x279ef8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_279efc:
    // 0x279efc: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x279efcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_279f00:
    // 0x279f00: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x279f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_279f04:
    // 0x279f04: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x279f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279f08:
    // 0x279f08: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x279f08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_279f0c:
    // 0x279f0c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x279f0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_279f10:
    // 0x279f10: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x279f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279f14:
    // 0x279f14: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x279f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_279f18:
    // 0x279f18: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x279f18u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_279f1c:
    // 0x279f1c: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x279f1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_279f20:
    // 0x279f20: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x279f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279f24:
    // 0x279f24: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x279f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279f28:
    // 0x279f28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x279f28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_279f2c:
    // 0x279f2c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x279f2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_279f30:
    // 0x279f30: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x279f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_279f34:
    // 0x279f34: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x279f34u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_279f38:
    // 0x279f38: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x279f38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_279f3c:
    // 0x279f3c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x279f3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_279f40:
    // 0x279f40: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x279f40u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_279f44:
    // 0x279f44: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x279f44u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_279f48:
    // 0x279f48: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x279f48u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_279f4c:
    // 0x279f4c: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x279f4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_279f50:
    // 0x279f50: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x279f50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_279f54:
    // 0x279f54: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x279f54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_279f58:
    // 0x279f58: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x279f58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_279f5c:
    // 0x279f5c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x279f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_279f60:
    // 0x279f60: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x279f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_279f64:
    // 0x279f64: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x279f64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_279f68:
    // 0x279f68: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x279f68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_279f6c:
    // 0x279f6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x279f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_279f70:
    // 0x279f70: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x279f70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_279f74:
    // 0x279f74: 0x46000004  c1          0x4
    ctx->pc = 0x279f74u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_279f78:
    // 0x279f78: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x279f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279f7c:
    // 0x279f7c: 0x0  nop
    ctx->pc = 0x279f7cu;
    // NOP
label_279f80:
    // 0x279f80: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_279f84:
    if (ctx->pc == 0x279F84u) {
        ctx->pc = 0x279F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F80u;
        // 0x279f84: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279F88u;
        goto label_279f88;
    }
    ctx->pc = 0x279F80u;
    {
        const bool branch_taken_0x279f80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F80u;
        // 0x279f84: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f80) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279F88u;
label_279f88:
    // 0x279f88: 0x4600a1c3  div.s       $f7, $f20, $f0
    ctx->pc = 0x279f88u;
    ctx->f[7] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
label_279f8c:
    // 0x279f8c: 0x10000004  b           . + 4 + (0x4 << 2)
label_279f90:
    if (ctx->pc == 0x279F90u) {
        ctx->pc = 0x279F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F8Cu;
        // 0x279f90: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x279F94u;
        goto label_279f94;
    }
    ctx->pc = 0x279F8Cu;
    {
        const bool branch_taken_0x279f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F8Cu;
        // 0x279f90: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f8c) {
            ctx->pc = 0x279FA0u;
            goto label_279fa0;
        }
    }
    ctx->pc = 0x279F94u;
label_279f94:
    // 0x279f94: 0x0  nop
    ctx->pc = 0x279f94u;
    // NOP
label_279f98:
    // 0x279f98: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x279f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279f9c:
    // 0x279f9c: 0x0  nop
    ctx->pc = 0x279f9cu;
    // NOP
label_279fa0:
    // 0x279fa0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x279fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279fa4:
    // 0x279fa4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x279fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_279fa8:
    // 0x279fa8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x279fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_279fac:
    // 0x279fac: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x279facu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_279fb0:
    // 0x279fb0: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x279fb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_279fb4:
    // 0x279fb4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x279fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_279fb8:
    // 0x279fb8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x279fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_279fbc:
    // 0x279fbc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x279fbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_279fc0:
    // 0x279fc0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x279fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_279fc4:
    // 0x279fc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x279fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_279fc8:
    // 0x279fc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x279fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_279fcc:
    // 0x279fcc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x279fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_279fd0:
    // 0x279fd0: 0x60f809  jalr        $v1
label_279fd4:
    if (ctx->pc == 0x279FD4u) {
        ctx->pc = 0x279FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FD0u;
        // 0x279fd4: 0x8fa60054  lw          $a2, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279FD8u;
        goto label_279fd8;
    }
    ctx->pc = 0x279FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x279FD8u);
        ctx->pc = 0x279FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FD0u;
        // 0x279fd4: 0x8fa60054  lw          $a2, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279FD0u, 0x279FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279FD8u;
label_279fd8:
    // 0x279fd8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_279fdc:
    if (ctx->pc == 0x279FDCu) {
        ctx->pc = 0x279FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FD8u;
        // 0x279fdc: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279FE0u;
        goto label_279fe0;
    }
    ctx->pc = 0x279FD8u;
    {
        const bool branch_taken_0x279fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FD8u;
        // 0x279fdc: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fd8) {
            ctx->pc = 0x279FF8u;
            goto label_279ff8;
        }
    }
    ctx->pc = 0x279FE0u;
label_279fe0:
    // 0x279fe0: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x279fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_279fe4:
    // 0x279fe4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x279fe4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_279fe8:
    // 0x279fe8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x279fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_279fec:
    // 0x279fec: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
label_279ff0:
    if (ctx->pc == 0x279FF0u) {
        ctx->pc = 0x279FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FECu;
        // 0x279ff0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279FF4u;
        goto label_279ff4;
    }
    ctx->pc = 0x279FECu;
    {
        const bool branch_taken_0x279fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FECu;
        // 0x279ff0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fec) {
            ctx->pc = 0x279E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279e68;
        }
    }
    ctx->pc = 0x279FF4u;
label_279ff4:
    // 0x279ff4: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x279ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_279ff8:
    // 0x279ff8: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x279ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_279ffc:
    // 0x279ffc: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x279ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_27a000:
    // 0x27a000: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x27a000u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_27a004:
    // 0x27a004: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x27a004u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_27a008:
    // 0x27a008: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x27a008u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_27a00c:
    // 0x27a00c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x27a00cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27a010:
    // 0x27a010: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27a010u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27a014:
    // 0x27a014: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x27a014u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27a018:
    // 0x27a018: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x27a018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_27a01c:
    // 0x27a01c: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x27a01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_27a020:
    // 0x27a020: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x27a020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27a024:
    // 0x27a024: 0x3e00008  jr          $ra
label_27a028:
    if (ctx->pc == 0x27A028u) {
        ctx->pc = 0x27A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A024u;
        // 0x27a028: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A02Cu;
        goto label_27a02c;
    }
    ctx->pc = 0x27A024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A024u;
        // 0x27a028: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A02Cu;
label_27a02c:
    // 0x27a02c: 0x0  nop
    ctx->pc = 0x27a02cu;
    // NOP
    ctx->pc = 0x27a030u;
}
