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

// Function: sub_00218E00
// Address: 0x218e00 - 0x219028
void sub_00218E00_0x218e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218E00_0x218e00");
#endif

    switch (ctx->pc) {
        case 0x218e00u: goto label_218e00;
        case 0x218e04u: goto label_218e04;
        case 0x218e08u: goto label_218e08;
        case 0x218e0cu: goto label_218e0c;
        case 0x218e10u: goto label_218e10;
        case 0x218e14u: goto label_218e14;
        case 0x218e18u: goto label_218e18;
        case 0x218e1cu: goto label_218e1c;
        case 0x218e20u: goto label_218e20;
        case 0x218e24u: goto label_218e24;
        case 0x218e28u: goto label_218e28;
        case 0x218e2cu: goto label_218e2c;
        case 0x218e30u: goto label_218e30;
        case 0x218e34u: goto label_218e34;
        case 0x218e38u: goto label_218e38;
        case 0x218e3cu: goto label_218e3c;
        case 0x218e40u: goto label_218e40;
        case 0x218e44u: goto label_218e44;
        case 0x218e48u: goto label_218e48;
        case 0x218e4cu: goto label_218e4c;
        case 0x218e50u: goto label_218e50;
        case 0x218e54u: goto label_218e54;
        case 0x218e58u: goto label_218e58;
        case 0x218e5cu: goto label_218e5c;
        case 0x218e60u: goto label_218e60;
        case 0x218e64u: goto label_218e64;
        case 0x218e68u: goto label_218e68;
        case 0x218e6cu: goto label_218e6c;
        case 0x218e70u: goto label_218e70;
        case 0x218e74u: goto label_218e74;
        case 0x218e78u: goto label_218e78;
        case 0x218e7cu: goto label_218e7c;
        case 0x218e80u: goto label_218e80;
        case 0x218e84u: goto label_218e84;
        case 0x218e88u: goto label_218e88;
        case 0x218e8cu: goto label_218e8c;
        case 0x218e90u: goto label_218e90;
        case 0x218e94u: goto label_218e94;
        case 0x218e98u: goto label_218e98;
        case 0x218e9cu: goto label_218e9c;
        case 0x218ea0u: goto label_218ea0;
        case 0x218ea4u: goto label_218ea4;
        case 0x218ea8u: goto label_218ea8;
        case 0x218eacu: goto label_218eac;
        case 0x218eb0u: goto label_218eb0;
        case 0x218eb4u: goto label_218eb4;
        case 0x218eb8u: goto label_218eb8;
        case 0x218ebcu: goto label_218ebc;
        case 0x218ec0u: goto label_218ec0;
        case 0x218ec4u: goto label_218ec4;
        case 0x218ec8u: goto label_218ec8;
        case 0x218eccu: goto label_218ecc;
        case 0x218ed0u: goto label_218ed0;
        case 0x218ed4u: goto label_218ed4;
        case 0x218ed8u: goto label_218ed8;
        case 0x218edcu: goto label_218edc;
        case 0x218ee0u: goto label_218ee0;
        case 0x218ee4u: goto label_218ee4;
        case 0x218ee8u: goto label_218ee8;
        case 0x218eecu: goto label_218eec;
        case 0x218ef0u: goto label_218ef0;
        case 0x218ef4u: goto label_218ef4;
        case 0x218ef8u: goto label_218ef8;
        case 0x218efcu: goto label_218efc;
        case 0x218f00u: goto label_218f00;
        case 0x218f04u: goto label_218f04;
        case 0x218f08u: goto label_218f08;
        case 0x218f0cu: goto label_218f0c;
        case 0x218f10u: goto label_218f10;
        case 0x218f14u: goto label_218f14;
        case 0x218f18u: goto label_218f18;
        case 0x218f1cu: goto label_218f1c;
        case 0x218f20u: goto label_218f20;
        case 0x218f24u: goto label_218f24;
        case 0x218f28u: goto label_218f28;
        case 0x218f2cu: goto label_218f2c;
        case 0x218f30u: goto label_218f30;
        case 0x218f34u: goto label_218f34;
        case 0x218f38u: goto label_218f38;
        case 0x218f3cu: goto label_218f3c;
        case 0x218f40u: goto label_218f40;
        case 0x218f44u: goto label_218f44;
        case 0x218f48u: goto label_218f48;
        case 0x218f4cu: goto label_218f4c;
        case 0x218f50u: goto label_218f50;
        case 0x218f54u: goto label_218f54;
        case 0x218f58u: goto label_218f58;
        case 0x218f5cu: goto label_218f5c;
        case 0x218f60u: goto label_218f60;
        case 0x218f64u: goto label_218f64;
        case 0x218f68u: goto label_218f68;
        case 0x218f6cu: goto label_218f6c;
        case 0x218f70u: goto label_218f70;
        case 0x218f74u: goto label_218f74;
        case 0x218f78u: goto label_218f78;
        case 0x218f7cu: goto label_218f7c;
        case 0x218f80u: goto label_218f80;
        case 0x218f84u: goto label_218f84;
        case 0x218f88u: goto label_218f88;
        case 0x218f8cu: goto label_218f8c;
        case 0x218f90u: goto label_218f90;
        case 0x218f94u: goto label_218f94;
        case 0x218f98u: goto label_218f98;
        case 0x218f9cu: goto label_218f9c;
        case 0x218fa0u: goto label_218fa0;
        case 0x218fa4u: goto label_218fa4;
        case 0x218fa8u: goto label_218fa8;
        case 0x218facu: goto label_218fac;
        case 0x218fb0u: goto label_218fb0;
        case 0x218fb4u: goto label_218fb4;
        case 0x218fb8u: goto label_218fb8;
        case 0x218fbcu: goto label_218fbc;
        case 0x218fc0u: goto label_218fc0;
        case 0x218fc4u: goto label_218fc4;
        case 0x218fc8u: goto label_218fc8;
        case 0x218fccu: goto label_218fcc;
        case 0x218fd0u: goto label_218fd0;
        case 0x218fd4u: goto label_218fd4;
        case 0x218fd8u: goto label_218fd8;
        case 0x218fdcu: goto label_218fdc;
        case 0x218fe0u: goto label_218fe0;
        case 0x218fe4u: goto label_218fe4;
        case 0x218fe8u: goto label_218fe8;
        case 0x218fecu: goto label_218fec;
        case 0x218ff0u: goto label_218ff0;
        case 0x218ff4u: goto label_218ff4;
        case 0x218ff8u: goto label_218ff8;
        case 0x218ffcu: goto label_218ffc;
        case 0x219000u: goto label_219000;
        case 0x219004u: goto label_219004;
        case 0x219008u: goto label_219008;
        case 0x21900cu: goto label_21900c;
        case 0x219010u: goto label_219010;
        case 0x219014u: goto label_219014;
        case 0x219018u: goto label_219018;
        case 0x21901cu: goto label_21901c;
        case 0x219020u: goto label_219020;
        case 0x219024u: goto label_219024;
        default: break;
    }

    ctx->pc = 0x218e00u;

