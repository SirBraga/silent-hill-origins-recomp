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

// Function: sub_001C1E30
// Address: 0x1c1e30 - 0x1c2180
void sub_001C1E30_0x1c1e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1E30_0x1c1e30");
#endif

    switch (ctx->pc) {
        case 0x1c1e30u: goto label_1c1e30;
        case 0x1c1e34u: goto label_1c1e34;
        case 0x1c1e38u: goto label_1c1e38;
        case 0x1c1e3cu: goto label_1c1e3c;
        case 0x1c1e40u: goto label_1c1e40;
        case 0x1c1e44u: goto label_1c1e44;
        case 0x1c1e48u: goto label_1c1e48;
        case 0x1c1e4cu: goto label_1c1e4c;
        case 0x1c1e50u: goto label_1c1e50;
        case 0x1c1e54u: goto label_1c1e54;
        case 0x1c1e58u: goto label_1c1e58;
        case 0x1c1e5cu: goto label_1c1e5c;
        case 0x1c1e60u: goto label_1c1e60;
        case 0x1c1e64u: goto label_1c1e64;
        case 0x1c1e68u: goto label_1c1e68;
        case 0x1c1e6cu: goto label_1c1e6c;
        case 0x1c1e70u: goto label_1c1e70;
        case 0x1c1e74u: goto label_1c1e74;
        case 0x1c1e78u: goto label_1c1e78;
        case 0x1c1e7cu: goto label_1c1e7c;
        case 0x1c1e80u: goto label_1c1e80;
        case 0x1c1e84u: goto label_1c1e84;
        case 0x1c1e88u: goto label_1c1e88;
        case 0x1c1e8cu: goto label_1c1e8c;
        case 0x1c1e90u: goto label_1c1e90;
        case 0x1c1e94u: goto label_1c1e94;
        case 0x1c1e98u: goto label_1c1e98;
        case 0x1c1e9cu: goto label_1c1e9c;
        case 0x1c1ea0u: goto label_1c1ea0;
        case 0x1c1ea4u: goto label_1c1ea4;
        case 0x1c1ea8u: goto label_1c1ea8;
        case 0x1c1eacu: goto label_1c1eac;
        case 0x1c1eb0u: goto label_1c1eb0;
        case 0x1c1eb4u: goto label_1c1eb4;
        case 0x1c1eb8u: goto label_1c1eb8;
        case 0x1c1ebcu: goto label_1c1ebc;
        case 0x1c1ec0u: goto label_1c1ec0;
        case 0x1c1ec4u: goto label_1c1ec4;
        case 0x1c1ec8u: goto label_1c1ec8;
        case 0x1c1eccu: goto label_1c1ecc;
        case 0x1c1ed0u: goto label_1c1ed0;
        case 0x1c1ed4u: goto label_1c1ed4;
        case 0x1c1ed8u: goto label_1c1ed8;
        case 0x1c1edcu: goto label_1c1edc;
        case 0x1c1ee0u: goto label_1c1ee0;
        case 0x1c1ee4u: goto label_1c1ee4;
        case 0x1c1ee8u: goto label_1c1ee8;
        case 0x1c1eecu: goto label_1c1eec;
        case 0x1c1ef0u: goto label_1c1ef0;
        case 0x1c1ef4u: goto label_1c1ef4;
        case 0x1c1ef8u: goto label_1c1ef8;
        case 0x1c1efcu: goto label_1c1efc;
        case 0x1c1f00u: goto label_1c1f00;
        case 0x1c1f04u: goto label_1c1f04;
        case 0x1c1f08u: goto label_1c1f08;
        case 0x1c1f0cu: goto label_1c1f0c;
        case 0x1c1f10u: goto label_1c1f10;
        case 0x1c1f14u: goto label_1c1f14;
        case 0x1c1f18u: goto label_1c1f18;
        case 0x1c1f1cu: goto label_1c1f1c;
        case 0x1c1f20u: goto label_1c1f20;
        case 0x1c1f24u: goto label_1c1f24;
        case 0x1c1f28u: goto label_1c1f28;
        case 0x1c1f2cu: goto label_1c1f2c;
        case 0x1c1f30u: goto label_1c1f30;
        case 0x1c1f34u: goto label_1c1f34;
        case 0x1c1f38u: goto label_1c1f38;
        case 0x1c1f3cu: goto label_1c1f3c;
        case 0x1c1f40u: goto label_1c1f40;
        case 0x1c1f44u: goto label_1c1f44;
        case 0x1c1f48u: goto label_1c1f48;
        case 0x1c1f4cu: goto label_1c1f4c;
        case 0x1c1f50u: goto label_1c1f50;
        case 0x1c1f54u: goto label_1c1f54;
        case 0x1c1f58u: goto label_1c1f58;
        case 0x1c1f5cu: goto label_1c1f5c;
        case 0x1c1f60u: goto label_1c1f60;
        case 0x1c1f64u: goto label_1c1f64;
        case 0x1c1f68u: goto label_1c1f68;
        case 0x1c1f6cu: goto label_1c1f6c;
        case 0x1c1f70u: goto label_1c1f70;
        case 0x1c1f74u: goto label_1c1f74;
        case 0x1c1f78u: goto label_1c1f78;
        case 0x1c1f7cu: goto label_1c1f7c;
        case 0x1c1f80u: goto label_1c1f80;
        case 0x1c1f84u: goto label_1c1f84;
        case 0x1c1f88u: goto label_1c1f88;
        case 0x1c1f8cu: goto label_1c1f8c;
        case 0x1c1f90u: goto label_1c1f90;
        case 0x1c1f94u: goto label_1c1f94;
        case 0x1c1f98u: goto label_1c1f98;
        case 0x1c1f9cu: goto label_1c1f9c;
        case 0x1c1fa0u: goto label_1c1fa0;
        case 0x1c1fa4u: goto label_1c1fa4;
        case 0x1c1fa8u: goto label_1c1fa8;
        case 0x1c1facu: goto label_1c1fac;
        case 0x1c1fb0u: goto label_1c1fb0;
        case 0x1c1fb4u: goto label_1c1fb4;
        case 0x1c1fb8u: goto label_1c1fb8;
        case 0x1c1fbcu: goto label_1c1fbc;
        case 0x1c1fc0u: goto label_1c1fc0;
        case 0x1c1fc4u: goto label_1c1fc4;
        case 0x1c1fc8u: goto label_1c1fc8;
        case 0x1c1fccu: goto label_1c1fcc;
        case 0x1c1fd0u: goto label_1c1fd0;
        case 0x1c1fd4u: goto label_1c1fd4;
        case 0x1c1fd8u: goto label_1c1fd8;
        case 0x1c1fdcu: goto label_1c1fdc;
        case 0x1c1fe0u: goto label_1c1fe0;
        case 0x1c1fe4u: goto label_1c1fe4;
        case 0x1c1fe8u: goto label_1c1fe8;
        case 0x1c1fecu: goto label_1c1fec;
        case 0x1c1ff0u: goto label_1c1ff0;
        case 0x1c1ff4u: goto label_1c1ff4;
        case 0x1c1ff8u: goto label_1c1ff8;
        case 0x1c1ffcu: goto label_1c1ffc;
        case 0x1c2000u: goto label_1c2000;
        case 0x1c2004u: goto label_1c2004;
        case 0x1c2008u: goto label_1c2008;
        case 0x1c200cu: goto label_1c200c;
        case 0x1c2010u: goto label_1c2010;
        case 0x1c2014u: goto label_1c2014;
        case 0x1c2018u: goto label_1c2018;
        case 0x1c201cu: goto label_1c201c;
        case 0x1c2020u: goto label_1c2020;
        case 0x1c2024u: goto label_1c2024;
        case 0x1c2028u: goto label_1c2028;
        case 0x1c202cu: goto label_1c202c;
        case 0x1c2030u: goto label_1c2030;
        case 0x1c2034u: goto label_1c2034;
        case 0x1c2038u: goto label_1c2038;
        case 0x1c203cu: goto label_1c203c;
        case 0x1c2040u: goto label_1c2040;
        case 0x1c2044u: goto label_1c2044;
        case 0x1c2048u: goto label_1c2048;
        case 0x1c204cu: goto label_1c204c;
        case 0x1c2050u: goto label_1c2050;
        case 0x1c2054u: goto label_1c2054;
        case 0x1c2058u: goto label_1c2058;
        case 0x1c205cu: goto label_1c205c;
        case 0x1c2060u: goto label_1c2060;
        case 0x1c2064u: goto label_1c2064;
        case 0x1c2068u: goto label_1c2068;
        case 0x1c206cu: goto label_1c206c;
        case 0x1c2070u: goto label_1c2070;
        case 0x1c2074u: goto label_1c2074;
        case 0x1c2078u: goto label_1c2078;
        case 0x1c207cu: goto label_1c207c;
        case 0x1c2080u: goto label_1c2080;
        case 0x1c2084u: goto label_1c2084;
        case 0x1c2088u: goto label_1c2088;
        case 0x1c208cu: goto label_1c208c;
        case 0x1c2090u: goto label_1c2090;
        case 0x1c2094u: goto label_1c2094;
        case 0x1c2098u: goto label_1c2098;
        case 0x1c209cu: goto label_1c209c;
        case 0x1c20a0u: goto label_1c20a0;
        case 0x1c20a4u: goto label_1c20a4;
        case 0x1c20a8u: goto label_1c20a8;
        case 0x1c20acu: goto label_1c20ac;
        case 0x1c20b0u: goto label_1c20b0;
        case 0x1c20b4u: goto label_1c20b4;
        case 0x1c20b8u: goto label_1c20b8;
        case 0x1c20bcu: goto label_1c20bc;
        case 0x1c20c0u: goto label_1c20c0;
        case 0x1c20c4u: goto label_1c20c4;
        case 0x1c20c8u: goto label_1c20c8;
        case 0x1c20ccu: goto label_1c20cc;
        case 0x1c20d0u: goto label_1c20d0;
        case 0x1c20d4u: goto label_1c20d4;
        case 0x1c20d8u: goto label_1c20d8;
        case 0x1c20dcu: goto label_1c20dc;
        case 0x1c20e0u: goto label_1c20e0;
        case 0x1c20e4u: goto label_1c20e4;
        case 0x1c20e8u: goto label_1c20e8;
        case 0x1c20ecu: goto label_1c20ec;
        case 0x1c20f0u: goto label_1c20f0;
        case 0x1c20f4u: goto label_1c20f4;
        case 0x1c20f8u: goto label_1c20f8;
        case 0x1c20fcu: goto label_1c20fc;
        case 0x1c2100u: goto label_1c2100;
        case 0x1c2104u: goto label_1c2104;
        case 0x1c2108u: goto label_1c2108;
        case 0x1c210cu: goto label_1c210c;
        case 0x1c2110u: goto label_1c2110;
        case 0x1c2114u: goto label_1c2114;
        case 0x1c2118u: goto label_1c2118;
        case 0x1c211cu: goto label_1c211c;
        case 0x1c2120u: goto label_1c2120;
        case 0x1c2124u: goto label_1c2124;
        case 0x1c2128u: goto label_1c2128;
        case 0x1c212cu: goto label_1c212c;
        case 0x1c2130u: goto label_1c2130;
        case 0x1c2134u: goto label_1c2134;
        case 0x1c2138u: goto label_1c2138;
        case 0x1c213cu: goto label_1c213c;
        case 0x1c2140u: goto label_1c2140;
        case 0x1c2144u: goto label_1c2144;
        case 0x1c2148u: goto label_1c2148;
        case 0x1c214cu: goto label_1c214c;
        case 0x1c2150u: goto label_1c2150;
        case 0x1c2154u: goto label_1c2154;
        case 0x1c2158u: goto label_1c2158;
        case 0x1c215cu: goto label_1c215c;
        case 0x1c2160u: goto label_1c2160;
        case 0x1c2164u: goto label_1c2164;
        case 0x1c2168u: goto label_1c2168;
        case 0x1c216cu: goto label_1c216c;
        case 0x1c2170u: goto label_1c2170;
        case 0x1c2174u: goto label_1c2174;
        case 0x1c2178u: goto label_1c2178;
        case 0x1c217cu: goto label_1c217c;
        default: break;
    }

    ctx->pc = 0x1c1e30u;

