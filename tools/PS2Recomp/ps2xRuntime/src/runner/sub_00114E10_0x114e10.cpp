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

// Function: sub_00114E10
// Address: 0x114e10 - 0x115010
void sub_00114E10_0x114e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114E10_0x114e10");
#endif

    switch (ctx->pc) {
        case 0x114e10u: goto label_114e10;
        case 0x114e14u: goto label_114e14;
        case 0x114e18u: goto label_114e18;
        case 0x114e1cu: goto label_114e1c;
        case 0x114e20u: goto label_114e20;
        case 0x114e24u: goto label_114e24;
        case 0x114e28u: goto label_114e28;
        case 0x114e2cu: goto label_114e2c;
        case 0x114e30u: goto label_114e30;
        case 0x114e34u: goto label_114e34;
        case 0x114e38u: goto label_114e38;
        case 0x114e3cu: goto label_114e3c;
        case 0x114e40u: goto label_114e40;
        case 0x114e44u: goto label_114e44;
        case 0x114e48u: goto label_114e48;
        case 0x114e4cu: goto label_114e4c;
        case 0x114e50u: goto label_114e50;
        case 0x114e54u: goto label_114e54;
        case 0x114e58u: goto label_114e58;
        case 0x114e5cu: goto label_114e5c;
        case 0x114e60u: goto label_114e60;
        case 0x114e64u: goto label_114e64;
        case 0x114e68u: goto label_114e68;
        case 0x114e6cu: goto label_114e6c;
        case 0x114e70u: goto label_114e70;
        case 0x114e74u: goto label_114e74;
        case 0x114e78u: goto label_114e78;
        case 0x114e7cu: goto label_114e7c;
        case 0x114e80u: goto label_114e80;
        case 0x114e84u: goto label_114e84;
        case 0x114e88u: goto label_114e88;
        case 0x114e8cu: goto label_114e8c;
        case 0x114e90u: goto label_114e90;
        case 0x114e94u: goto label_114e94;
        case 0x114e98u: goto label_114e98;
        case 0x114e9cu: goto label_114e9c;
        case 0x114ea0u: goto label_114ea0;
        case 0x114ea4u: goto label_114ea4;
        case 0x114ea8u: goto label_114ea8;
        case 0x114eacu: goto label_114eac;
        case 0x114eb0u: goto label_114eb0;
        case 0x114eb4u: goto label_114eb4;
        case 0x114eb8u: goto label_114eb8;
        case 0x114ebcu: goto label_114ebc;
        case 0x114ec0u: goto label_114ec0;
        case 0x114ec4u: goto label_114ec4;
        case 0x114ec8u: goto label_114ec8;
        case 0x114eccu: goto label_114ecc;
        case 0x114ed0u: goto label_114ed0;
        case 0x114ed4u: goto label_114ed4;
        case 0x114ed8u: goto label_114ed8;
        case 0x114edcu: goto label_114edc;
        case 0x114ee0u: goto label_114ee0;
        case 0x114ee4u: goto label_114ee4;
        case 0x114ee8u: goto label_114ee8;
        case 0x114eecu: goto label_114eec;
        case 0x114ef0u: goto label_114ef0;
        case 0x114ef4u: goto label_114ef4;
        case 0x114ef8u: goto label_114ef8;
        case 0x114efcu: goto label_114efc;
        case 0x114f00u: goto label_114f00;
        case 0x114f04u: goto label_114f04;
        case 0x114f08u: goto label_114f08;
        case 0x114f0cu: goto label_114f0c;
        case 0x114f10u: goto label_114f10;
        case 0x114f14u: goto label_114f14;
        case 0x114f18u: goto label_114f18;
        case 0x114f1cu: goto label_114f1c;
        case 0x114f20u: goto label_114f20;
        case 0x114f24u: goto label_114f24;
        case 0x114f28u: goto label_114f28;
        case 0x114f2cu: goto label_114f2c;
        case 0x114f30u: goto label_114f30;
        case 0x114f34u: goto label_114f34;
        case 0x114f38u: goto label_114f38;
        case 0x114f3cu: goto label_114f3c;
        case 0x114f40u: goto label_114f40;
        case 0x114f44u: goto label_114f44;
        case 0x114f48u: goto label_114f48;
        case 0x114f4cu: goto label_114f4c;
        case 0x114f50u: goto label_114f50;
        case 0x114f54u: goto label_114f54;
        case 0x114f58u: goto label_114f58;
        case 0x114f5cu: goto label_114f5c;
        case 0x114f60u: goto label_114f60;
        case 0x114f64u: goto label_114f64;
        case 0x114f68u: goto label_114f68;
        case 0x114f6cu: goto label_114f6c;
        case 0x114f70u: goto label_114f70;
        case 0x114f74u: goto label_114f74;
        case 0x114f78u: goto label_114f78;
        case 0x114f7cu: goto label_114f7c;
        case 0x114f80u: goto label_114f80;
        case 0x114f84u: goto label_114f84;
        case 0x114f88u: goto label_114f88;
        case 0x114f8cu: goto label_114f8c;
        case 0x114f90u: goto label_114f90;
        case 0x114f94u: goto label_114f94;
        case 0x114f98u: goto label_114f98;
        case 0x114f9cu: goto label_114f9c;
        case 0x114fa0u: goto label_114fa0;
        case 0x114fa4u: goto label_114fa4;
        case 0x114fa8u: goto label_114fa8;
        case 0x114facu: goto label_114fac;
        case 0x114fb0u: goto label_114fb0;
        case 0x114fb4u: goto label_114fb4;
        case 0x114fb8u: goto label_114fb8;
        case 0x114fbcu: goto label_114fbc;
        case 0x114fc0u: goto label_114fc0;
        case 0x114fc4u: goto label_114fc4;
        case 0x114fc8u: goto label_114fc8;
        case 0x114fccu: goto label_114fcc;
        case 0x114fd0u: goto label_114fd0;
        case 0x114fd4u: goto label_114fd4;
        case 0x114fd8u: goto label_114fd8;
        case 0x114fdcu: goto label_114fdc;
        case 0x114fe0u: goto label_114fe0;
        case 0x114fe4u: goto label_114fe4;
        case 0x114fe8u: goto label_114fe8;
        case 0x114fecu: goto label_114fec;
        case 0x114ff0u: goto label_114ff0;
        case 0x114ff4u: goto label_114ff4;
        case 0x114ff8u: goto label_114ff8;
        case 0x114ffcu: goto label_114ffc;
        case 0x115000u: goto label_115000;
        case 0x115004u: goto label_115004;
        case 0x115008u: goto label_115008;
        case 0x11500cu: goto label_11500c;
        default: break;
    }

    ctx->pc = 0x114e10u;