label_218e00:
    // 0x218e00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x218e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_218e04:
    // 0x218e04: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x218e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_218e08:
    // 0x218e08: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x218e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_218e0c:
    // 0x218e0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x218e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_218e10:
    // 0x218e10: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x218e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_218e14:
    // 0x218e14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x218e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_218e18:
    // 0x218e18: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x218e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_218e1c:
    // 0x218e1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x218e1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_218e20:
    // 0x218e20: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x218e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_218e24:
    // 0x218e24: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x218e24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_218e28:
    // 0x218e28: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_218e2c:
    if (ctx->pc == 0x218E2Cu) {
        ctx->pc = 0x218E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E28u;
        // 0x218e2c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E30u;
        goto label_218e30;
    }
    ctx->pc = 0x218E28u;
    {
        const bool branch_taken_0x218e28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x218E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E28u;
        // 0x218e2c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e28) {
            ctx->pc = 0x218E40u;
            goto label_218e40;
        }
    }
    ctx->pc = 0x218E30u;
label_218e30:
    // 0x218e30: 0xc086cc6  jal         func_21B318
label_218e34:
    if (ctx->pc == 0x218E34u) {
        ctx->pc = 0x218E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E30u;
        // 0x218e34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E38u;
        goto label_218e38;
    }
    ctx->pc = 0x218E30u;
    SET_GPR_U32(ctx, 31, 0x218E38u);
    ctx->pc = 0x218E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E30u;
    // 0x218e34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B318u, 0x218E30u, 0x218E38u)) {
        return;
    }
    ctx->pc = 0x218E38u;
