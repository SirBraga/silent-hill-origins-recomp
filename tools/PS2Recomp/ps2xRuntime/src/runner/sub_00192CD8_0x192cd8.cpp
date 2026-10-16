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

// Function: sub_00192CD8
// Address: 0x192cd8 - 0x193230
void sub_00192CD8_0x192cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192CD8_0x192cd8");
#endif

    switch (ctx->pc) {
        case 0x192d3cu: goto label_192d3c;
        case 0x192d5cu: goto label_192d5c;
        case 0x192d84u: goto label_192d84;
        case 0x192db0u: goto label_192db0;
        case 0x192ddcu: goto label_192ddc;
        case 0x192e08u: goto label_192e08;
        case 0x192e34u: goto label_192e34;
        case 0x192e60u: goto label_192e60;
        case 0x192e8cu: goto label_192e8c;
        case 0x192e9cu: goto label_192e9c;
        case 0x192ea4u: goto label_192ea4;
        case 0x192eacu: goto label_192eac;
        case 0x192eb4u: goto label_192eb4;
        case 0x192ebcu: goto label_192ebc;
        case 0x192ec4u: goto label_192ec4;
        case 0x192eccu: goto label_192ecc;
        case 0x192ed8u: goto label_192ed8;
        case 0x192ee4u: goto label_192ee4;
        case 0x192ef0u: goto label_192ef0;
        case 0x192efcu: goto label_192efc;
        case 0x192f08u: goto label_192f08;
        case 0x192f14u: goto label_192f14;
        case 0x192f20u: goto label_192f20;
        case 0x192f2cu: goto label_192f2c;
        case 0x192f38u: goto label_192f38;
        case 0x192f44u: goto label_192f44;
        case 0x192f50u: goto label_192f50;
        case 0x192f5cu: goto label_192f5c;
        case 0x192f68u: goto label_192f68;
        case 0x192f74u: goto label_192f74;
        case 0x192f80u: goto label_192f80;
        case 0x192f8cu: goto label_192f8c;
        case 0x192f98u: goto label_192f98;
        case 0x192fa4u: goto label_192fa4;
        case 0x192fb0u: goto label_192fb0;
        case 0x192fbcu: goto label_192fbc;
        case 0x192fc8u: goto label_192fc8;
        case 0x192fd4u: goto label_192fd4;
        case 0x192fe0u: goto label_192fe0;
        case 0x192fecu: goto label_192fec;
        case 0x192ff4u: goto label_192ff4;
        case 0x192ffcu: goto label_192ffc;
        case 0x193004u: goto label_193004;
        case 0x19300cu: goto label_19300c;
        case 0x193014u: goto label_193014;
        case 0x19301cu: goto label_19301c;
        case 0x193024u: goto label_193024;
        case 0x19302cu: goto label_19302c;
        case 0x193034u: goto label_193034;
        case 0x19303cu: goto label_19303c;
        case 0x193044u: goto label_193044;
        case 0x19304cu: goto label_19304c;
        case 0x193054u: goto label_193054;
        case 0x19305cu: goto label_19305c;
        case 0x193064u: goto label_193064;
        case 0x19306cu: goto label_19306c;
        case 0x193074u: goto label_193074;
        case 0x19307cu: goto label_19307c;
        case 0x193084u: goto label_193084;
        case 0x19308cu: goto label_19308c;
        case 0x193094u: goto label_193094;
        case 0x19309cu: goto label_19309c;
        case 0x1930a4u: goto label_1930a4;
        case 0x1930acu: goto label_1930ac;
        case 0x1930c0u: goto label_1930c0;
        case 0x1930c8u: goto label_1930c8;
        case 0x1930d4u: goto label_1930d4;
        case 0x1930e0u: goto label_1930e0;
        case 0x1930ecu: goto label_1930ec;
        case 0x1930f8u: goto label_1930f8;
        case 0x193104u: goto label_193104;
        case 0x193110u: goto label_193110;
        case 0x19311cu: goto label_19311c;
        case 0x193128u: goto label_193128;
        case 0x193134u: goto label_193134;
        case 0x193140u: goto label_193140;
        case 0x19314cu: goto label_19314c;
        case 0x193158u: goto label_193158;
        case 0x193164u: goto label_193164;
        case 0x193170u: goto label_193170;
        case 0x19317cu: goto label_19317c;
        case 0x193188u: goto label_193188;
        case 0x193194u: goto label_193194;
        case 0x1931a0u: goto label_1931a0;
        case 0x1931acu: goto label_1931ac;
        case 0x1931b8u: goto label_1931b8;
        case 0x1931c4u: goto label_1931c4;
        case 0x1931d0u: goto label_1931d0;
        case 0x1931dcu: goto label_1931dc;
        case 0x1931e8u: goto label_1931e8;
        case 0x1931f4u: goto label_1931f4;
        case 0x193200u: goto label_193200;
        default: break;
    }

    ctx->pc = 0x192cd8u;

    // 0x192cd8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x192cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x192cdc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x192cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x192ce0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x192ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x192ce4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x192ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x192ce8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x192ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x192cec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x192cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cf0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x192cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x192cf4: 0x246398e0  addiu       $v1, $v1, -0x6720
    ctx->pc = 0x192cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940896));
    // 0x192cf8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x192cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x192cfc: 0x26510038  addiu       $s1, $s2, 0x38
    ctx->pc = 0x192cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x192d00: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x192d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x192d04: 0x24429928  addiu       $v0, $v0, -0x66D8
    ctx->pc = 0x192d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940968));
    // 0x192d08: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x192d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x192d0c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x192d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x192d10: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x192d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x192d14: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x192d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x192d18: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x192d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x192d1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d20: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x192d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x192d24: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x192d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x192d28: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x192d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x192d2c: 0x265e0134  addiu       $fp, $s2, 0x134
    ctx->pc = 0x192d2cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 308));
    // 0x192d30: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x192d30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x192d34: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192D34u;
    SET_GPR_U32(ctx, 31, 0x192D3Cu);
    ctx->pc = 0x192D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D34u;
    // 0x192d38: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192D34u, 0x192D3Cu)) {
        return;
    }
    ctx->pc = 0x192D3Cu;