label_1c1e30:
    // 0x1c1e30: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1c1e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1c1e34:
    // 0x1c1e34: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c1e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1c1e38:
    // 0x1c1e38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e3c:
    // 0x1c1e3c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c1e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1c1e40:
    // 0x1c1e40: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1c1e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1c1e44:
    // 0x1c1e44: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1c1e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1c1e48:
    // 0x1c1e48: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1c1e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1c1e4c:
    // 0x1c1e4c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c1e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c1e50:
    // 0x1c1e50: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x1c1e50u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1c1e54:
    // 0x1c1e54: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x1c1e54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1c1e58:
    // 0x1c1e58: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1c1e58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1c1e5c:
    // 0x1c1e5c: 0xc06bc10  jal         func_1AF040
label_1c1e60:
    if (ctx->pc == 0x1C1E60u) {
        ctx->pc = 0x1C1E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E5Cu;
        // 0x1c1e60: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E64u;
        goto label_1c1e64;
    }
    ctx->pc = 0x1C1E5Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E64u);
    ctx->pc = 0x1C1E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E5Cu;
    // 0x1c1e60: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1C1E5Cu, 0x1C1E64u)) {
        return;
    }
    ctx->pc = 0x1C1E64u;
label_1c1e64:
    // 0x1c1e64: 0x8e2702b8  lw          $a3, 0x2B8($s1)
    ctx->pc = 0x1c1e64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