label_114e10:
    // 0x114e10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x114e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_114e14:
    // 0x114e14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x114e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114e18:
    // 0x114e18: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x114e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_114e1c:
    // 0x114e1c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x114e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_114e20:
    // 0x114e20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_114e24:
    // 0x114e24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x114e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_114e28:
    // 0x114e28: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x114e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_114e2c:
    // 0x114e2c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x114e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_114e30:
    // 0x114e30: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x114e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_114e34:
    // 0x114e34: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x114e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_114e38:
    // 0x114e38: 0x261400a8  addiu       $s4, $s0, 0xA8
    ctx->pc = 0x114e38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
label_114e3c:
    // 0x114e3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x114e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_114e40:
    // 0x114e40: 0xc044624  jal         func_111890
label_114e44:
    if (ctx->pc == 0x114E44u) {
        ctx->pc = 0x114E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E40u;
        // 0x114e44: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E48u;
        goto label_114e48;
    }
    ctx->pc = 0x114E40u;
    SET_GPR_U32(ctx, 31, 0x114E48u);
    ctx->pc = 0x114E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E40u;
    // 0x114e44: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111890u, 0x114E40u, 0x114E48u)) {
        return;
    }
    ctx->pc = 0x114E48u;
label_114e48:
    // 0x114e48: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x114e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_114e4c:
    // 0x114e4c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x114e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_114e50:
    // 0x114e50: 0x2463ad50  addiu       $v1, $v1, -0x52B0
    ctx->pc = 0x114e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946128));