label_192d3c:
    // 0x192d3c: 0x26420074  addiu       $v0, $s2, 0x74
    ctx->pc = 0x192d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    // 0x192d40: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x192d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x192d44: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x192d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x192d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d4c: 0x2642007c  addiu       $v0, $s2, 0x7C
    ctx->pc = 0x192d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
    // 0x192d50: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x192d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x192d54: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192D54u;
    SET_GPR_U32(ctx, 31, 0x192D5Cu);
    ctx->pc = 0x192D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D54u;
    // 0x192d58: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192D54u, 0x192D5Cu)) {
        return;
    }
    ctx->pc = 0x192D5Cu;
label_192d5c:
    // 0x192d5c: 0x26420084  addiu       $v0, $s2, 0x84
    ctx->pc = 0x192d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
    // 0x192d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d64: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x192d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x192d68: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x192d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x192d6c: 0x24a5bdb8  addiu       $a1, $a1, -0x4248
    ctx->pc = 0x192d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950328));
    // 0x192d70: 0x2642008c  addiu       $v0, $s2, 0x8C
    ctx->pc = 0x192d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
    // 0x192d74: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x192d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x192d78: 0x26420094  addiu       $v0, $s2, 0x94
    ctx->pc = 0x192d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
    // 0x192d7c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192D7Cu;
    SET_GPR_U32(ctx, 31, 0x192D84u);
    ctx->pc = 0x192D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D7Cu;
    // 0x192d80: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192D7Cu, 0x192D84u)) {
        return;
    }
    ctx->pc = 0x192D84u;
label_192d84:
    // 0x192d84: 0x2642009c  addiu       $v0, $s2, 0x9C
    ctx->pc = 0x192d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
    // 0x192d88: 0x3c17006d  lui         $s7, 0x6D
    ctx->pc = 0x192d88u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)109 << 16));
    // 0x192d8c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x192d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x192d90: 0x26f7bdc0  addiu       $s7, $s7, -0x4240
    ctx->pc = 0x192d90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950336));
    // 0x192d94: 0x264200a4  addiu       $v0, $s2, 0xA4
    ctx->pc = 0x192d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 164));
    // 0x192d98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d9c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x192d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x192da0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x192da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192da4: 0x264200ac  addiu       $v0, $s2, 0xAC
    ctx->pc = 0x192da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
    // 0x192da8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192DA8u;
    SET_GPR_U32(ctx, 31, 0x192DB0u);
    ctx->pc = 0x192DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192DA8u;
    // 0x192dac: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192DA8u, 0x192DB0u)) {
        return;
    }
    ctx->pc = 0x192DB0u;
label_192db0:
    // 0x192db0: 0x264200b4  addiu       $v0, $s2, 0xB4
    ctx->pc = 0x192db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
    // 0x192db4: 0x3c16006d  lui         $s6, 0x6D
    ctx->pc = 0x192db4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)109 << 16));
    // 0x192db8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x192db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x192dbc: 0x26d6bdc8  addiu       $s6, $s6, -0x4238
    ctx->pc = 0x192dbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950344));
    // 0x192dc0: 0x264200bc  addiu       $v0, $s2, 0xBC
    ctx->pc = 0x192dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 188));
    // 0x192dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192dc8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x192dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x192dcc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x192dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192dd0: 0x264200c4  addiu       $v0, $s2, 0xC4
    ctx->pc = 0x192dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    // 0x192dd4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192DD4u;
    SET_GPR_U32(ctx, 31, 0x192DDCu);
    ctx->pc = 0x192DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192DD4u;
    // 0x192dd8: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192DD4u, 0x192DDCu)) {
        return;
    }
    ctx->pc = 0x192DDCu;