label_218e38:
    // 0x218e38: 0x10000074  b           . + 4 + (0x74 << 2)
label_218e3c:
    if (ctx->pc == 0x218E3Cu) {
        ctx->pc = 0x218E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E38u;
        // 0x218e3c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E40u;
        goto label_218e40;
    }
    ctx->pc = 0x218E38u;
    {
        const bool branch_taken_0x218e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E38u;
        // 0x218e3c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e38) {
            ctx->pc = 0x21900Cu;
            goto label_21900c;
        }
    }
    ctx->pc = 0x218E40u;
label_218e40:
    // 0x218e40: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x218e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_218e44:
    // 0x218e44: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_218e48:
    if (ctx->pc == 0x218E48u) {
        ctx->pc = 0x218E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E44u;
        // 0x218e48: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E4Cu;
        goto label_218e4c;
    }
    ctx->pc = 0x218E44u;
    {
        const bool branch_taken_0x218e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E44u;
        // 0x218e48: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e44) {
            ctx->pc = 0x218E98u;
            goto label_218e98;
        }
    }
    ctx->pc = 0x218E4Cu;
label_218e4c:
    // 0x218e4c: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x218e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_218e50:
    // 0x218e50: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x218e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_218e54:
    // 0x218e54: 0x40f809  jalr        $v0
label_218e58:
    if (ctx->pc == 0x218E58u) {
        ctx->pc = 0x218E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E54u;
        // 0x218e58: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E5Cu;
        goto label_218e5c;
    }
    ctx->pc = 0x218E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218E5Cu);
        ctx->pc = 0x218E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E54u;
        // 0x218e58: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218E54u, 0x218E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x218E5Cu;
label_218e5c:
    // 0x218e5c: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x218e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_218e60:
    // 0x218e60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_218e64:
    // 0x218e64: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x218e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_218e68:
    // 0x218e68: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x218e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_218e6c:
    // 0x218e6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x218e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_218e70:
    // 0x218e70: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x218e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_218e74:
    // 0x218e74: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x218e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_218e78:
    // 0x218e78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x218e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_218e7c:
    // 0x218e7c: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x218e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_218e80:
    // 0x218e80: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x218e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_218e84:
    // 0x218e84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x218e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_218e88:
    // 0x218e88: 0xc086cc6  jal         func_21B318
label_218e8c:
    if (ctx->pc == 0x218E8Cu) {
        ctx->pc = 0x218E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E88u;
        // 0x218e8c: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E90u;
        goto label_218e90;
    }
    ctx->pc = 0x218E88u;
    SET_GPR_U32(ctx, 31, 0x218E90u);
    ctx->pc = 0x218E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E88u;
    // 0x218e8c: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B318u, 0x218E88u, 0x218E90u)) {
        return;
    }
    ctx->pc = 0x218E90u;
label_218e90:
    // 0x218e90: 0x1000005e  b           . + 4 + (0x5E << 2)
label_218e94:
    if (ctx->pc == 0x218E94u) {
        ctx->pc = 0x218E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E90u;
        // 0x218e94: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E98u;
        goto label_218e98;
    }
    ctx->pc = 0x218E90u;
    {
        const bool branch_taken_0x218e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E90u;
        // 0x218e94: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e90) {
            ctx->pc = 0x21900Cu;
            goto label_21900c;
        }
    }
    ctx->pc = 0x218E98u;