label_1c1e68:
    // 0x1c1e68: 0x8e250270  lw          $a1, 0x270($s1)
    ctx->pc = 0x1c1e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_1c1e6c:
    // 0x1c1e6c: 0x8ce20258  lw          $v0, 0x258($a3)
    ctx->pc = 0x1c1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 600)));
label_1c1e70:
    // 0x1c1e70: 0x8e26026c  lw          $a2, 0x26C($s1)
    ctx->pc = 0x1c1e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
label_1c1e74:
    // 0x1c1e74: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1c1e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1c1e78:
    // 0x1c1e78: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c1e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c1e7c:
    // 0x1c1e7c: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c1e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c1e80:
    // 0x1c1e80: 0xc5282a  slt         $a1, $a2, $a1
    ctx->pc = 0x1c1e80u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1c1e84:
    // 0x1c1e84: 0x60f809  jalr        $v1
label_1c1e88:
    if (ctx->pc == 0x1C1E88u) {
        ctx->pc = 0x1C1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E84u;
        // 0x1c1e88: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E8Cu;
        goto label_1c1e8c;
    }
    ctx->pc = 0x1C1E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C1E8Cu);
        ctx->pc = 0x1C1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E84u;
        // 0x1c1e88: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1E84u, 0x1C1E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1E8Cu;
label_1c1e8c:
    // 0x1c1e8c: 0x8e2602b4  lw          $a2, 0x2B4($s1)
    ctx->pc = 0x1c1e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
label_1c1e90:
    // 0x1c1e90: 0x8e25026c  lw          $a1, 0x26C($s1)
    ctx->pc = 0x1c1e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
label_1c1e94:
    // 0x1c1e94: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c1e98:
    // 0x1c1e98: 0x5282a  slt         $a1, $zero, $a1
    ctx->pc = 0x1c1e98u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1c1e9c:
    // 0x1c1e9c: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c1e9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c1ea0:
    // 0x1c1ea0: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c1ea4:
    // 0x1c1ea4: 0x60f809  jalr        $v1
label_1c1ea8:
    if (ctx->pc == 0x1C1EA8u) {
        ctx->pc = 0x1C1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EA4u;
        // 0x1c1ea8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1EACu;
        goto label_1c1eac;
    }
    ctx->pc = 0x1C1EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C1EACu);
        ctx->pc = 0x1C1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EA4u;
        // 0x1c1ea8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1EA4u, 0x1C1EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1EACu;