label_192ddc:
    // 0x192ddc: 0x264200cc  addiu       $v0, $s2, 0xCC
    ctx->pc = 0x192ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 204));
    // 0x192de0: 0x3c15006d  lui         $s5, 0x6D
    ctx->pc = 0x192de0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)109 << 16));
    // 0x192de4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x192de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x192de8: 0x26b5bdd0  addiu       $s5, $s5, -0x4230
    ctx->pc = 0x192de8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950352));
    // 0x192dec: 0x264200e4  addiu       $v0, $s2, 0xE4
    ctx->pc = 0x192decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 228));
    // 0x192df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192df4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x192df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x192df8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x192df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192dfc: 0x264200ec  addiu       $v0, $s2, 0xEC
    ctx->pc = 0x192dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 236));
    // 0x192e00: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192E00u;
    SET_GPR_U32(ctx, 31, 0x192E08u);
    ctx->pc = 0x192E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E00u;
    // 0x192e04: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192E00u, 0x192E08u)) {
        return;
    }
    ctx->pc = 0x192E08u;
label_192e08:
    // 0x192e08: 0x264200f4  addiu       $v0, $s2, 0xF4
    ctx->pc = 0x192e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 244));
    // 0x192e0c: 0x3c14006d  lui         $s4, 0x6D
    ctx->pc = 0x192e0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)109 << 16));
    // 0x192e10: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x192e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x192e14: 0x2694bdd8  addiu       $s4, $s4, -0x4228
    ctx->pc = 0x192e14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950360));
    // 0x192e18: 0x264200fc  addiu       $v0, $s2, 0xFC
    ctx->pc = 0x192e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 252));
    // 0x192e1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e20: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x192e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x192e24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x192e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e28: 0x26420104  addiu       $v0, $s2, 0x104
    ctx->pc = 0x192e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x192e2c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192E2Cu;
    SET_GPR_U32(ctx, 31, 0x192E34u);
    ctx->pc = 0x192E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E2Cu;
    // 0x192e30: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192E2Cu, 0x192E34u)) {
        return;
    }
    ctx->pc = 0x192E34u;
label_192e34:
    // 0x192e34: 0x2642010c  addiu       $v0, $s2, 0x10C
    ctx->pc = 0x192e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 268));
    // 0x192e38: 0x3c13006d  lui         $s3, 0x6D
    ctx->pc = 0x192e38u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)109 << 16));
    // 0x192e3c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x192e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x192e40: 0x2673bde0  addiu       $s3, $s3, -0x4220
    ctx->pc = 0x192e40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950368));
    // 0x192e44: 0x26420114  addiu       $v0, $s2, 0x114
    ctx->pc = 0x192e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 276));
    // 0x192e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e4c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x192e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x192e50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x192e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e54: 0x2642011c  addiu       $v0, $s2, 0x11C
    ctx->pc = 0x192e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 284));
    // 0x192e58: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192E58u;
    SET_GPR_U32(ctx, 31, 0x192E60u);
    ctx->pc = 0x192E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E58u;
    // 0x192e5c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192E58u, 0x192E60u)) {
        return;
    }
    ctx->pc = 0x192E60u;
label_192e60:
    // 0x192e60: 0x264200d4  addiu       $v0, $s2, 0xD4
    ctx->pc = 0x192e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 212));
    // 0x192e64: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x192e64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x192e68: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x192e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x192e6c: 0x2610bde8  addiu       $s0, $s0, -0x4218
    ctx->pc = 0x192e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950376));
    // 0x192e70: 0x26420124  addiu       $v0, $s2, 0x124
    ctx->pc = 0x192e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
    // 0x192e74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x192e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e78: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x192e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x192e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e80: 0x2642012c  addiu       $v0, $s2, 0x12C
    ctx->pc = 0x192e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 300));
    // 0x192e84: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192E84u;
    SET_GPR_U32(ctx, 31, 0x192E8Cu);
    ctx->pc = 0x192E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E84u;
    // 0x192e88: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192E84u, 0x192E8Cu)) {
        return;
    }
    ctx->pc = 0x192E8Cu;
label_192e8c:
    // 0x192e8c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x192e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x192e90: 0x2484bdb8  addiu       $a0, $a0, -0x4248
    ctx->pc = 0x192e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950328));
    // 0x192e94: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x192E94u;
    SET_GPR_U32(ctx, 31, 0x192E9Cu);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x192E94u, 0x192E9Cu)) {
        return;
    }
    ctx->pc = 0x192E9Cu;
label_192e9c:
    // 0x192e9c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x192E9Cu;
    SET_GPR_U32(ctx, 31, 0x192EA4u);
    ctx->pc = 0x192EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E9Cu;
    // 0x192ea0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x192E9Cu, 0x192EA4u)) {
        return;
    }
    ctx->pc = 0x192EA4u;
label_192ea4:
    // 0x192ea4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x192EA4u;
    SET_GPR_U32(ctx, 31, 0x192EACu);
    ctx->pc = 0x192EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192EA4u;
    // 0x192ea8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x192EA4u, 0x192EACu)) {
        return;
    }
    ctx->pc = 0x192EACu;
label_192eac:
    // 0x192eac: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x192EACu;
    SET_GPR_U32(ctx, 31, 0x192EB4u);
    ctx->pc = 0x192EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192EACu;
    // 0x192eb0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x192EACu, 0x192EB4u)) {
        return;
    }
    ctx->pc = 0x192EB4u;
label_192eb4:
    // 0x192eb4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x192EB4u;
    SET_GPR_U32(ctx, 31, 0x192EBCu);
    ctx->pc = 0x192EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192EB4u;
    // 0x192eb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x192EB4u, 0x192EBCu)) {
        return;
    }
    ctx->pc = 0x192EBCu;
