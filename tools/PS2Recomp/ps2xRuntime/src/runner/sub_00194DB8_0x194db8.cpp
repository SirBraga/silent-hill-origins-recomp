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

// Function: sub_00194DB8
// Address: 0x194db8 - 0x194fc8
void sub_00194DB8_0x194db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194DB8_0x194db8");
#endif

    switch (ctx->pc) {
        case 0x194db8u: goto label_194db8;
        case 0x194dbcu: goto label_194dbc;
        case 0x194dc0u: goto label_194dc0;
        case 0x194dc4u: goto label_194dc4;
        case 0x194dc8u: goto label_194dc8;
        case 0x194dccu: goto label_194dcc;
        case 0x194dd0u: goto label_194dd0;
        case 0x194dd4u: goto label_194dd4;
        case 0x194dd8u: goto label_194dd8;
        case 0x194ddcu: goto label_194ddc;
        case 0x194de0u: goto label_194de0;
        case 0x194de4u: goto label_194de4;
        case 0x194de8u: goto label_194de8;
        case 0x194decu: goto label_194dec;
        case 0x194df0u: goto label_194df0;
        case 0x194df4u: goto label_194df4;
        case 0x194df8u: goto label_194df8;
        case 0x194dfcu: goto label_194dfc;
        case 0x194e00u: goto label_194e00;
        case 0x194e04u: goto label_194e04;
        case 0x194e08u: goto label_194e08;
        case 0x194e0cu: goto label_194e0c;
        case 0x194e10u: goto label_194e10;
        case 0x194e14u: goto label_194e14;
        case 0x194e18u: goto label_194e18;
        case 0x194e1cu: goto label_194e1c;
        case 0x194e20u: goto label_194e20;
        case 0x194e24u: goto label_194e24;
        case 0x194e28u: goto label_194e28;
        case 0x194e2cu: goto label_194e2c;
        case 0x194e30u: goto label_194e30;
        case 0x194e34u: goto label_194e34;
        case 0x194e38u: goto label_194e38;
        case 0x194e3cu: goto label_194e3c;
        case 0x194e40u: goto label_194e40;
        case 0x194e44u: goto label_194e44;
        case 0x194e48u: goto label_194e48;
        case 0x194e4cu: goto label_194e4c;
        case 0x194e50u: goto label_194e50;
        case 0x194e54u: goto label_194e54;
        case 0x194e58u: goto label_194e58;
        case 0x194e5cu: goto label_194e5c;
        case 0x194e60u: goto label_194e60;
        case 0x194e64u: goto label_194e64;
        case 0x194e68u: goto label_194e68;
        case 0x194e6cu: goto label_194e6c;
        case 0x194e70u: goto label_194e70;
        case 0x194e74u: goto label_194e74;
        case 0x194e78u: goto label_194e78;
        case 0x194e7cu: goto label_194e7c;
        case 0x194e80u: goto label_194e80;
        case 0x194e84u: goto label_194e84;
        case 0x194e88u: goto label_194e88;
        case 0x194e8cu: goto label_194e8c;
        case 0x194e90u: goto label_194e90;
        case 0x194e94u: goto label_194e94;
        case 0x194e98u: goto label_194e98;
        case 0x194e9cu: goto label_194e9c;
        case 0x194ea0u: goto label_194ea0;
        case 0x194ea4u: goto label_194ea4;
        case 0x194ea8u: goto label_194ea8;
        case 0x194eacu: goto label_194eac;
        case 0x194eb0u: goto label_194eb0;
        case 0x194eb4u: goto label_194eb4;
        case 0x194eb8u: goto label_194eb8;
        case 0x194ebcu: goto label_194ebc;
        case 0x194ec0u: goto label_194ec0;
        case 0x194ec4u: goto label_194ec4;
        case 0x194ec8u: goto label_194ec8;
        case 0x194eccu: goto label_194ecc;
        case 0x194ed0u: goto label_194ed0;
        case 0x194ed4u: goto label_194ed4;
        case 0x194ed8u: goto label_194ed8;
        case 0x194edcu: goto label_194edc;
        case 0x194ee0u: goto label_194ee0;
        case 0x194ee4u: goto label_194ee4;
        case 0x194ee8u: goto label_194ee8;
        case 0x194eecu: goto label_194eec;
        case 0x194ef0u: goto label_194ef0;
        case 0x194ef4u: goto label_194ef4;
        case 0x194ef8u: goto label_194ef8;
        case 0x194efcu: goto label_194efc;
        case 0x194f00u: goto label_194f00;
        case 0x194f04u: goto label_194f04;
        case 0x194f08u: goto label_194f08;
        case 0x194f0cu: goto label_194f0c;
        case 0x194f10u: goto label_194f10;
        case 0x194f14u: goto label_194f14;
        case 0x194f18u: goto label_194f18;
        case 0x194f1cu: goto label_194f1c;
        case 0x194f20u: goto label_194f20;
        case 0x194f24u: goto label_194f24;
        case 0x194f28u: goto label_194f28;
        case 0x194f2cu: goto label_194f2c;
        case 0x194f30u: goto label_194f30;
        case 0x194f34u: goto label_194f34;
        case 0x194f38u: goto label_194f38;
        case 0x194f3cu: goto label_194f3c;
        case 0x194f40u: goto label_194f40;
        case 0x194f44u: goto label_194f44;
        case 0x194f48u: goto label_194f48;
        case 0x194f4cu: goto label_194f4c;
        case 0x194f50u: goto label_194f50;
        case 0x194f54u: goto label_194f54;
        case 0x194f58u: goto label_194f58;
        case 0x194f5cu: goto label_194f5c;
        case 0x194f60u: goto label_194f60;
        case 0x194f64u: goto label_194f64;
        case 0x194f68u: goto label_194f68;
        case 0x194f6cu: goto label_194f6c;
        case 0x194f70u: goto label_194f70;
        case 0x194f74u: goto label_194f74;
        case 0x194f78u: goto label_194f78;
        case 0x194f7cu: goto label_194f7c;
        case 0x194f80u: goto label_194f80;
        case 0x194f84u: goto label_194f84;
        case 0x194f88u: goto label_194f88;
        case 0x194f8cu: goto label_194f8c;
        case 0x194f90u: goto label_194f90;
        case 0x194f94u: goto label_194f94;
        case 0x194f98u: goto label_194f98;
        case 0x194f9cu: goto label_194f9c;
        case 0x194fa0u: goto label_194fa0;
        case 0x194fa4u: goto label_194fa4;
        case 0x194fa8u: goto label_194fa8;
        case 0x194facu: goto label_194fac;
        case 0x194fb0u: goto label_194fb0;
        case 0x194fb4u: goto label_194fb4;
        case 0x194fb8u: goto label_194fb8;
        case 0x194fbcu: goto label_194fbc;
        case 0x194fc0u: goto label_194fc0;
        case 0x194fc4u: goto label_194fc4;
        default: break;
    }

    ctx->pc = 0x194db8u;