label_114e54:
    // 0x114e54: 0x2442ad30  addiu       $v0, $v0, -0x52D0
    ctx->pc = 0x114e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946096));
label_114e58:
    // 0x114e58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x114e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_114e5c:
    // 0x114e5c: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x114e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_114e60:
    // 0x114e60: 0xc065a5e  jal         func_196978
label_114e64:
    if (ctx->pc == 0x114E64u) {
        ctx->pc = 0x114E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E60u;
        // 0x114e64: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E68u;
        goto label_114e68;
    }
    ctx->pc = 0x114E60u;
    SET_GPR_U32(ctx, 31, 0x114E68u);
    ctx->pc = 0x114E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E60u;
    // 0x114e64: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196978u, 0x114E60u, 0x114E68u)) {
        return;
    }
    ctx->pc = 0x114E68u;
label_114e68:
    // 0x114e68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x114e68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_114e6c:
    // 0x114e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_114e70:
    // 0x114e70: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x114e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
label_114e74:
    // 0x114e74: 0xc04646c  jal         func_1191B0
label_114e78:
    if (ctx->pc == 0x114E78u) {
        ctx->pc = 0x114E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E74u;
        // 0x114e78: 0xae000208  sw          $zero, 0x208($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E7Cu;
        goto label_114e7c;
    }
    ctx->pc = 0x114E74u;
    SET_GPR_U32(ctx, 31, 0x114E7Cu);
    ctx->pc = 0x114E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E74u;
    // 0x114e78: 0xae000208  sw          $zero, 0x208($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1191B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1191B0u, 0x114E74u, 0x114E7Cu)) {
        return;
    }
    ctx->pc = 0x114E7Cu;
label_114e7c:
    // 0x114e7c: 0xae15020c  sw          $s5, 0x20C($s0)
    ctx->pc = 0x114e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 21));
label_114e80:
    // 0x114e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114e84:
    // 0x114e84: 0xc07f8aa  jal         func_1FE2A8
label_114e88:
    if (ctx->pc == 0x114E88u) {
        ctx->pc = 0x114E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E84u;
        // 0x114e88: 0xae0002b4  sw          $zero, 0x2B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E8Cu;
        goto label_114e8c;
    }
    ctx->pc = 0x114E84u;
    SET_GPR_U32(ctx, 31, 0x114E8Cu);
    ctx->pc = 0x114E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E84u;
    // 0x114e88: 0xae0002b4  sw          $zero, 0x2B4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE2A8u, 0x114E84u, 0x114E8Cu)) {
        return;
    }
    ctx->pc = 0x114E8Cu;
label_114e8c:
    // 0x114e8c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_114e90:
    if (ctx->pc == 0x114E90u) {
        ctx->pc = 0x114E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E8Cu;
        // 0x114e90: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E94u;
        goto label_114e94;
    }
    ctx->pc = 0x114E8Cu;
    {
        const bool branch_taken_0x114e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E8Cu;
        // 0x114e90: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e8c) {
            ctx->pc = 0x114F14u;
            goto label_114f14;
        }
    }
    ctx->pc = 0x114E94u;
label_114e94:
    // 0x114e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114e98:
    // 0x114e98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114e9c:
    // 0x114e9c: 0xc08063c  jal         func_2018F0