label_192ebc:
    // 0x192ebc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x192EBCu;
    SET_GPR_U32(ctx, 31, 0x192EC4u);
    ctx->pc = 0x192EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192EBCu;
    // 0x192ec0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x192EBCu, 0x192EC4u)) {
        return;
    }
    ctx->pc = 0x192EC4u;
label_192ec4:
    // 0x192ec4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x192EC4u;
    SET_GPR_U32(ctx, 31, 0x192ECCu);
    ctx->pc = 0x192EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192EC4u;
    // 0x192ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x192EC4u, 0x192ECCu)) {
        return;
    }
    ctx->pc = 0x192ECCu;
label_192ecc:
    // 0x192ecc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x192eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x192ed0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192ED0u;
    SET_GPR_U32(ctx, 31, 0x192ED8u);
    ctx->pc = 0x192ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192ED0u;
    // 0x192ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192ED0u, 0x192ED8u)) {
        return;
    }
    ctx->pc = 0x192ED8u;
label_192ed8:
    // 0x192ed8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x192ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192edc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192EDCu;
    SET_GPR_U32(ctx, 31, 0x192EE4u);
    ctx->pc = 0x192EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192EDCu;
    // 0x192ee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192EDCu, 0x192EE4u)) {
        return;
    }
    ctx->pc = 0x192EE4u;
label_192ee4:
    // 0x192ee4: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x192ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x192ee8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192EE8u;
    SET_GPR_U32(ctx, 31, 0x192EF0u);
    ctx->pc = 0x192EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192EE8u;
    // 0x192eec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192EE8u, 0x192EF0u)) {
        return;
    }
    ctx->pc = 0x192EF0u;
label_192ef0:
    // 0x192ef0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x192ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192ef4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192EF4u;
    SET_GPR_U32(ctx, 31, 0x192EFCu);
    ctx->pc = 0x192EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192EF4u;
    // 0x192ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192EF4u, 0x192EFCu)) {
        return;
    }
    ctx->pc = 0x192EFCu;
label_192efc:
    // 0x192efc: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x192efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x192f00: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192F00u;
    SET_GPR_U32(ctx, 31, 0x192F08u);
    ctx->pc = 0x192F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F00u;
    // 0x192f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192F00u, 0x192F08u)) {
        return;
    }
    ctx->pc = 0x192F08u;
label_192f08:
    // 0x192f08: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x192f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x192f0c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192F0Cu;
    SET_GPR_U32(ctx, 31, 0x192F14u);
    ctx->pc = 0x192F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F0Cu;
    // 0x192f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192F0Cu, 0x192F14u)) {
        return;
    }
    ctx->pc = 0x192F14u;
label_192f14:
    // 0x192f14: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x192f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x192f18: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192F18u;
    SET_GPR_U32(ctx, 31, 0x192F20u);
    ctx->pc = 0x192F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F18u;
    // 0x192f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192F18u, 0x192F20u)) {
        return;
    }
    ctx->pc = 0x192F20u;
label_192f20:
    // 0x192f20: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x192f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192f24: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192F24u;
    SET_GPR_U32(ctx, 31, 0x192F2Cu);
    ctx->pc = 0x192F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F24u;
    // 0x192f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192F24u, 0x192F2Cu)) {
        return;
    }
    ctx->pc = 0x192F2Cu;
label_192f2c:
    // 0x192f2c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x192f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x192f30: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192F30u;
    SET_GPR_U32(ctx, 31, 0x192F38u);
    ctx->pc = 0x192F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F30u;
    // 0x192f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192F30u, 0x192F38u)) {
        return;
    }
    ctx->pc = 0x192F38u;
label_192f38:
    // 0x192f38: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x192f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x192f3c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192F3Cu;
    SET_GPR_U32(ctx, 31, 0x192F44u);
    ctx->pc = 0x192F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F3Cu;
    // 0x192f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192F3Cu, 0x192F44u)) {
        return;
    }
    ctx->pc = 0x192F44u;
label_192f44:
    // 0x192f44: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x192f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x192f48: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192F48u;
    SET_GPR_U32(ctx, 31, 0x192F50u);
    ctx->pc = 0x192F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F48u;
    // 0x192f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192F48u, 0x192F50u)) {
        return;
    }
    ctx->pc = 0x192F50u;
label_192f50:
    // 0x192f50: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x192f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192f54: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192F54u;
    SET_GPR_U32(ctx, 31, 0x192F5Cu);
    ctx->pc = 0x192F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F54u;
    // 0x192f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192F54u, 0x192F5Cu)) {
        return;
    }
    ctx->pc = 0x192F5Cu;
label_192f5c:
    // 0x192f5c: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x192f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x192f60: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192F60u;
    SET_GPR_U32(ctx, 31, 0x192F68u);
    ctx->pc = 0x192F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F60u;
    // 0x192f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192F60u, 0x192F68u)) {
        return;
    }
    ctx->pc = 0x192F68u;