label_194db8:
    // 0x194db8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x194db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_194dbc:
    // 0x194dbc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x194dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_194dc0:
    // 0x194dc0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x194dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_194dc4:
    // 0x194dc4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x194dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_194dc8:
    // 0x194dc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x194dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194dcc:
    // 0x194dcc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x194dccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194dd0:
    // 0x194dd0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x194dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_194dd4:
    // 0x194dd4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x194dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_194dd8:
    // 0x194dd8: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x194dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_194ddc:
    // 0x194ddc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x194ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_194de0:
    // 0x194de0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x194de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_194de4:
    // 0x194de4: 0x2631ffec  addiu       $s1, $s1, -0x14
    ctx->pc = 0x194de4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
label_194de8:
    // 0x194de8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x194de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_194dec:
    // 0x194dec: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x194decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_194df0:
    // 0x194df0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x194df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_194df4:
    // 0x194df4: 0xc093546  jal         func_24D518
label_194df8:
    if (ctx->pc == 0x194DF8u) {
        ctx->pc = 0x194DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DF4u;
        // 0x194df8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194DFCu;
        goto label_194dfc;
    }
    ctx->pc = 0x194DF4u;
    SET_GPR_U32(ctx, 31, 0x194DFCu);
    ctx->pc = 0x194DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DF4u;
    // 0x194df8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x194DF4u, 0x194DFCu)) {
        return;
    }
    ctx->pc = 0x194DFCu;