label_114ea0:
    if (ctx->pc == 0x114EA0u) {
        ctx->pc = 0x114EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E9Cu;
        // 0x114ea0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114EA4u;
        goto label_114ea4;
    }
    ctx->pc = 0x114E9Cu;
    SET_GPR_U32(ctx, 31, 0x114EA4u);
    ctx->pc = 0x114EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E9Cu;
    // 0x114ea0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x114E9Cu, 0x114EA4u)) {
        return;
    }
    ctx->pc = 0x114EA4u;
label_114ea4:
    // 0x114ea4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x114ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114ea8:
    // 0x114ea8: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
label_114eac:
    if (ctx->pc == 0x114EACu) {
        ctx->pc = 0x114EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EA8u;
        // 0x114eac: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114EB0u;
        goto label_114eb0;
    }
    ctx->pc = 0x114EA8u;
    {
        const bool branch_taken_0x114ea8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x114EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EA8u;
        // 0x114eac: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ea8) {
            ctx->pc = 0x114F14u;
            goto label_114f14;
        }
    }
    ctx->pc = 0x114EB0u;
label_114eb0:
    // 0x114eb0: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x114eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_114eb4:
    // 0x114eb4: 0x2453108c  addiu       $s3, $v0, 0x108C
    ctx->pc = 0x114eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_114eb8:
    // 0x114eb8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x114eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_114ebc:
    // 0x114ebc: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x114ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_114ec0:
    // 0x114ec0: 0x40f809  jalr        $v0
label_114ec4:
    if (ctx->pc == 0x114EC4u) {
        ctx->pc = 0x114EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EC0u;
        // 0x114ec4: 0x2484ac60  addiu       $a0, $a0, -0x53A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114EC8u;
        goto label_114ec8;
    }
    ctx->pc = 0x114EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x114EC8u);
        ctx->pc = 0x114EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EC0u;
        // 0x114ec4: 0x2484ac60  addiu       $a0, $a0, -0x53A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945888));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114EC0u, 0x114EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114EC8u;
label_114ec8:
    // 0x114ec8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_114ecc:
    if (ctx->pc == 0x114ECCu) {
        ctx->pc = 0x114ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EC8u;
        // 0x114ecc: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114ED0u;
        goto label_114ed0;
    }
    ctx->pc = 0x114EC8u;
    {
        const bool branch_taken_0x114ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114ec8) {
            ctx->pc = 0x114ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114EC8u;
            // 0x114ecc: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114EECu;
            goto label_114eec;
        }
    }
    ctx->pc = 0x114ED0u;
label_114ed0:
    // 0x114ed0: 0xae1501e4  sw          $s5, 0x1E4($s0)
    ctx->pc = 0x114ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 21));
label_114ed4:
    // 0x114ed4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x114ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_114ed8:
    // 0x114ed8: 0xc065a7a  jal         func_1969E8
label_114edc:
    if (ctx->pc == 0x114EDCu) {
        ctx->pc = 0x114EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114ED8u;
        // 0x114edc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114EE0u;
        goto label_114ee0;
    }
    ctx->pc = 0x114ED8u;
    SET_GPR_U32(ctx, 31, 0x114EE0u);
    ctx->pc = 0x114EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114ED8u;
    // 0x114edc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1969E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1969E8u, 0x114ED8u, 0x114EE0u)) {
        return;
    }
    ctx->pc = 0x114EE0u;
label_114ee0:
    // 0x114ee0: 0xc045404  jal         func_115010
label_114ee4:
    if (ctx->pc == 0x114EE4u) {
        ctx->pc = 0x114EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EE0u;
        // 0x114ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114EE8u;
        goto label_114ee8;
    }
    ctx->pc = 0x114EE0u;
    SET_GPR_U32(ctx, 31, 0x114EE8u);
    ctx->pc = 0x114EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114EE0u;
    // 0x114ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x115010u, 0x114EE0u, 0x114EE8u)) {
        return;
    }
    ctx->pc = 0x114EE8u;