label_192f68:
    // 0x192f68: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x192f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x192f6c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192F6Cu;
    SET_GPR_U32(ctx, 31, 0x192F74u);
    ctx->pc = 0x192F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F6Cu;
    // 0x192f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192F6Cu, 0x192F74u)) {
        return;
    }
    ctx->pc = 0x192F74u;
label_192f74:
    // 0x192f74: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x192f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x192f78: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192F78u;
    SET_GPR_U32(ctx, 31, 0x192F80u);
    ctx->pc = 0x192F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F78u;
    // 0x192f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192F78u, 0x192F80u)) {
        return;
    }
    ctx->pc = 0x192F80u;
label_192f80:
    // 0x192f80: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x192f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192f84: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192F84u;
    SET_GPR_U32(ctx, 31, 0x192F8Cu);
    ctx->pc = 0x192F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F84u;
    // 0x192f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192F84u, 0x192F8Cu)) {
        return;
    }
    ctx->pc = 0x192F8Cu;
label_192f8c:
    // 0x192f8c: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x192f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x192f90: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192F90u;
    SET_GPR_U32(ctx, 31, 0x192F98u);
    ctx->pc = 0x192F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F90u;
    // 0x192f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192F90u, 0x192F98u)) {
        return;
    }
    ctx->pc = 0x192F98u;
label_192f98:
    // 0x192f98: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x192f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x192f9c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192F9Cu;
    SET_GPR_U32(ctx, 31, 0x192FA4u);
    ctx->pc = 0x192FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F9Cu;
    // 0x192fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192F9Cu, 0x192FA4u)) {
        return;
    }
    ctx->pc = 0x192FA4u;
label_192fa4:
    // 0x192fa4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x192fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x192fa8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192FA8u;
    SET_GPR_U32(ctx, 31, 0x192FB0u);
    ctx->pc = 0x192FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FA8u;
    // 0x192fac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192FA8u, 0x192FB0u)) {
        return;
    }
    ctx->pc = 0x192FB0u;
label_192fb0:
    // 0x192fb0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x192fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192fb4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192FB4u;
    SET_GPR_U32(ctx, 31, 0x192FBCu);
    ctx->pc = 0x192FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FB4u;
    // 0x192fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192FB4u, 0x192FBCu)) {
        return;
    }
    ctx->pc = 0x192FBCu;
label_192fbc:
    // 0x192fbc: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x192fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x192fc0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192FC0u;
    SET_GPR_U32(ctx, 31, 0x192FC8u);
    ctx->pc = 0x192FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FC0u;
    // 0x192fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192FC0u, 0x192FC8u)) {
        return;
    }
    ctx->pc = 0x192FC8u;
label_192fc8:
    // 0x192fc8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x192fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x192fcc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192FCCu;
    SET_GPR_U32(ctx, 31, 0x192FD4u);
    ctx->pc = 0x192FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FCCu;
    // 0x192fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192FCCu, 0x192FD4u)) {
        return;
    }
    ctx->pc = 0x192FD4u;
label_192fd4:
    // 0x192fd4: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x192fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x192fd8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192FD8u;
    SET_GPR_U32(ctx, 31, 0x192FE0u);
    ctx->pc = 0x192FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FD8u;
    // 0x192fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192FD8u, 0x192FE0u)) {
        return;
    }
    ctx->pc = 0x192FE0u;
label_192fe0:
    // 0x192fe0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x192fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fe4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x192FE4u;
    SET_GPR_U32(ctx, 31, 0x192FECu);
    ctx->pc = 0x192FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FE4u;
    // 0x192fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x192FE4u, 0x192FECu)) {
        return;
    }
    ctx->pc = 0x192FECu;
label_192fec:
    // 0x192fec: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x192FECu;
    SET_GPR_U32(ctx, 31, 0x192FF4u);
    ctx->pc = 0x192FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FECu;
    // 0x192ff0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x192FECu, 0x192FF4u)) {
        return;
    }
    ctx->pc = 0x192FF4u;
label_192ff4:
    // 0x192ff4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x192FF4u;
    SET_GPR_U32(ctx, 31, 0x192FFCu);
    ctx->pc = 0x192FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FF4u;
    // 0x192ff8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x192FF4u, 0x192FFCu)) {
        return;
    }
    ctx->pc = 0x192FFCu;
label_192ffc:
    // 0x192ffc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x192FFCu;
    SET_GPR_U32(ctx, 31, 0x193004u);
    ctx->pc = 0x193000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FFCu;
    // 0x193000: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x192FFCu, 0x193004u)) {
        return;
    }
    ctx->pc = 0x193004u;
label_193004:
    // 0x193004: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x193004u;
    SET_GPR_U32(ctx, 31, 0x19300Cu);
    ctx->pc = 0x193008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193004u;
    // 0x193008: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x193004u, 0x19300Cu)) {
        return;
    }
    ctx->pc = 0x19300Cu;
label_19300c:
    // 0x19300c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19300Cu;
    SET_GPR_U32(ctx, 31, 0x193014u);
    ctx->pc = 0x193010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19300Cu;
    // 0x193010: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19300Cu, 0x193014u)) {
        return;
    }
    ctx->pc = 0x193014u;