label_194dfc:
    // 0x194dfc: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x194dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_194e00:
    // 0x194e00: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x194e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_194e04:
    // 0x194e04: 0xc093546  jal         func_24D518
label_194e08:
    if (ctx->pc == 0x194E08u) {
        ctx->pc = 0x194E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E04u;
        // 0x194e08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E0Cu;
        goto label_194e0c;
    }
    ctx->pc = 0x194E04u;
    SET_GPR_U32(ctx, 31, 0x194E0Cu);
    ctx->pc = 0x194E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E04u;
    // 0x194e08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x194E04u, 0x194E0Cu)) {
        return;
    }
    ctx->pc = 0x194E0Cu;
label_194e0c:
    // 0x194e0c: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x194e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_194e10:
    // 0x194e10: 0xc0808f0  jal         func_2023C0
label_194e14:
    if (ctx->pc == 0x194E14u) {
        ctx->pc = 0x194E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E10u;
        // 0x194e14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E18u;
        goto label_194e18;
    }
    ctx->pc = 0x194E10u;
    SET_GPR_U32(ctx, 31, 0x194E18u);
    ctx->pc = 0x194E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E10u;
    // 0x194e14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x194E10u, 0x194E18u)) {
        return;
    }
    ctx->pc = 0x194E18u;
label_194e18:
    // 0x194e18: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x194e18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194e1c:
    // 0x194e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194e20:
    // 0x194e20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x194e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194e24:
    // 0x194e24: 0xc0c493d  jal         func_3124F4
label_194e28:
    if (ctx->pc == 0x194E28u) {
        ctx->pc = 0x194E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E24u;
        // 0x194e28: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E2Cu;
        goto label_194e2c;
    }
    ctx->pc = 0x194E24u;
    SET_GPR_U32(ctx, 31, 0x194E2Cu);
    ctx->pc = 0x194E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E24u;
    // 0x194e28: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x194E24u, 0x194E2Cu)) {
        return;
    }
    ctx->pc = 0x194E2Cu;
label_194e2c:
    // 0x194e2c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x194e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_194e30:
    // 0x194e30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_194e34:
    // 0x194e34: 0xc093546  jal         func_24D518
label_194e38:
    if (ctx->pc == 0x194E38u) {
        ctx->pc = 0x194E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E34u;
        // 0x194e38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E3Cu;
        goto label_194e3c;
    }
    ctx->pc = 0x194E34u;
    SET_GPR_U32(ctx, 31, 0x194E3Cu);
    ctx->pc = 0x194E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E34u;
    // 0x194e38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x194E34u, 0x194E3Cu)) {
        return;
    }
    ctx->pc = 0x194E3Cu;
label_194e3c:
    // 0x194e3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_194e40:
    // 0x194e40: 0xc093620  jal         func_24D880
label_194e44:
    if (ctx->pc == 0x194E44u) {
        ctx->pc = 0x194E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E40u;
        // 0x194e44: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E48u;
        goto label_194e48;
    }
    ctx->pc = 0x194E40u;
    SET_GPR_U32(ctx, 31, 0x194E48u);
    ctx->pc = 0x194E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E40u;
    // 0x194e44: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x194E40u, 0x194E48u)) {
        return;
    }
    ctx->pc = 0x194E48u;
label_194e48:
    // 0x194e48: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x194e48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_194e4c:
    // 0x194e4c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x194e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_194e50:
    // 0x194e50: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x194e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_194e54:
    // 0x194e54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194e58:
    // 0x194e58: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x194e58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_194e5c:
    // 0x194e5c: 0x24760fc8  addiu       $s6, $v1, 0xFC8
    ctx->pc = 0x194e5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_194e60:
    // 0x194e60: 0x8ec20108  lw          $v0, 0x108($s6)
    ctx->pc = 0x194e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_194e64:
    // 0x194e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194e68:
    // 0x194e68: 0x40f809  jalr        $v0
label_194e6c:
    if (ctx->pc == 0x194E6Cu) {
        ctx->pc = 0x194E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E68u;
        // 0x194e6c: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E70u;
        goto label_194e70;
    }
    ctx->pc = 0x194E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194E70u);
        ctx->pc = 0x194E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E68u;
        // 0x194e6c: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194E68u, 0x194E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194E70u;