label_1c1eac:
    // 0x1c1eac: 0x8e220270  lw          $v0, 0x270($s1)
    ctx->pc = 0x1c1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_1c1eb0:
    // 0x1c1eb0: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_1c1eb4:
    if (ctx->pc == 0x1C1EB4u) {
        ctx->pc = 0x1C1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EB0u;
        // 0x1c1eb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1EB8u;
        goto label_1c1eb8;
    }
    ctx->pc = 0x1C1EB0u;
    {
        const bool branch_taken_0x1c1eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EB0u;
        // 0x1c1eb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1eb0) {
            ctx->pc = 0x1C20A8u;
            goto label_1c20a8;
        }
    }
    ctx->pc = 0x1C1EB8u;
label_1c1eb8:
    // 0x1c1eb8: 0x8e2602a4  lw          $a2, 0x2A4($s1)
    ctx->pc = 0x1c1eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
label_1c1ebc:
    // 0x1c1ebc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c1ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c1ec0:
    // 0x1c1ec0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1c1ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1c1ec4:
    // 0x1c1ec4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ec8:
    // 0x1c1ec8: 0x8cc30258  lw          $v1, 0x258($a2)
    ctx->pc = 0x1c1ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c1ecc:
    // 0x1c1ecc: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x1c1eccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c1ed0:
    // 0x1c1ed0: 0x2632027c  addiu       $s2, $s1, 0x27C
    ctx->pc = 0x1c1ed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 636));
label_1c1ed4:
    // 0x1c1ed4: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1c1ed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1c1ed8:
    // 0x1c1ed8: 0x8c6200fc  lw          $v0, 0xFC($v1)
    ctx->pc = 0x1c1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1c1edc:
    // 0x1c1edc: 0x40f809  jalr        $v0
label_1c1ee0:
    if (ctx->pc == 0x1C1EE0u) {
        ctx->pc = 0x1C1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EDCu;
        // 0x1c1ee0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1EE4u;
        goto label_1c1ee4;
    }
    ctx->pc = 0x1C1EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1EE4u);
        ctx->pc = 0x1C1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EDCu;
        // 0x1c1ee0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1EDCu, 0x1C1EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1EE4u;
label_1c1ee4:
    // 0x1c1ee4: 0x8e2602a8  lw          $a2, 0x2A8($s1)
    ctx->pc = 0x1c1ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_1c1ee8:
    // 0x1c1ee8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c1ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1eec:
    // 0x1c1eec: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c1ef0:
    // 0x1c1ef0: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c1ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c1ef4:
    // 0x1c1ef4: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c1ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c1ef8:
    // 0x1c1ef8: 0x60f809  jalr        $v1
label_1c1efc:
    if (ctx->pc == 0x1C1EFCu) {
        ctx->pc = 0x1C1EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EF8u;
        // 0x1c1efc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F00u;
        goto label_1c1f00;
    }
    ctx->pc = 0x1C1EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C1F00u);
        ctx->pc = 0x1C1EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EF8u;
        // 0x1c1efc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1EF8u, 0x1C1F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1F00u;
label_1c1f00:
    // 0x1c1f00: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1c1f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1c1f04:
    // 0x1c1f04: 0xc085ba8  jal         func_216EA0
label_1c1f08:
    if (ctx->pc == 0x1C1F08u) {
        ctx->pc = 0x1C1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F04u;
        // 0x1c1f08: 0x8c440144  lw          $a0, 0x144($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F0Cu;
        goto label_1c1f0c;
    }
    ctx->pc = 0x1C1F04u;
    SET_GPR_U32(ctx, 31, 0x1C1F0Cu);
    ctx->pc = 0x1C1F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F04u;
    // 0x1c1f08: 0x8c440144  lw          $a0, 0x144($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1C1F04u, 0x1C1F0Cu)) {
        return;
    }
    ctx->pc = 0x1C1F0Cu;
label_1c1f0c:
    // 0x1c1f0c: 0xc6360004  lwc1        $f22, 0x4($s1)
    ctx->pc = 0x1c1f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1c1f10:
    // 0x1c1f10: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c1f10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f14:
    // 0x1c1f14: 0x0  nop
    ctx->pc = 0x1c1f14u;
    // NOP
label_1c1f18:
    // 0x1c1f18: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1c1f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c1f1c:
    // 0x1c1f1c: 0x50a0005b  beql        $a1, $zero, . + 4 + (0x5B << 2)
label_1c1f20:
    if (ctx->pc == 0x1C1F20u) {
        ctx->pc = 0x1C1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F1Cu;
        // 0x1c1f20: 0xc6200278  lwc1        $f0, 0x278($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F24u;
        goto label_1c1f24;
    }
    ctx->pc = 0x1C1F1Cu;
    {
        const bool branch_taken_0x1c1f1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f1c) {
            ctx->pc = 0x1C1F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1F1Cu;
            // 0x1c1f20: 0xc6200278  lwc1        $f0, 0x278($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C208Cu;
            goto label_1c208c;
        }
    }
    ctx->pc = 0x1C1F24u;
label_1c1f24:
    // 0x1c1f24: 0x52600059  beql        $s3, $zero, . + 4 + (0x59 << 2)