label_193014:
    // 0x193014: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x193014u;
    SET_GPR_U32(ctx, 31, 0x19301Cu);
    ctx->pc = 0x193018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193014u;
    // 0x193018: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x193014u, 0x19301Cu)) {
        return;
    }
    ctx->pc = 0x19301Cu;
label_19301c:
    // 0x19301c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19301Cu;
    SET_GPR_U32(ctx, 31, 0x193024u);
    ctx->pc = 0x193020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19301Cu;
    // 0x193020: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19301Cu, 0x193024u)) {
        return;
    }
    ctx->pc = 0x193024u;
label_193024:
    // 0x193024: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x193024u;
    SET_GPR_U32(ctx, 31, 0x19302Cu);
    ctx->pc = 0x193028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193024u;
    // 0x193028: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x193024u, 0x19302Cu)) {
        return;
    }
    ctx->pc = 0x19302Cu;
label_19302c:
    // 0x19302c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19302Cu;
    SET_GPR_U32(ctx, 31, 0x193034u);
    ctx->pc = 0x193030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19302Cu;
    // 0x193030: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19302Cu, 0x193034u)) {
        return;
    }
    ctx->pc = 0x193034u;
label_193034:
    // 0x193034: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x193034u;
    SET_GPR_U32(ctx, 31, 0x19303Cu);
    ctx->pc = 0x193038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193034u;
    // 0x193038: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x193034u, 0x19303Cu)) {
        return;
    }
    ctx->pc = 0x19303Cu;
label_19303c:
    // 0x19303c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19303Cu;
    SET_GPR_U32(ctx, 31, 0x193044u);
    ctx->pc = 0x193040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19303Cu;
    // 0x193040: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19303Cu, 0x193044u)) {
        return;
    }
    ctx->pc = 0x193044u;
label_193044:
    // 0x193044: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x193044u;
    SET_GPR_U32(ctx, 31, 0x19304Cu);
    ctx->pc = 0x193048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193044u;
    // 0x193048: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x193044u, 0x19304Cu)) {
        return;
    }
    ctx->pc = 0x19304Cu;
label_19304c:
    // 0x19304c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19304Cu;
    SET_GPR_U32(ctx, 31, 0x193054u);
    ctx->pc = 0x193050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19304Cu;
    // 0x193050: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19304Cu, 0x193054u)) {
        return;
    }
    ctx->pc = 0x193054u;
label_193054:
    // 0x193054: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x193054u;
    SET_GPR_U32(ctx, 31, 0x19305Cu);
    ctx->pc = 0x193058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193054u;
    // 0x193058: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x193054u, 0x19305Cu)) {
        return;
    }
    ctx->pc = 0x19305Cu;
label_19305c:
    // 0x19305c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19305Cu;
    SET_GPR_U32(ctx, 31, 0x193064u);
    ctx->pc = 0x193060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19305Cu;
    // 0x193060: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19305Cu, 0x193064u)) {
        return;
    }
    ctx->pc = 0x193064u;
label_193064:
    // 0x193064: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x193064u;
    SET_GPR_U32(ctx, 31, 0x19306Cu);
    ctx->pc = 0x193068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193064u;
    // 0x193068: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x193064u, 0x19306Cu)) {
        return;
    }
    ctx->pc = 0x19306Cu;
label_19306c:
    // 0x19306c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19306Cu;
    SET_GPR_U32(ctx, 31, 0x193074u);
    ctx->pc = 0x193070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19306Cu;
    // 0x193070: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19306Cu, 0x193074u)) {
        return;
    }
    ctx->pc = 0x193074u;
label_193074:
    // 0x193074: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x193074u;
    SET_GPR_U32(ctx, 31, 0x19307Cu);
    ctx->pc = 0x193078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193074u;
    // 0x193078: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x193074u, 0x19307Cu)) {
        return;
    }
    ctx->pc = 0x19307Cu;
label_19307c:
    // 0x19307c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19307Cu;
    SET_GPR_U32(ctx, 31, 0x193084u);
    ctx->pc = 0x193080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19307Cu;
    // 0x193080: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19307Cu, 0x193084u)) {
        return;
    }
    ctx->pc = 0x193084u;
label_193084:
    // 0x193084: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x193084u;
    SET_GPR_U32(ctx, 31, 0x19308Cu);
    ctx->pc = 0x193088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193084u;
    // 0x193088: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x193084u, 0x19308Cu)) {
        return;
    }
    ctx->pc = 0x19308Cu;
label_19308c:
    // 0x19308c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19308Cu;
    SET_GPR_U32(ctx, 31, 0x193094u);
    ctx->pc = 0x193090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19308Cu;
    // 0x193090: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19308Cu, 0x193094u)) {
        return;
    }
    ctx->pc = 0x193094u;
label_193094:
    // 0x193094: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x193094u;
    SET_GPR_U32(ctx, 31, 0x19309Cu);
    ctx->pc = 0x193098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193094u;
    // 0x193098: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x193094u, 0x19309Cu)) {
        return;
    }
    ctx->pc = 0x19309Cu;
label_19309c:
    // 0x19309c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19309Cu;
    SET_GPR_U32(ctx, 31, 0x1930A4u);
    ctx->pc = 0x1930A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19309Cu;
    // 0x1930a0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19309Cu, 0x1930A4u)) {
        return;
    }
    ctx->pc = 0x1930A4u;