label_218e98:
    // 0x218e98: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x218e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_218e9c:
    // 0x218e9c: 0xc0868a2  jal         func_21A288
label_218ea0:
    if (ctx->pc == 0x218EA0u) {
        ctx->pc = 0x218EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E9Cu;
        // 0x218ea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218EA4u;
        goto label_218ea4;
    }
    ctx->pc = 0x218E9Cu;
    SET_GPR_U32(ctx, 31, 0x218EA4u);
    ctx->pc = 0x218EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E9Cu;
    // 0x218ea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A288u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21A288u, 0x218E9Cu, 0x218EA4u)) {
        return;
    }
    ctx->pc = 0x218EA4u;
label_218ea4:
    // 0x218ea4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x218ea4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218ea8:
    // 0x218ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218eac:
    // 0x218eac: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_218eb0:
    if (ctx->pc == 0x218EB0u) {
        ctx->pc = 0x218EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EACu;
        // 0x218eb0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x218EB4u;
        goto label_218eb4;
    }
    ctx->pc = 0x218EACu;
    {
        const bool branch_taken_0x218eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x218EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EACu;
        // 0x218eb0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218eac) {
            ctx->pc = 0x218EECu;
            goto label_218eec;
        }
    }
    ctx->pc = 0x218EB4u;
label_218eb4:
    // 0x218eb4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_218eb8:
    if (ctx->pc == 0x218EB8u) {
        ctx->pc = 0x218EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EB4u;
        // 0x218eb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218EBCu;
        goto label_218ebc;
    }
    ctx->pc = 0x218EB4u;
    {
        const bool branch_taken_0x218eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218eb4) {
            ctx->pc = 0x218EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218EB4u;
            // 0x218eb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218ECCu;
            goto label_218ecc;
        }
    }
    ctx->pc = 0x218EBCu;
label_218ebc:
    // 0x218ebc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_218ec0:
    if (ctx->pc == 0x218EC0u) {
        ctx->pc = 0x218EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EBCu;
        // 0x218ec0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218EC4u;
        goto label_218ec4;
    }
    ctx->pc = 0x218EBCu;
    {
        const bool branch_taken_0x218ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x218EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EBCu;
        // 0x218ec0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ebc) {
            ctx->pc = 0x218EE4u;
            goto label_218ee4;
        }
    }
    ctx->pc = 0x218EC4u;
label_218ec4:
    // 0x218ec4: 0x10000052  b           . + 4 + (0x52 << 2)
label_218ec8:
    if (ctx->pc == 0x218EC8u) {
        ctx->pc = 0x218EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EC4u;
        // 0x218ec8: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218ECCu;
        goto label_218ecc;
    }
    ctx->pc = 0x218EC4u;
    {
        const bool branch_taken_0x218ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EC4u;
        // 0x218ec8: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ec4) {
            ctx->pc = 0x219010u;
            goto label_219010;
        }
    }
    ctx->pc = 0x218ECCu;
label_218ecc:
    // 0x218ecc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_218ed0:
    if (ctx->pc == 0x218ED0u) {
        ctx->pc = 0x218ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218ECCu;
        // 0x218ed0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218ED4u;
        goto label_218ed4;
    }
    ctx->pc = 0x218ECCu;
    {
        const bool branch_taken_0x218ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x218ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218ECCu;
        // 0x218ed0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ecc) {
            ctx->pc = 0x218F08u;
            goto label_218f08;
        }
    }
    ctx->pc = 0x218ED4u;
label_218ed4:
    // 0x218ed4: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