label_1c1f28:
    if (ctx->pc == 0x1C1F28u) {
        ctx->pc = 0x1C1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F24u;
        // 0x1c1f28: 0xc6200278  lwc1        $f0, 0x278($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F2Cu;
        goto label_1c1f2c;
    }
    ctx->pc = 0x1C1F24u;
    {
        const bool branch_taken_0x1c1f24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f24) {
            ctx->pc = 0x1C1F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1F24u;
            // 0x1c1f28: 0xc6200278  lwc1        $f0, 0x278($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C208Cu;
            goto label_1c208c;
        }
    }
    ctx->pc = 0x1C1F2Cu;
label_1c1f2c:
    // 0x1c1f2c: 0xc62c0274  lwc1        $f12, 0x274($s1)
    ctx->pc = 0x1c1f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c1f30:
    // 0x1c1f30: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c1f30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1c1f34:
    // 0x1c1f34: 0xc085d2a  jal         func_2174A8
label_1c1f38:
    if (ctx->pc == 0x1C1F38u) {
        ctx->pc = 0x1C1F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F34u;
        // 0x1c1f38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F3Cu;
        goto label_1c1f3c;
    }
    ctx->pc = 0x1C1F34u;
    SET_GPR_U32(ctx, 31, 0x1C1F3Cu);
    ctx->pc = 0x1C1F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F34u;
    // 0x1c1f38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2174A8u, 0x1C1F34u, 0x1C1F3Cu)) {
        return;
    }
    ctx->pc = 0x1C1F3Cu;
label_1c1f3c:
    // 0x1c1f3c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1c1f3cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1c1f40:
    // 0x1c1f40: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1c1f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_1c1f44:
    // 0x1c1f44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c1f48:
    // 0x1c1f48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c1f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c1f4c:
    // 0x1c1f4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c1f50:
    // 0x1c1f50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c1f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f54:
    // 0x1c1f54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f58:
    // 0x1c1f58: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1c1f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c1f5c:
    // 0x1c1f5c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1c1f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1c1f60:
    // 0x1c1f60: 0xc0c493d  jal         func_3124F4
label_1c1f64:
    if (ctx->pc == 0x1C1F64u) {
        ctx->pc = 0x1C1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F60u;
        // 0x1c1f64: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F68u;
        goto label_1c1f68;
    }
    ctx->pc = 0x1C1F60u;
    SET_GPR_U32(ctx, 31, 0x1C1F68u);
    ctx->pc = 0x1C1F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F60u;
    // 0x1c1f64: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C1F60u, 0x1C1F68u)) {
        return;
    }
    ctx->pc = 0x1C1F68u;
label_1c1f68:
    // 0x1c1f68: 0xe7b60004  swc1        $f22, 0x4($sp)
    ctx->pc = 0x1c1f68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c1f6c:
    // 0x1c1f6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1c1f70:
    // 0x1c1f70: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c1f70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c1f74:
    // 0x1c1f74: 0x2446df28  addiu       $a2, $v0, -0x20D8
    ctx->pc = 0x1c1f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958888));
label_1c1f78:
    // 0x1c1f78: 0x88c30003  lwl         $v1, 0x3($a2)
    ctx->pc = 0x1c1f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_1c1f7c:
    // 0x1c1f7c: 0x98c30000  lwr         $v1, 0x0($a2)
    ctx->pc = 0x1c1f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_1c1f80:
    // 0x1c1f80: 0xaba30013  swl         $v1, 0x13($sp)
    ctx->pc = 0x1c1f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1c1f84:
    // 0x1c1f84: 0xbba30010  swr         $v1, 0x10($sp)
    ctx->pc = 0x1c1f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1c1f88:
    // 0x1c1f88: 0x16140003  bne         $s0, $s4, . + 4 + (0x3 << 2)
label_1c1f8c:
    if (ctx->pc == 0x1C1F8Cu) {
        ctx->pc = 0x1C1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F88u;
        // 0x1c1f8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F90u;
        goto label_1c1f90;
    }
    ctx->pc = 0x1C1F88u;
    {
        const bool branch_taken_0x1c1f88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x1C1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F88u;
        // 0x1c1f8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f88) {
            ctx->pc = 0x1C1F98u;
            goto label_1c1f98;
        }
    }
    ctx->pc = 0x1C1F90u;
label_1c1f90:
    // 0x1c1f90: 0x1000000c  b           . + 4 + (0xC << 2)
label_1c1f94:
    if (ctx->pc == 0x1C1F94u) {
        ctx->pc = 0x1C1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F90u;
        // 0x1c1f94: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F98u;
        goto label_1c1f98;
    }
    ctx->pc = 0x1C1F90u;
    {
        const bool branch_taken_0x1c1f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F90u;
        // 0x1c1f94: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f90) {
            ctx->pc = 0x1C1FC4u;
            goto label_1c1fc4;
        }
    }
    ctx->pc = 0x1C1F98u;
label_1c1f98:
    // 0x1c1f98: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_1c1f9c:
    if (ctx->pc == 0x1C1F9Cu) {
        ctx->pc = 0x1C1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F98u;
        // 0x1c1f9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FA0u;
        goto label_1c1fa0;
    }
    ctx->pc = 0x1C1F98u;
    {
        const bool branch_taken_0x1c1f98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F98u;
        // 0x1c1f9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f98) {
            ctx->pc = 0x1C1FA8u;
            goto label_1c1fa8;
        }
    }
    ctx->pc = 0x1C1FA0u;