label_1930a4:
    // 0x1930a4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1930A4u;
    SET_GPR_U32(ctx, 31, 0x1930ACu);
    ctx->pc = 0x1930A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1930A4u;
    // 0x1930a8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1930A4u, 0x1930ACu)) {
        return;
    }
    ctx->pc = 0x1930ACu;
label_1930ac:
    // 0x1930ac: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x1930acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x1930b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1930b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1930b4: 0x2610bda8  addiu       $s0, $s0, -0x4258
    ctx->pc = 0x1930b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950312));
    // 0x1930b8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1930B8u;
    SET_GPR_U32(ctx, 31, 0x1930C0u);
    ctx->pc = 0x1930BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1930B8u;
    // 0x1930bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1930B8u, 0x1930C0u)) {
        return;
    }
    ctx->pc = 0x1930C0u;
label_1930c0:
    // 0x1930c0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1930C0u;
    SET_GPR_U32(ctx, 31, 0x1930C8u);
    ctx->pc = 0x1930C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1930C0u;
    // 0x1930c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1930C0u, 0x1930C8u)) {
        return;
    }
    ctx->pc = 0x1930C8u;
label_1930c8:
    // 0x1930c8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1930c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1930cc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1930CCu;
    SET_GPR_U32(ctx, 31, 0x1930D4u);
    ctx->pc = 0x1930D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1930CCu;
    // 0x1930d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1930CCu, 0x1930D4u)) {
        return;
    }
    ctx->pc = 0x1930D4u;
label_1930d4:
    // 0x1930d4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1930d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1930d8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1930D8u;
    SET_GPR_U32(ctx, 31, 0x1930E0u);
    ctx->pc = 0x1930DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1930D8u;
    // 0x1930dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1930D8u, 0x1930E0u)) {
        return;
    }
    ctx->pc = 0x1930E0u;
label_1930e0:
    // 0x1930e0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1930e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1930e4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1930E4u;
    SET_GPR_U32(ctx, 31, 0x1930ECu);
    ctx->pc = 0x1930E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1930E4u;
    // 0x1930e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1930E4u, 0x1930ECu)) {
        return;
    }
    ctx->pc = 0x1930ECu;
label_1930ec:
    // 0x1930ec: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1930ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1930f0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1930F0u;
    SET_GPR_U32(ctx, 31, 0x1930F8u);
    ctx->pc = 0x1930F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1930F0u;
    // 0x1930f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1930F0u, 0x1930F8u)) {
        return;
    }
    ctx->pc = 0x1930F8u;
label_1930f8:
    // 0x1930f8: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1930f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1930fc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1930FCu;
    SET_GPR_U32(ctx, 31, 0x193104u);
    ctx->pc = 0x193100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1930FCu;
    // 0x193100: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1930FCu, 0x193104u)) {
        return;
    }
    ctx->pc = 0x193104u;
label_193104:
    // 0x193104: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x193104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x193108: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x193108u;
    SET_GPR_U32(ctx, 31, 0x193110u);
    ctx->pc = 0x19310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193108u;
    // 0x19310c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x193108u, 0x193110u)) {
        return;
    }
    ctx->pc = 0x193110u;
label_193110:
    // 0x193110: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x193110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x193114: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x193114u;
    SET_GPR_U32(ctx, 31, 0x19311Cu);
    ctx->pc = 0x193118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193114u;
    // 0x193118: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x193114u, 0x19311Cu)) {
        return;
    }
    ctx->pc = 0x19311Cu;
label_19311c:
    // 0x19311c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19311cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193120: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x193120u;
    SET_GPR_U32(ctx, 31, 0x193128u);
    ctx->pc = 0x193124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193120u;
    // 0x193124: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x193120u, 0x193128u)) {
        return;
    }
    ctx->pc = 0x193128u;
label_193128:
    // 0x193128: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x193128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x19312c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19312Cu;
    SET_GPR_U32(ctx, 31, 0x193134u);
    ctx->pc = 0x193130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19312Cu;
    // 0x193130: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19312Cu, 0x193134u)) {
        return;
    }
    ctx->pc = 0x193134u;
label_193134:
    // 0x193134: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x193134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x193138: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x193138u;
    SET_GPR_U32(ctx, 31, 0x193140u);
    ctx->pc = 0x19313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193138u;
    // 0x19313c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x193138u, 0x193140u)) {
        return;
    }
    ctx->pc = 0x193140u;
label_193140:
    // 0x193140: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x193140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x193144: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x193144u;
    SET_GPR_U32(ctx, 31, 0x19314Cu);
    ctx->pc = 0x193148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193144u;
    // 0x193148: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x193144u, 0x19314Cu)) {
        return;
    }
    ctx->pc = 0x19314Cu;
label_19314c:
    // 0x19314c: 0x264400dc  addiu       $a0, $s2, 0xDC
    ctx->pc = 0x19314cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 220));
    // 0x193150: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x193150u;
    SET_GPR_U32(ctx, 31, 0x193158u);
    ctx->pc = 0x193154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193150u;
    // 0x193154: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x193150u, 0x193158u)) {
        return;
    }
    ctx->pc = 0x193158u;