label_194e70:
    // 0x194e70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_194e74:
    // 0x194e74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x194e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194e78:
    // 0x194e78: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x194e78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_194e7c:
    // 0x194e7c: 0xc093546  jal         func_24D518
label_194e80:
    if (ctx->pc == 0x194E80u) {
        ctx->pc = 0x194E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E7Cu;
        // 0x194e80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E84u;
        goto label_194e84;
    }
    ctx->pc = 0x194E7Cu;
    SET_GPR_U32(ctx, 31, 0x194E84u);
    ctx->pc = 0x194E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E7Cu;
    // 0x194e80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x194E7Cu, 0x194E84u)) {
        return;
    }
    ctx->pc = 0x194E84u;
label_194e84:
    // 0x194e84: 0x2a31000d  slti        $s1, $s1, 0xD
    ctx->pc = 0x194e84u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)13) ? 1 : 0);
label_194e88:
    // 0x194e88: 0x16200041  bnez        $s1, . + 4 + (0x41 << 2)
label_194e8c:
    if (ctx->pc == 0x194E8Cu) {
        ctx->pc = 0x194E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E88u;
        // 0x194e8c: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E90u;
        goto label_194e90;
    }
    ctx->pc = 0x194E88u;
    {
        const bool branch_taken_0x194e88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x194E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E88u;
        // 0x194e8c: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e88) {
            ctx->pc = 0x194F90u;
            goto label_194f90;
        }
    }
    ctx->pc = 0x194E90u;
label_194e90:
    // 0x194e90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_194e94:
    // 0x194e94: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x194e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_194e98:
    // 0x194e98: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x194e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_194e9c:
    // 0x194e9c: 0xc093546  jal         func_24D518
label_194ea0:
    if (ctx->pc == 0x194EA0u) {
        ctx->pc = 0x194EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E9Cu;
        // 0x194ea0: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EA4u;
        goto label_194ea4;
    }
    ctx->pc = 0x194E9Cu;
    SET_GPR_U32(ctx, 31, 0x194EA4u);
    ctx->pc = 0x194EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E9Cu;
    // 0x194ea0: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x194E9Cu, 0x194EA4u)) {
        return;
    }
    ctx->pc = 0x194EA4u;
label_194ea4:
    // 0x194ea4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_194ea8:
    // 0x194ea8: 0x26650014  addiu       $a1, $s3, 0x14
    ctx->pc = 0x194ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_194eac:
    // 0x194eac: 0xc093546  jal         func_24D518
label_194eb0:
    if (ctx->pc == 0x194EB0u) {
        ctx->pc = 0x194EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EACu;
        // 0x194eb0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EB4u;
        goto label_194eb4;
    }
    ctx->pc = 0x194EACu;
    SET_GPR_U32(ctx, 31, 0x194EB4u);
    ctx->pc = 0x194EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194EACu;
    // 0x194eb0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x194EACu, 0x194EB4u)) {
        return;
    }
    ctx->pc = 0x194EB4u;
label_194eb4:
    // 0x194eb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_194eb8:
    // 0x194eb8: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x194eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_194ebc:
    // 0x194ebc: 0xc093546  jal         func_24D518
label_194ec0:
    if (ctx->pc == 0x194EC0u) {
        ctx->pc = 0x194EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EBCu;
        // 0x194ec0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EC4u;
        goto label_194ec4;
    }
    ctx->pc = 0x194EBCu;
    SET_GPR_U32(ctx, 31, 0x194EC4u);
    ctx->pc = 0x194EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194EBCu;
    // 0x194ec0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x194EBCu, 0x194EC4u)) {
        return;
    }
    ctx->pc = 0x194EC4u;
label_194ec4:
    // 0x194ec4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_194ec8:
    // 0x194ec8: 0x26650022  addiu       $a1, $s3, 0x22
    ctx->pc = 0x194ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 34));
label_194ecc:
    // 0x194ecc: 0xc093546  jal         func_24D518
label_194ed0:
    if (ctx->pc == 0x194ED0u) {
        ctx->pc = 0x194ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194ECCu;
        // 0x194ed0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194ED4u;
        goto label_194ed4;
    }
    ctx->pc = 0x194ECCu;
    SET_GPR_U32(ctx, 31, 0x194ED4u);
    ctx->pc = 0x194ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194ECCu;
    // 0x194ed0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x194ECCu, 0x194ED4u)) {
        return;
    }
    ctx->pc = 0x194ED4u;