label_114ee8:
    // 0x114ee8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x114ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_114eec:
    // 0x114eec: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x114eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_114ef0:
    // 0x114ef0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x114ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_114ef4:
    // 0x114ef4: 0x40f809  jalr        $v0
label_114ef8:
    if (ctx->pc == 0x114EF8u) {
        ctx->pc = 0x114EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EF4u;
        // 0x114ef8: 0x2484ac70  addiu       $a0, $a0, -0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114EFCu;
        goto label_114efc;
    }
    ctx->pc = 0x114EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x114EFCu);
        ctx->pc = 0x114EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EF4u;
        // 0x114ef8: 0x2484ac70  addiu       $a0, $a0, -0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945904));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114EF4u, 0x114EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114EFCu;
label_114efc:
    // 0x114efc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_114f00:
    if (ctx->pc == 0x114F00u) {
        ctx->pc = 0x114F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EFCu;
        // 0x114f00: 0x8e0201e4  lw          $v0, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F04u;
        goto label_114f04;
    }
    ctx->pc = 0x114EFCu;
    {
        const bool branch_taken_0x114efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114efc) {
            ctx->pc = 0x114F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114EFCu;
            // 0x114f00: 0x8e0201e4  lw          $v0, 0x1E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114F18u;
            goto label_114f18;
        }
    }
    ctx->pc = 0x114F04u;
label_114f04:
    // 0x114f04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x114f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_114f08:
    // 0x114f08: 0xae0201e4  sw          $v0, 0x1E4($s0)
    ctx->pc = 0x114f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 2));
label_114f0c:
    // 0x114f0c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x114f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_114f10:
    // 0x114f10: 0xae03022c  sw          $v1, 0x22C($s0)
    ctx->pc = 0x114f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 3));
label_114f14:
    // 0x114f14: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x114f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_114f18:
    // 0x114f18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_114f1c:
    if (ctx->pc == 0x114F1Cu) {
        ctx->pc = 0x114F20u;
        goto label_114f20;
    }
    ctx->pc = 0x114F18u;
    {
        const bool branch_taken_0x114f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114f18) {
            ctx->pc = 0x114F28u;
            goto label_114f28;
        }
    }
    ctx->pc = 0x114F20u;
label_114f20:
    // 0x114f20: 0xc046492  jal         func_119248
label_114f24:
    if (ctx->pc == 0x114F24u) {
        ctx->pc = 0x114F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F20u;
        // 0x114f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F28u;
        goto label_114f28;
    }
    ctx->pc = 0x114F20u;
    SET_GPR_U32(ctx, 31, 0x114F28u);
    ctx->pc = 0x114F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F20u;
    // 0x114f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x119248u, 0x114F20u, 0x114F28u)) {
        return;
    }
    ctx->pc = 0x114F28u;
label_114f28:
    // 0x114f28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_114f2c:
    // 0x114f2c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x114f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_114f30:
    // 0x114f30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x114f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114f34:
    // 0x114f34: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x114f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_114f38:
    // 0x114f38: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x114f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_114f3c:
    // 0x114f3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x114f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_114f40:
    // 0x114f40: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x114f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_114f44:
    // 0x114f44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_114f48:
    // 0x114f48: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x114f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_114f4c:
    // 0x114f4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x114f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_114f50:
    // 0x114f50: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x114f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_114f54:
    // 0x114f54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_114f58:
    // 0x114f58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x114f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_114f5c:
    // 0x114f5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x114f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_114f60:
    // 0x114f60: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x114f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_114f64:
    // 0x114f64: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x114f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_114f68:
    // 0x114f68: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x114f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_114f6c:
    // 0x114f6c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x114f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_114f70:
    // 0x114f70: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x114f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_114f74:
    // 0x114f74: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x114f74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_114f78:
    // 0x114f78: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x114f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_114f7c:
    // 0x114f7c: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x114f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