label_218ed8:
    if (ctx->pc == 0x218ED8u) {
        ctx->pc = 0x218ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218ED4u;
        // 0x218ed8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218EDCu;
        goto label_218edc;
    }
    ctx->pc = 0x218ED4u;
    {
        const bool branch_taken_0x218ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x218ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218ED4u;
        // 0x218ed8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ed4) {
            ctx->pc = 0x218F80u;
            goto label_218f80;
        }
    }
    ctx->pc = 0x218EDCu;
label_218edc:
    // 0x218edc: 0x1000004c  b           . + 4 + (0x4C << 2)
label_218ee0:
    if (ctx->pc == 0x218EE0u) {
        ctx->pc = 0x218EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EDCu;
        // 0x218ee0: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218EE4u;
        goto label_218ee4;
    }
    ctx->pc = 0x218EDCu;
    {
        const bool branch_taken_0x218edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EDCu;
        // 0x218ee0: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218edc) {
            ctx->pc = 0x219010u;
            goto label_219010;
        }
    }
    ctx->pc = 0x218EE4u;
label_218ee4:
    // 0x218ee4: 0x10000002  b           . + 4 + (0x2 << 2)
label_218ee8:
    if (ctx->pc == 0x218EE8u) {
        ctx->pc = 0x218EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EE4u;
        // 0x218ee8: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218EECu;
        goto label_218eec;
    }
    ctx->pc = 0x218EE4u;
    {
        const bool branch_taken_0x218ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EE4u;
        // 0x218ee8: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ee4) {
            ctx->pc = 0x218EF0u;
            goto label_218ef0;
        }
    }
    ctx->pc = 0x218EECu;
label_218eec:
    // 0x218eec: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x218eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_218ef0:
    // 0x218ef0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x218ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_218ef4:
    // 0x218ef4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x218ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_218ef8:
    // 0x218ef8: 0xc086380  jal         func_218E00
label_218efc:
    if (ctx->pc == 0x218EFCu) {
        ctx->pc = 0x218EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EF8u;
        // 0x218efc: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F00u;
        goto label_218f00;
    }
    ctx->pc = 0x218EF8u;
    SET_GPR_U32(ctx, 31, 0x218F00u);
    ctx->pc = 0x218EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218EF8u;
    // 0x218efc: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E00u;
    goto label_218e00;
    ctx->pc = 0x218F00u;
label_218f00:
    // 0x218f00: 0x10000042  b           . + 4 + (0x42 << 2)
label_218f04:
    if (ctx->pc == 0x218F04u) {
        ctx->pc = 0x218F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F00u;
        // 0x218f04: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F08u;
        goto label_218f08;
    }
    ctx->pc = 0x218F00u;
    {
        const bool branch_taken_0x218f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F00u;
        // 0x218f04: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f00) {
            ctx->pc = 0x21900Cu;
            goto label_21900c;
        }
    }
    ctx->pc = 0x218F08u;
label_218f08:
    // 0x218f08: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x218f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_218f0c:
    // 0x218f0c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x218f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_218f10:
    // 0x218f10: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x218f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_218f14:
    // 0x218f14: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x218f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_218f18:
    // 0x218f18: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x218f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_218f1c:
    // 0x218f1c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x218f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_218f20:
    // 0x218f20: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x218f20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_218f24:
    // 0x218f24: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x218f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_218f28:
    // 0x218f28: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x218f28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_218f2c:
    // 0x218f2c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x218f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_218f30:
    // 0x218f30: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x218f30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_218f34:
    // 0x218f34: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x218f34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_218f38:
    // 0x218f38: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x218f38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_218f3c:
    // 0x218f3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x218f3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_218f40:
    // 0x218f40: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x218f40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_218f44:
    // 0x218f44: 0x0  nop
    ctx->pc = 0x218f44u;
    // NOP
label_218f48:
    // 0x218f48: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_218f4c:
    if (ctx->pc == 0x218F4Cu) {
        ctx->pc = 0x218F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F48u;
        // 0x218f4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F50u;
        goto label_218f50;
    }
    ctx->pc = 0x218F48u;
    {
        const bool branch_taken_0x218f48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F48u;
        // 0x218f4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f48) {
            ctx->pc = 0x218F68u;
            goto label_218f68;
        }
    }
    ctx->pc = 0x218F50u;