label_1c1fa0:
    // 0x1c1fa0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_1c1fa4:
    if (ctx->pc == 0x1C1FA4u) {
        ctx->pc = 0x1C1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FA0u;
        // 0x1c1fa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FA8u;
        goto label_1c1fa8;
    }
    ctx->pc = 0x1C1FA0u;
    {
        const bool branch_taken_0x1c1fa0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FA0u;
        // 0x1c1fa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fa0) {
            ctx->pc = 0x1C1FB0u;
            goto label_1c1fb0;
        }
    }
    ctx->pc = 0x1C1FA8u;
label_1c1fa8:
    // 0x1c1fa8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c1fac:
    if (ctx->pc == 0x1C1FACu) {
        ctx->pc = 0x1C1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FA8u;
        // 0x1c1fac: 0x240200e4  addiu       $v0, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FB0u;
        goto label_1c1fb0;
    }
    ctx->pc = 0x1C1FA8u;
    {
        const bool branch_taken_0x1c1fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FA8u;
        // 0x1c1fac: 0x240200e4  addiu       $v0, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fa8) {
            ctx->pc = 0x1C1FC4u;
            goto label_1c1fc4;
        }
    }
    ctx->pc = 0x1C1FB0u;
label_1c1fb0:
    // 0x1c1fb0: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_1c1fb4:
    if (ctx->pc == 0x1C1FB4u) {
        ctx->pc = 0x1C1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FB0u;
        // 0x1c1fb4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FB8u;
        goto label_1c1fb8;
    }
    ctx->pc = 0x1C1FB0u;
    {
        const bool branch_taken_0x1c1fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FB0u;
        // 0x1c1fb4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fb0) {
            ctx->pc = 0x1C1FC0u;
            goto label_1c1fc0;
        }
    }
    ctx->pc = 0x1C1FB8u;
label_1c1fb8:
    // 0x1c1fb8: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
label_1c1fbc:
    if (ctx->pc == 0x1C1FBCu) {
        ctx->pc = 0x1C1FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FB8u;
        // 0x1c1fbc: 0x240200af  addiu       $v0, $zero, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FC0u;
        goto label_1c1fc0;
    }
    ctx->pc = 0x1C1FB8u;
    {
        const bool branch_taken_0x1c1fb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FB8u;
        // 0x1c1fbc: 0x240200af  addiu       $v0, $zero, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fb8) {
            ctx->pc = 0x1C1FC4u;
            goto label_1c1fc4;
        }
    }
    ctx->pc = 0x1C1FC0u;
label_1c1fc0:
    // 0x1c1fc0: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x1c1fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_1c1fc4:
    // 0x1c1fc4: 0xa3a20013  sb          $v0, 0x13($sp)
    ctx->pc = 0x1c1fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 2));
label_1c1fc8:
    // 0x1c1fc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c1fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c1fcc:
    // 0x1c1fcc: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1c1fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1c1fd0:
    // 0x1c1fd0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1c1fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c1fd4:
    // 0x1c1fd4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1c1fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_1c1fd8:
    // 0x1c1fd8: 0xe7b70040  swc1        $f23, 0x40($sp)
    ctx->pc = 0x1c1fd8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c1fdc:
    // 0x1c1fdc: 0xc06cda0  jal         func_1B3680
label_1c1fe0:
    if (ctx->pc == 0x1C1FE0u) {
        ctx->pc = 0x1C1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FDCu;
        // 0x1c1fe0: 0xe7b70044  swc1        $f23, 0x44($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FE4u;
        goto label_1c1fe4;
    }
    ctx->pc = 0x1C1FDCu;
    SET_GPR_U32(ctx, 31, 0x1C1FE4u);
    ctx->pc = 0x1C1FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FDCu;
    // 0x1c1fe0: 0xe7b70044  swc1        $f23, 0x44($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1C1FDCu, 0x1C1FE4u)) {
        return;
    }
    ctx->pc = 0x1C1FE4u;
label_1c1fe4:
    // 0x1c1fe4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c1fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c1fe8:
    // 0x1c1fe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1fec:
    // 0x1c1fec: 0xc0c493d  jal         func_3124F4
label_1c1ff0:
    if (ctx->pc == 0x1C1FF0u) {
        ctx->pc = 0x1C1FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FECu;
        // 0x1c1ff0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FF4u;
        goto label_1c1ff4;
    }
    ctx->pc = 0x1C1FECu;
    SET_GPR_U32(ctx, 31, 0x1C1FF4u);
    ctx->pc = 0x1C1FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FECu;
    // 0x1c1ff0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C1FECu, 0x1C1FF4u)) {
        return;
    }
    ctx->pc = 0x1C1FF4u;
label_1c1ff4:
    // 0x1c1ff4: 0xc6210274  lwc1        $f1, 0x274($s1)
    ctx->pc = 0x1c1ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c1ff8:
    // 0x1c1ff8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c1ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ffc:
    // 0x1c1ffc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1c1ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c2000:
    // 0x1c2000: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1c2000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c2004:
    // 0x1c2004: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1c2004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