label_194ed4:
    // 0x194ed4: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x194ed4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_194ed8:
    // 0x194ed8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x194ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_194edc:
    // 0x194edc: 0xc093546  jal         func_24D518
label_194ee0:
    if (ctx->pc == 0x194EE0u) {
        ctx->pc = 0x194EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EDCu;
        // 0x194ee0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EE4u;
        goto label_194ee4;
    }
    ctx->pc = 0x194EDCu;
    SET_GPR_U32(ctx, 31, 0x194EE4u);
    ctx->pc = 0x194EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194EDCu;
    // 0x194ee0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x194EDCu, 0x194EE4u)) {
        return;
    }
    ctx->pc = 0x194EE4u;
label_194ee4:
    // 0x194ee4: 0x96620022  lhu         $v0, 0x22($s3)
    ctx->pc = 0x194ee4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
label_194ee8:
    // 0x194ee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194eec:
    // 0x194eec: 0x96700020  lhu         $s0, 0x20($s3)
    ctx->pc = 0x194eecu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_194ef0:
    // 0x194ef0: 0x8fb5000c  lw          $s5, 0xC($sp)
    ctx->pc = 0x194ef0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_194ef4:
    // 0x194ef4: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x194ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_194ef8:
    // 0x194ef8: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x194ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_194efc:
    // 0x194efc: 0x8ec20108  lw          $v0, 0x108($s6)
    ctx->pc = 0x194efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_194f00:
    // 0x194f00: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x194f00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_194f04:
    // 0x194f04: 0x109040  sll         $s2, $s0, 1
    ctx->pc = 0x194f04u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_194f08:
    // 0x194f08: 0x32110001  andi        $s1, $s0, 0x1
    ctx->pc = 0x194f08u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_194f0c:
    // 0x194f0c: 0x2118821  addu        $s1, $s0, $s1
    ctx->pc = 0x194f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_194f10:
    // 0x194f10: 0x40f809  jalr        $v0
label_194f14:
    if (ctx->pc == 0x194F14u) {
        ctx->pc = 0x194F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F10u;
        // 0x194f14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F18u;
        goto label_194f18;
    }
    ctx->pc = 0x194F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194F18u);
        ctx->pc = 0x194F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F10u;
        // 0x194f14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194F10u, 0x194F18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194F18u;
label_194f18:
    // 0x194f18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x194f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194f1c:
    // 0x194f1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x194f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194f20:
    // 0x194f20: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x194f20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_194f24:
    // 0x194f24: 0xc093546  jal         func_24D518
label_194f28:
    if (ctx->pc == 0x194F28u) {
        ctx->pc = 0x194F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F24u;
        // 0x194f28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F2Cu;
        goto label_194f2c;
    }
    ctx->pc = 0x194F24u;
    SET_GPR_U32(ctx, 31, 0x194F2Cu);
    ctx->pc = 0x194F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F24u;
    // 0x194f28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x194F24u, 0x194F2Cu)) {
        return;
    }
    ctx->pc = 0x194F2Cu;
label_194f2c:
    // 0x194f2c: 0x211802b  sltu        $s0, $s0, $s1
    ctx->pc = 0x194f2cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_194f30:
    // 0x194f30: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_194f34:
    if (ctx->pc == 0x194F34u) {
        ctx->pc = 0x194F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F30u;
        // 0x194f34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F38u;
        goto label_194f38;
    }
    ctx->pc = 0x194F30u;
    {
        const bool branch_taken_0x194f30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F30u;
        // 0x194f34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f30) {
            ctx->pc = 0x194F44u;
            goto label_194f44;
        }
    }
    ctx->pc = 0x194F38u;
label_194f38:
    // 0x194f38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x194f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_194f3c:
    // 0x194f3c: 0xc093546  jal         func_24D518
label_194f40:
    if (ctx->pc == 0x194F40u) {
        ctx->pc = 0x194F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F3Cu;
        // 0x194f40: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F44u;
        goto label_194f44;
    }
    ctx->pc = 0x194F3Cu;
    SET_GPR_U32(ctx, 31, 0x194F44u);
    ctx->pc = 0x194F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F3Cu;
    // 0x194f40: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x194F3Cu, 0x194F44u)) {
        return;
    }
    ctx->pc = 0x194F44u;