label_193158:
    // 0x193158: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x193158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x19315c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19315Cu;
    SET_GPR_U32(ctx, 31, 0x193164u);
    ctx->pc = 0x193160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19315Cu;
    // 0x193160: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19315Cu, 0x193164u)) {
        return;
    }
    ctx->pc = 0x193164u;
label_193164:
    // 0x193164: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x193164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193168: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x193168u;
    SET_GPR_U32(ctx, 31, 0x193170u);
    ctx->pc = 0x19316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193168u;
    // 0x19316c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x193168u, 0x193170u)) {
        return;
    }
    ctx->pc = 0x193170u;
label_193170:
    // 0x193170: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x193170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x193174: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x193174u;
    SET_GPR_U32(ctx, 31, 0x19317Cu);
    ctx->pc = 0x193178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193174u;
    // 0x193178: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x193174u, 0x19317Cu)) {
        return;
    }
    ctx->pc = 0x19317Cu;
label_19317c:
    // 0x19317c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19317cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x193180: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x193180u;
    SET_GPR_U32(ctx, 31, 0x193188u);
    ctx->pc = 0x193184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193180u;
    // 0x193184: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x193180u, 0x193188u)) {
        return;
    }
    ctx->pc = 0x193188u;
label_193188:
    // 0x193188: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x193188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x19318c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19318Cu;
    SET_GPR_U32(ctx, 31, 0x193194u);
    ctx->pc = 0x193190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19318Cu;
    // 0x193190: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19318Cu, 0x193194u)) {
        return;
    }
    ctx->pc = 0x193194u;
label_193194:
    // 0x193194: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x193194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193198: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x193198u;
    SET_GPR_U32(ctx, 31, 0x1931A0u);
    ctx->pc = 0x19319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193198u;
    // 0x19319c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x193198u, 0x1931A0u)) {
        return;
    }
    ctx->pc = 0x1931A0u;
label_1931a0:
    // 0x1931a0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1931a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1931a4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1931A4u;
    SET_GPR_U32(ctx, 31, 0x1931ACu);
    ctx->pc = 0x1931A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931A4u;
    // 0x1931a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1931A4u, 0x1931ACu)) {
        return;
    }
    ctx->pc = 0x1931ACu;
label_1931ac:
    // 0x1931ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1931acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1931b0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1931B0u;
    SET_GPR_U32(ctx, 31, 0x1931B8u);
    ctx->pc = 0x1931B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931B0u;
    // 0x1931b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1931B0u, 0x1931B8u)) {
        return;
    }
    ctx->pc = 0x1931B8u;
label_1931b8:
    // 0x1931b8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1931b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1931bc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1931BCu;
    SET_GPR_U32(ctx, 31, 0x1931C4u);
    ctx->pc = 0x1931C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931BCu;
    // 0x1931c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1931BCu, 0x1931C4u)) {
        return;
    }
    ctx->pc = 0x1931C4u;
label_1931c4:
    // 0x1931c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1931c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1931c8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1931C8u;
    SET_GPR_U32(ctx, 31, 0x1931D0u);
    ctx->pc = 0x1931CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931C8u;
    // 0x1931cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1931C8u, 0x1931D0u)) {
        return;
    }
    ctx->pc = 0x1931D0u;
label_1931d0:
    // 0x1931d0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1931d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1931d4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1931D4u;
    SET_GPR_U32(ctx, 31, 0x1931DCu);
    ctx->pc = 0x1931D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931D4u;
    // 0x1931d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1931D4u, 0x1931DCu)) {
        return;
    }
    ctx->pc = 0x1931DCu;
label_1931dc:
    // 0x1931dc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1931dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1931e0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1931E0u;
    SET_GPR_U32(ctx, 31, 0x1931E8u);
    ctx->pc = 0x1931E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931E0u;
    // 0x1931e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1931E0u, 0x1931E8u)) {
        return;
    }
    ctx->pc = 0x1931E8u;
label_1931e8:
    // 0x1931e8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1931e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1931ec: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1931ECu;
    SET_GPR_U32(ctx, 31, 0x1931F4u);
    ctx->pc = 0x1931F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931ECu;
    // 0x1931f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1931ECu, 0x1931F4u)) {
        return;
    }
    ctx->pc = 0x1931F4u;
label_1931f4:
    // 0x1931f4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1931f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1931f8: 0xc04f084  jal         func_13C210
    ctx->pc = 0x1931F8u;
    SET_GPR_U32(ctx, 31, 0x193200u);
    ctx->pc = 0x1931FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931F8u;
    // 0x1931fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x1931F8u, 0x193200u)) {
        return;
    }
    ctx->pc = 0x193200u;
label_193200:
    // 0x193200: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x193200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x193204: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x193204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x193208: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x193208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x19320c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x19320cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x193210: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x193210u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x193214: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x193214u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x193218: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x193218u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19321c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x19321cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x193220: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x193220u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x193224: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x193224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x193228: 0x3e00008  jr          $ra
    ctx->pc = 0x193228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193228u;
        // 0x19322c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193230u;
}