label_1c2008:
    // 0x1c2008: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c2008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c200c:
    // 0x1c200c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1c200cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c2010:
    // 0x1c2010: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1c2010u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c2014:
    // 0x1c2014: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1c2014u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_1c2018:
    // 0x1c2018: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1c2018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1c201c:
    // 0x1c201c: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c201cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1c2020:
    // 0x1c2020: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1c2020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c2024:
    // 0x1c2024: 0x6ba90037  ldl         $t1, 0x37($sp)
    ctx->pc = 0x1c2024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1c2028:
    // 0x1c2028: 0x6fa90030  ldr         $t1, 0x30($sp)
    ctx->pc = 0x1c2028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1c202c:
    // 0x1c202c: 0x6baa003f  ldl         $t2, 0x3F($sp)
    ctx->pc = 0x1c202cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1c2030:
    // 0x1c2030: 0x6faa0038  ldr         $t2, 0x38($sp)
    ctx->pc = 0x1c2030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1c2034:
    // 0x1c2034: 0xb3a90027  sdl         $t1, 0x27($sp)
    ctx->pc = 0x1c2034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2038:
    // 0x1c2038: 0xb7a90020  sdr         $t1, 0x20($sp)
    ctx->pc = 0x1c2038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c203c:
    // 0x1c203c: 0xb3aa002f  sdl         $t2, 0x2F($sp)
    ctx->pc = 0x1c203cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2040:
    // 0x1c2040: 0xb7aa0028  sdr         $t2, 0x28($sp)
    ctx->pc = 0x1c2040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2044:
    // 0x1c2044: 0xc085cec  jal         func_2173B0
label_1c2048:
    if (ctx->pc == 0x1C2048u) {
        ctx->pc = 0x1C2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2044u;
        // 0x1c2048: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C204Cu;
        goto label_1c204c;
    }
    ctx->pc = 0x1C2044u;
    SET_GPR_U32(ctx, 31, 0x1C204Cu);
    ctx->pc = 0x1C2048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2044u;
    // 0x1c2048: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1C2044u, 0x1C204Cu)) {
        return;
    }
    ctx->pc = 0x1C204Cu;
label_1c204c:
    // 0x1c204c: 0x5614000f  bnel        $s0, $s4, . + 4 + (0xF << 2)
label_1c2050:
    if (ctx->pc == 0x1C2050u) {
        ctx->pc = 0x1C2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C204Cu;
        // 0x1c2050: 0xc6200278  lwc1        $f0, 0x278($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2054u;
        goto label_1c2054;
    }
    ctx->pc = 0x1C204Cu;
    {
        const bool branch_taken_0x1c204c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x1c204c) {
            ctx->pc = 0x1C2050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C204Cu;
            // 0x1c2050: 0xc6200278  lwc1        $f0, 0x278($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C208Cu;
            goto label_1c208c;
        }
    }
    ctx->pc = 0x1C2054u;
label_1c2054:
    // 0x1c2054: 0x8e2302a4  lw          $v1, 0x2A4($s1)
    ctx->pc = 0x1c2054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
label_1c2058:
    // 0x1c2058: 0x4615a040  add.s       $f1, $f20, $f21
    ctx->pc = 0x1c2058u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_1c205c:
    // 0x1c205c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1c205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c2060:
    // 0x1c2060: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1c2060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c2064:
    // 0x1c2064: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x1c2064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_1c2068:
    // 0x1c2068: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1c2068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c206c:
    // 0x1c206c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1c206cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c2070:
    // 0x1c2070: 0x8e2302a4  lw          $v1, 0x2A4($s1)
    ctx->pc = 0x1c2070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
label_1c2074:
    // 0x1c2074: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1c2074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c2078:
    // 0x1c2078: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1c2078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1c207c:
    // 0x1c207c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c207cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1c2080:
    // 0x1c2080: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x1c2080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_1c2084:
    // 0x1c2084: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1c2084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c2088:
    // 0x1c2088: 0xc6200278  lwc1        $f0, 0x278($s1)
    ctx->pc = 0x1c2088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c208c:
    // 0x1c208c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c208cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c2090:
    // 0x1c2090: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1c2090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1c2094:
    // 0x1c2094: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x1c2094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
label_1c2098:
    // 0x1c2098: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
label_1c209c:
    if (ctx->pc == 0x1C209Cu) {
        ctx->pc = 0x1C209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2098u;
        // 0x1c209c: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C20A0u;
        goto label_1c20a0;
    }
    ctx->pc = 0x1C2098u;
    {
        const bool branch_taken_0x1c2098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2098u;
        // 0x1c209c: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2098) {
            ctx->pc = 0x1C1F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1f18;
        }
    }
    ctx->pc = 0x1C20A0u;
label_1c20a0:
    // 0x1c20a0: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1c20a4:
    if (ctx->pc == 0x1C20A4u) {
        ctx->pc = 0x1C20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20A0u;
        // 0x1c20a4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C20A8u;
        goto label_1c20a8;
    }
    ctx->pc = 0x1C20A0u;
    {
        const bool branch_taken_0x1c20a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20A0u;
        // 0x1c20a4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20a0) {
            ctx->pc = 0x1C2154u;
            goto label_1c2154;
        }
    }
    ctx->pc = 0x1C20A8u;
label_1c20a8:
    // 0x1c20a8: 0x8e2602a4  lw          $a2, 0x2A4($s1)
    ctx->pc = 0x1c20a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
label_1c20ac:
    // 0x1c20ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c20b0:
    // 0x1c20b0: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c20b4:
    // 0x1c20b4: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c20b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c20b8:
    // 0x1c20b8: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c20b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c20bc:
    // 0x1c20bc: 0x60f809  jalr        $v1
label_1c20c0:
    if (ctx->pc == 0x1C20C0u) {
        ctx->pc = 0x1C20C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20BCu;
        // 0x1c20c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C20C4u;
        goto label_1c20c4;
    }
    ctx->pc = 0x1C20BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C20C4u);
        ctx->pc = 0x1C20C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20BCu;
        // 0x1c20c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C20BCu, 0x1C20C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C20C4u;