label_114f80:
    // 0x114f80: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x114f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_114f84:
    // 0x114f84: 0xe60001d0  swc1        $f0, 0x1D0($s0)
    ctx->pc = 0x114f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 464), bits); }
label_114f88:
    // 0x114f88: 0xe60101d4  swc1        $f1, 0x1D4($s0)
    ctx->pc = 0x114f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 468), bits); }
label_114f8c:
    // 0x114f8c: 0xe60201d8  swc1        $f2, 0x1D8($s0)
    ctx->pc = 0x114f8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 472), bits); }
label_114f90:
    // 0x114f90: 0xe608009c  swc1        $f8, 0x9C($s0)
    ctx->pc = 0x114f90u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_114f94:
    // 0x114f94: 0xe60300a4  swc1        $f3, 0xA4($s0)
    ctx->pc = 0x114f94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
label_114f98:
    // 0x114f98: 0xe6040290  swc1        $f4, 0x290($s0)
    ctx->pc = 0x114f98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
label_114f9c:
    // 0x114f9c: 0xe605029c  swc1        $f5, 0x29C($s0)
    ctx->pc = 0x114f9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 668), bits); }
label_114fa0:
    // 0x114fa0: 0xe60902ac  swc1        $f9, 0x2AC($s0)
    ctx->pc = 0x114fa0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 684), bits); }
label_114fa4:
    // 0x114fa4: 0xe60602a8  swc1        $f6, 0x2A8($s0)
    ctx->pc = 0x114fa4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
label_114fa8:
    // 0x114fa8: 0xae0302b0  sw          $v1, 0x2B0($s0)
    ctx->pc = 0x114fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 3));
label_114fac:
    // 0x114fac: 0xe60702bc  swc1        $f7, 0x2BC($s0)
    ctx->pc = 0x114facu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 700), bits); }
label_114fb0:
    // 0x114fb0: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x114fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_114fb4:
    // 0x114fb4: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x114fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_114fb8:
    // 0x114fb8: 0xe6080100  swc1        $f8, 0x100($s0)
    ctx->pc = 0x114fb8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_114fbc:
    // 0x114fbc: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x114fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
label_114fc0:
    // 0x114fc0: 0xae0001dc  sw          $zero, 0x1DC($s0)
    ctx->pc = 0x114fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 0));
label_114fc4:
    // 0x114fc4: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x114fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
label_114fc8:
    // 0x114fc8: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x114fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_114fcc:
    // 0x114fcc: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x114fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
label_114fd0:
    // 0x114fd0: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x114fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_114fd4:
    // 0x114fd4: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x114fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
label_114fd8:
    // 0x114fd8: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x114fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
label_114fdc:
    // 0x114fdc: 0xe60902a0  swc1        $f9, 0x2A0($s0)
    ctx->pc = 0x114fdcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
label_114fe0:
    // 0x114fe0: 0xae0302a4  sw          $v1, 0x2A4($s0)
    ctx->pc = 0x114fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 3));
label_114fe4:
    // 0x114fe4: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x114fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
label_114fe8:
    // 0x114fe8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x114fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_114fec:
    // 0x114fec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x114fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_114ff0:
    // 0x114ff0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x114ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_114ff4:
    // 0x114ff4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x114ff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_114ff8:
    // 0x114ff8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x114ff8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_114ffc:
    // 0x114ffc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x114ffcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_115000:
    // 0x115000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_115004:
    // 0x115004: 0x3e00008  jr          $ra
label_115008:
    if (ctx->pc == 0x115008u) {
        ctx->pc = 0x115008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115004u;
        // 0x115008: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11500Cu;
        goto label_11500c;
    }
    ctx->pc = 0x115004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115004u;
        // 0x115008: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11500Cu;
label_11500c:
    // 0x11500c: 0x0  nop
    ctx->pc = 0x11500cu;
    // NOP
    ctx->pc = 0x115010u;
}