label_218f50:
    // 0x218f50: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x218f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_218f54:
    // 0x218f54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x218f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_218f58:
    // 0x218f58: 0xc086380  jal         func_218E00
label_218f5c:
    if (ctx->pc == 0x218F5Cu) {
        ctx->pc = 0x218F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F58u;
        // 0x218f5c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F60u;
        goto label_218f60;
    }
    ctx->pc = 0x218F58u;
    SET_GPR_U32(ctx, 31, 0x218F60u);
    ctx->pc = 0x218F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F58u;
    // 0x218f5c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E00u;
    goto label_218e00;
    ctx->pc = 0x218F60u;
label_218f60:
    // 0x218f60: 0x1000002a  b           . + 4 + (0x2A << 2)
label_218f64:
    if (ctx->pc == 0x218F64u) {
        ctx->pc = 0x218F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F60u;
        // 0x218f64: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F68u;
        goto label_218f68;
    }
    ctx->pc = 0x218F60u;
    {
        const bool branch_taken_0x218f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F60u;
        // 0x218f64: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f60) {
            ctx->pc = 0x21900Cu;
            goto label_21900c;
        }
    }
    ctx->pc = 0x218F68u;
label_218f68:
    // 0x218f68: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x218f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_218f6c:
    // 0x218f6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x218f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_218f70:
    // 0x218f70: 0xc086380  jal         func_218E00
label_218f74:
    if (ctx->pc == 0x218F74u) {
        ctx->pc = 0x218F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F70u;
        // 0x218f74: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F78u;
        goto label_218f78;
    }
    ctx->pc = 0x218F70u;
    SET_GPR_U32(ctx, 31, 0x218F78u);
    ctx->pc = 0x218F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F70u;
    // 0x218f74: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E00u;
    goto label_218e00;
    ctx->pc = 0x218F78u;
label_218f78:
    // 0x218f78: 0x10000024  b           . + 4 + (0x24 << 2)
label_218f7c:
    if (ctx->pc == 0x218F7Cu) {
        ctx->pc = 0x218F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F78u;
        // 0x218f7c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F80u;
        goto label_218f80;
    }
    ctx->pc = 0x218F78u;
    {
        const bool branch_taken_0x218f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F78u;
        // 0x218f7c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f78) {
            ctx->pc = 0x21900Cu;
            goto label_21900c;
        }
    }
    ctx->pc = 0x218F80u;
label_218f80:
    // 0x218f80: 0xc086b4c  jal         func_21AD30
label_218f84:
    if (ctx->pc == 0x218F84u) {
        ctx->pc = 0x218F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F80u;
        // 0x218f84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F88u;
        goto label_218f88;
    }
    ctx->pc = 0x218F80u;
    SET_GPR_U32(ctx, 31, 0x218F88u);
    ctx->pc = 0x218F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F80u;
    // 0x218f84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AD30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AD30u, 0x218F80u, 0x218F88u)) {
        return;
    }
    ctx->pc = 0x218F88u;
label_218f88:
    // 0x218f88: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x218f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_218f8c:
    // 0x218f8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218f90:
    // 0x218f90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x218f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_218f94:
    // 0x218f94: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x218f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_218f98:
    // 0x218f98: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x218f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_218f9c:
    // 0x218f9c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x218f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_218fa0:
    // 0x218fa0: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x218fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_218fa4:
    // 0x218fa4: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x218fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_218fa8:
    // 0x218fa8: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x218fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_218fac:
    // 0x218fac: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x218facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_218fb0:
    // 0x218fb0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x218fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_218fb4:
    // 0x218fb4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x218fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_218fb8:
    // 0x218fb8: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x218fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_218fbc:
    // 0x218fbc: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x218fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_218fc0:
    // 0x218fc0: 0xc086abe  jal         func_21AAF8