label_1c20c4:
    // 0x1c20c4: 0x8e2602a8  lw          $a2, 0x2A8($s1)
    ctx->pc = 0x1c20c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_1c20c8:
    // 0x1c20c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c20cc:
    // 0x1c20cc: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c20d0:
    // 0x1c20d0: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c20d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c20d4:
    // 0x1c20d4: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c20d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c20d8:
    // 0x1c20d8: 0x60f809  jalr        $v1
label_1c20dc:
    if (ctx->pc == 0x1C20DCu) {
        ctx->pc = 0x1C20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20D8u;
        // 0x1c20dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C20E0u;
        goto label_1c20e0;
    }
    ctx->pc = 0x1C20D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C20E0u);
        ctx->pc = 0x1C20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20D8u;
        // 0x1c20dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C20D8u, 0x1C20E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C20E0u;
label_1c20e0:
    // 0x1c20e0: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1c20e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1c20e4:
    // 0x1c20e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1c20e8:
    // 0x1c20e8: 0x2447ddf8  addiu       $a3, $v0, -0x2208
    ctx->pc = 0x1c20e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958584));
label_1c20ec:
    // 0x1c20ec: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1c20ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1c20f0:
    // 0x1c20f0: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1c20f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1c20f4:
    // 0x1c20f4: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1c20f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1c20f8:
    // 0x1c20f8: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1c20f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1c20fc:
    // 0x1c20fc: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1c20fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2100:
    // 0x1c2100: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1c2100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2104:
    // 0x1c2104: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1c2104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c2108:
    // 0x1c2108: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1c2108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1c210c:
    // 0x1c210c: 0xc085ba8  jal         func_216EA0
label_1c2110:
    if (ctx->pc == 0x1C2110u) {
        ctx->pc = 0x1C2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C210Cu;
        // 0x1c2110: 0x8c640144  lw          $a0, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2114u;
        goto label_1c2114;
    }
    ctx->pc = 0x1C210Cu;
    SET_GPR_U32(ctx, 31, 0x1C2114u);
    ctx->pc = 0x1C2110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C210Cu;
    // 0x1c2110: 0x8c640144  lw          $a0, 0x144($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1C210Cu, 0x1C2114u)) {
        return;
    }
    ctx->pc = 0x1C2114u;
label_1c2114:
    // 0x1c2114: 0x37a7000c  ori         $a3, $sp, 0xC
    ctx->pc = 0x1c2114u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_1c2118:
    // 0x1c2118: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c2118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c211c:
    // 0x1c211c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c2120:
    // 0x1c2120: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1c2120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_1c2124:
    // 0x1c2124: 0xc06cda0  jal         func_1B3680
label_1c2128:
    if (ctx->pc == 0x1C2128u) {
        ctx->pc = 0x1C2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2124u;
        // 0x1c2128: 0x37a60008  ori         $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C212Cu;
        goto label_1c212c;
    }
    ctx->pc = 0x1C2124u;
    SET_GPR_U32(ctx, 31, 0x1C212Cu);
    ctx->pc = 0x1C2128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2124u;
    // 0x1c2128: 0x37a60008  ori         $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3680u, 0x1C2124u, 0x1C212Cu)) {
        return;
    }
    ctx->pc = 0x1C212Cu;
label_1c212c:
    // 0x1c212c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1c212cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_1c2130:
    // 0x1c2130: 0x8e250298  lw          $a1, 0x298($s1)
    ctx->pc = 0x1c2130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
label_1c2134:
    // 0x1c2134: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1c2134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_1c2138:
    // 0x1c2138: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c2138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c213c:
    // 0x1c213c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c2140:
    // 0x1c2140: 0x24e7df28  addiu       $a3, $a3, -0x20D8
    ctx->pc = 0x1c2140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958888));
label_1c2144:
    // 0x1c2144: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c2144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c2148:
    // 0x1c2148: 0xc085cec  jal         func_2173B0
label_1c214c:
    if (ctx->pc == 0x1C214Cu) {
        ctx->pc = 0x1C214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2148u;
        // 0x1c214c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2150u;
        goto label_1c2150;
    }
    ctx->pc = 0x1C2148u;
    SET_GPR_U32(ctx, 31, 0x1C2150u);
    ctx->pc = 0x1C214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2148u;
    // 0x1c214c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1C2148u, 0x1C2150u)) {
        return;
    }
    ctx->pc = 0x1C2150u;
label_1c2150:
    // 0x1c2150: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c2150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c2154:
    // 0x1c2154: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c2154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c2158:
    // 0x1c2158: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1c2158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c215c:
    // 0x1c215c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1c215cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c2160:
    // 0x1c2160: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1c2160u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c2164:
    // 0x1c2164: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c2164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c2168:
    // 0x1c2168: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x1c2168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1c216c:
    // 0x1c216c: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x1c216cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1c2170:
    // 0x1c2170: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1c2170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c2174:
    // 0x1c2174: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1c2174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c2178:
    // 0x1c2178: 0x3e00008  jr          $ra
label_1c217c:
    if (ctx->pc == 0x1C217Cu) {
        ctx->pc = 0x1C217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2178u;
        // 0x1c217c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2180u;
        goto label_fallthrough_0x1c2178;
    }
    ctx->pc = 0x1C2178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2178u;
        // 0x1c217c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c2178:
    ctx->pc = 0x1C2180u;
}