label_194f44:
    // 0x194f44: 0x8fb0000c  lw          $s0, 0xC($sp)
    ctx->pc = 0x194f44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_194f48:
    // 0x194f48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194f4c:
    // 0x194f4c: 0x8ec20108  lw          $v0, 0x108($s6)
    ctx->pc = 0x194f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_194f50:
    // 0x194f50: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x194f50u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_194f54:
    // 0x194f54: 0x40f809  jalr        $v0
label_194f58:
    if (ctx->pc == 0x194F58u) {
        ctx->pc = 0x194F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F54u;
        // 0x194f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F5Cu;
        goto label_194f5c;
    }
    ctx->pc = 0x194F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194F5Cu);
        ctx->pc = 0x194F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F54u;
        // 0x194f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194F54u, 0x194F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194F5Cu;
label_194f5c:
    // 0x194f5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x194f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194f60:
    // 0x194f60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x194f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194f64:
    // 0x194f64: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x194f64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
label_194f68:
    // 0x194f68: 0xc093546  jal         func_24D518
label_194f6c:
    if (ctx->pc == 0x194F6Cu) {
        ctx->pc = 0x194F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F68u;
        // 0x194f6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F70u;
        goto label_194f70;
    }
    ctx->pc = 0x194F68u;
    SET_GPR_U32(ctx, 31, 0x194F70u);
    ctx->pc = 0x194F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F68u;
    // 0x194f6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x194F68u, 0x194F70u)) {
        return;
    }
    ctx->pc = 0x194F70u;
label_194f70:
    // 0x194f70: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x194f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_194f74:
    // 0x194f74: 0x75182b  sltu        $v1, $v1, $s5
    ctx->pc = 0x194f74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_194f78:
    // 0x194f78: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_194f7c:
    if (ctx->pc == 0x194F7Cu) {
        ctx->pc = 0x194F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F78u;
        // 0x194f7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F80u;
        goto label_194f80;
    }
    ctx->pc = 0x194F78u;
    {
        const bool branch_taken_0x194f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F78u;
        // 0x194f7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f78) {
            ctx->pc = 0x194F8Cu;
            goto label_194f8c;
        }
    }
    ctx->pc = 0x194F80u;
label_194f80:
    // 0x194f80: 0x37a50002  ori         $a1, $sp, 0x2
    ctx->pc = 0x194f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
label_194f84:
    // 0x194f84: 0xc093546  jal         func_24D518
label_194f88:
    if (ctx->pc == 0x194F88u) {
        ctx->pc = 0x194F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F84u;
        // 0x194f88: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F8Cu;
        goto label_194f8c;
    }
    ctx->pc = 0x194F84u;
    SET_GPR_U32(ctx, 31, 0x194F8Cu);
    ctx->pc = 0x194F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F84u;
    // 0x194f88: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x194F84u, 0x194F8Cu)) {
        return;
    }
    ctx->pc = 0x194F8Cu;
label_194f8c:
    // 0x194f8c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x194f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_194f90:
    // 0x194f90: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x194f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194f94:
    // 0x194f94: 0xac7781c0  sw          $s7, -0x7E40($v1)
    ctx->pc = 0x194f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294934976), GPR_U32(ctx, 23));
label_194f98:
    // 0x194f98: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x194f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_194f9c:
    // 0x194f9c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x194f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_194fa0:
    // 0x194fa0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x194fa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_194fa4:
    // 0x194fa4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x194fa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_194fa8:
    // 0x194fa8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x194fa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_194fac:
    // 0x194fac: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x194facu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_194fb0:
    // 0x194fb0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x194fb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_194fb4:
    // 0x194fb4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x194fb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_194fb8:
    // 0x194fb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x194fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_194fbc:
    // 0x194fbc: 0x3e00008  jr          $ra
label_194fc0:
    if (ctx->pc == 0x194FC0u) {
        ctx->pc = 0x194FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FBCu;
        // 0x194fc0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194FC4u;
        goto label_194fc4;
    }
    ctx->pc = 0x194FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FBCu;
        // 0x194fc0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194FC4u;
label_194fc4:
    // 0x194fc4: 0x0  nop
    ctx->pc = 0x194fc4u;
    // NOP
    ctx->pc = 0x194fc8u;
}