label_218fc4:
    if (ctx->pc == 0x218FC4u) {
        ctx->pc = 0x218FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FC0u;
        // 0x218fc4: 0xb7a60010  sdr         $a2, 0x10($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x218FC8u;
        goto label_218fc8;
    }
    ctx->pc = 0x218FC0u;
    SET_GPR_U32(ctx, 31, 0x218FC8u);
    ctx->pc = 0x218FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FC0u;
    // 0x218fc4: 0xb7a60010  sdr         $a2, 0x10($sp) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AAF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AAF8u, 0x218FC0u, 0x218FC8u)) {
        return;
    }
    ctx->pc = 0x218FC8u;
label_218fc8:
    // 0x218fc8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x218fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_218fcc:
    // 0x218fcc: 0xc08691a  jal         func_21A468
label_218fd0:
    if (ctx->pc == 0x218FD0u) {
        ctx->pc = 0x218FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FCCu;
        // 0x218fd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218FD4u;
        goto label_218fd4;
    }
    ctx->pc = 0x218FCCu;
    SET_GPR_U32(ctx, 31, 0x218FD4u);
    ctx->pc = 0x218FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FCCu;
    // 0x218fd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21A468u, 0x218FCCu, 0x218FD4u)) {
        return;
    }
    ctx->pc = 0x218FD4u;
label_218fd4:
    // 0x218fd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x218fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_218fd8:
    // 0x218fd8: 0xc08691a  jal         func_21A468
label_218fdc:
    if (ctx->pc == 0x218FDCu) {
        ctx->pc = 0x218FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FD8u;
        // 0x218fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218FE0u;
        goto label_218fe0;
    }
    ctx->pc = 0x218FD8u;
    SET_GPR_U32(ctx, 31, 0x218FE0u);
    ctx->pc = 0x218FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FD8u;
    // 0x218fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21A468u, 0x218FD8u, 0x218FE0u)) {
        return;
    }
    ctx->pc = 0x218FE0u;
label_218fe0:
    // 0x218fe0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x218fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_218fe4:
    // 0x218fe4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x218fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_218fe8:
    // 0x218fe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x218fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_218fec:
    // 0x218fec: 0xc086380  jal         func_218E00
label_218ff0:
    if (ctx->pc == 0x218FF0u) {
        ctx->pc = 0x218FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FECu;
        // 0x218ff0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218FF4u;
        goto label_218ff4;
    }
    ctx->pc = 0x218FECu;
    SET_GPR_U32(ctx, 31, 0x218FF4u);
    ctx->pc = 0x218FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FECu;
    // 0x218ff0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E00u;
    goto label_218e00;
    ctx->pc = 0x218FF4u;
label_218ff4:
    // 0x218ff4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x218ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_218ff8:
    // 0x218ff8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x218ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_218ffc:
    // 0x218ffc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x218ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_219000:
    // 0x219000: 0xc086380  jal         func_218E00
label_219004:
    if (ctx->pc == 0x219004u) {
        ctx->pc = 0x219004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219000u;
        // 0x219004: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219008u;
        goto label_219008;
    }
    ctx->pc = 0x219000u;
    SET_GPR_U32(ctx, 31, 0x219008u);
    ctx->pc = 0x219004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219000u;
    // 0x219004: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E00u;
    goto label_218e00;
    ctx->pc = 0x219008u;
label_219008:
    // 0x219008: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x219008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21900c:
    // 0x21900c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x21900cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_219010:
    // 0x219010: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x219010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_219014:
    // 0x219014: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x219014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_219018:
    // 0x219018: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x219018u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21901c:
    // 0x21901c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21901cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_219020:
    // 0x219020: 0x3e00008  jr          $ra
label_219024:
    if (ctx->pc == 0x219024u) {
        ctx->pc = 0x219024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219020u;
        // 0x219024: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219028u;
        goto label_fallthrough_0x219020;
    }
    ctx->pc = 0x219020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219020u;
        // 0x219024: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x219020:
    ctx->pc = 0x219028u;
}
