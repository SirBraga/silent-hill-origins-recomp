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

// Function: sub_0017FBA8
// Address: 0x17fba8 - 0x17fd58
void sub_0017FBA8_0x17fba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FBA8_0x17fba8");
#endif

    switch (ctx->pc) {
        case 0x17fc14u: goto label_17fc14;
        case 0x17fc28u: goto label_17fc28;
        case 0x17fc30u: goto label_17fc30;
        case 0x17fc38u: goto label_17fc38;
        case 0x17fc48u: goto label_17fc48;
        case 0x17fc5cu: goto label_17fc5c;
        case 0x17fc70u: goto label_17fc70;
        case 0x17fc84u: goto label_17fc84;
        case 0x17fc98u: goto label_17fc98;
        case 0x17fcacu: goto label_17fcac;
        case 0x17fcc0u: goto label_17fcc0;
        case 0x17fcd4u: goto label_17fcd4;
        case 0x17fce4u: goto label_17fce4;
        case 0x17fcecu: goto label_17fcec;
        case 0x17fcf4u: goto label_17fcf4;
        case 0x17fcfcu: goto label_17fcfc;
        case 0x17fd04u: goto label_17fd04;
        case 0x17fd0cu: goto label_17fd0c;
        case 0x17fd14u: goto label_17fd14;
        case 0x17fd1cu: goto label_17fd1c;
        case 0x17fd28u: goto label_17fd28;
        default: break;
    }

    ctx->pc = 0x17fba8u;

    // 0x17fba8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x17fba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x17fbac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17fbb0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x17fbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x17fbb4: 0x24427d58  addiu       $v0, $v0, 0x7D58
    ctx->pc = 0x17fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32088));
    // 0x17fbb8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x17fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x17fbbc: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x17fbbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbc0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x17fbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x17fbc4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17fbc8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x17fbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x17fbcc: 0x24637d78  addiu       $v1, $v1, 0x7D78
    ctx->pc = 0x17fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32120));
    // 0x17fbd0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x17fbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x17fbd4: 0x27d10038  addiu       $s1, $fp, 0x38
    ctx->pc = 0x17fbd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 56));
    // 0x17fbd8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x17fbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x17fbdc: 0x3c12006c  lui         $s2, 0x6C
    ctx->pc = 0x17fbdcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
    // 0x17fbe0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x17fbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x17fbe4: 0x2652fa20  addiu       $s2, $s2, -0x5E0
    ctx->pc = 0x17fbe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965792));
    // 0x17fbe8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17fbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17fbec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17fbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbf0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x17fbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x17fbf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17fbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbf8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x17fbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x17fbfc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17fbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17fc00: 0xafc2003c  sw          $v0, 0x3C($fp)
    ctx->pc = 0x17fc00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 2));
    // 0x17fc04: 0xafc30034  sw          $v1, 0x34($fp)
    ctx->pc = 0x17fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 3));
    // 0x17fc08: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17fc0c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17FC0Cu;
    SET_GPR_U32(ctx, 31, 0x17FC14u);
    ctx->pc = 0x17FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC0Cu;
    // 0x17fc10: 0xac4089f4  sw          $zero, -0x760C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937076), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17FC0Cu, 0x17FC14u)) {
        return;
    }
    ctx->pc = 0x17FC14u;
label_17fc14:
    // 0x17fc14: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x17fc14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x17fc18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17fc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc1c: 0x2610fa18  addiu       $s0, $s0, -0x5E8
    ctx->pc = 0x17fc1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965784));
    // 0x17fc20: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17FC20u;
    SET_GPR_U32(ctx, 31, 0x17FC28u);
    ctx->pc = 0x17FC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC20u;
    // 0x17fc24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17FC20u, 0x17FC28u)) {
        return;
    }
    ctx->pc = 0x17FC28u;
label_17fc28:
    // 0x17fc28: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17FC28u;
    SET_GPR_U32(ctx, 31, 0x17FC30u);
    ctx->pc = 0x17FC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC28u;
    // 0x17fc2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17FC28u, 0x17FC30u)) {
        return;
    }
    ctx->pc = 0x17FC30u;
label_17fc30:
    // 0x17fc30: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17FC30u;
    SET_GPR_U32(ctx, 31, 0x17FC38u);
    ctx->pc = 0x17FC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC30u;
    // 0x17fc34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17FC30u, 0x17FC38u)) {
        return;
    }
    ctx->pc = 0x17FC38u;
label_17fc38:
    // 0x17fc38: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x17fc38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x17fc3c: 0x24a5f9e8  addiu       $a1, $a1, -0x618
    ctx->pc = 0x17fc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965736));
    // 0x17fc40: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17FC40u;
    SET_GPR_U32(ctx, 31, 0x17FC48u);
    ctx->pc = 0x17FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC40u;
    // 0x17fc44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17FC40u, 0x17FC48u)) {
        return;
    }
    ctx->pc = 0x17FC48u;
label_17fc48:
    // 0x17fc48: 0x3c17006c  lui         $s7, 0x6C
    ctx->pc = 0x17fc48u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)108 << 16));
    // 0x17fc4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17fc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc50: 0x26f7f9f0  addiu       $s7, $s7, -0x610
    ctx->pc = 0x17fc50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965744));
    // 0x17fc54: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17FC54u;
    SET_GPR_U32(ctx, 31, 0x17FC5Cu);
    ctx->pc = 0x17FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC54u;
    // 0x17fc58: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17FC54u, 0x17FC5Cu)) {
        return;
    }
    ctx->pc = 0x17FC5Cu;
label_17fc5c:
    // 0x17fc5c: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x17fc5cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x17fc60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17fc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc64: 0x26d6f9f8  addiu       $s6, $s6, -0x608
    ctx->pc = 0x17fc64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965752));
    // 0x17fc68: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17FC68u;
    SET_GPR_U32(ctx, 31, 0x17FC70u);
    ctx->pc = 0x17FC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC68u;
    // 0x17fc6c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17FC68u, 0x17FC70u)) {
        return;
    }
    ctx->pc = 0x17FC70u;
label_17fc70:
    // 0x17fc70: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x17fc70u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x17fc74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17fc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc78: 0x26b5fa00  addiu       $s5, $s5, -0x600
    ctx->pc = 0x17fc78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965760));
    // 0x17fc7c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17FC7Cu;
    SET_GPR_U32(ctx, 31, 0x17FC84u);
    ctx->pc = 0x17FC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC7Cu;
    // 0x17fc80: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17FC7Cu, 0x17FC84u)) {
        return;
    }
    ctx->pc = 0x17FC84u;
label_17fc84:
    // 0x17fc84: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x17fc84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x17fc88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17fc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc8c: 0x2694fa08  addiu       $s4, $s4, -0x5F8
    ctx->pc = 0x17fc8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965768));
    // 0x17fc90: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17FC90u;
    SET_GPR_U32(ctx, 31, 0x17FC98u);
    ctx->pc = 0x17FC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC90u;
    // 0x17fc94: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17FC90u, 0x17FC98u)) {
        return;
    }
    ctx->pc = 0x17FC98u;
label_17fc98:
    // 0x17fc98: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x17fc98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x17fc9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17fc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fca0: 0x2673fa10  addiu       $s3, $s3, -0x5F0
    ctx->pc = 0x17fca0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965776));
    // 0x17fca4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17FCA4u;
    SET_GPR_U32(ctx, 31, 0x17FCACu);
    ctx->pc = 0x17FCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCA4u;
    // 0x17fca8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17FCA4u, 0x17FCACu)) {
        return;
    }
    ctx->pc = 0x17FCACu;
label_17fcac:
    // 0x17fcac: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x17fcacu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    // 0x17fcb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17fcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcb4: 0x265286c8  addiu       $s2, $s2, -0x7938
    ctx->pc = 0x17fcb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936264));
    // 0x17fcb8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17FCB8u;
    SET_GPR_U32(ctx, 31, 0x17FCC0u);
    ctx->pc = 0x17FCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCB8u;
    // 0x17fcbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17FCB8u, 0x17FCC0u)) {
        return;
    }
    ctx->pc = 0x17FCC0u;
label_17fcc0:
    // 0x17fcc0: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x17fcc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x17fcc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17fcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcc8: 0x261086d0  addiu       $s0, $s0, -0x7930
    ctx->pc = 0x17fcc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936272));
    // 0x17fccc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17FCCCu;
    SET_GPR_U32(ctx, 31, 0x17FCD4u);
    ctx->pc = 0x17FCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCCCu;
    // 0x17fcd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17FCCCu, 0x17FCD4u)) {
        return;
    }
    ctx->pc = 0x17FCD4u;
label_17fcd4:
    // 0x17fcd4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17fcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17fcd8: 0x2484f9e8  addiu       $a0, $a0, -0x618
    ctx->pc = 0x17fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965736));
    // 0x17fcdc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17FCDCu;
    SET_GPR_U32(ctx, 31, 0x17FCE4u);
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17FCDCu, 0x17FCE4u)) {
        return;
    }
    ctx->pc = 0x17FCE4u;
label_17fce4:
    // 0x17fce4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17FCE4u;
    SET_GPR_U32(ctx, 31, 0x17FCECu);
    ctx->pc = 0x17FCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCE4u;
    // 0x17fce8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17FCE4u, 0x17FCECu)) {
        return;
    }
    ctx->pc = 0x17FCECu;
label_17fcec:
    // 0x17fcec: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17FCECu;
    SET_GPR_U32(ctx, 31, 0x17FCF4u);
    ctx->pc = 0x17FCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCECu;
    // 0x17fcf0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17FCECu, 0x17FCF4u)) {
        return;
    }
    ctx->pc = 0x17FCF4u;
label_17fcf4:
    // 0x17fcf4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17FCF4u;
    SET_GPR_U32(ctx, 31, 0x17FCFCu);
    ctx->pc = 0x17FCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCF4u;
    // 0x17fcf8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17FCF4u, 0x17FCFCu)) {
        return;
    }
    ctx->pc = 0x17FCFCu;
label_17fcfc:
    // 0x17fcfc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17FCFCu;
    SET_GPR_U32(ctx, 31, 0x17FD04u);
    ctx->pc = 0x17FD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCFCu;
    // 0x17fd00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17FCFCu, 0x17FD04u)) {
        return;
    }
    ctx->pc = 0x17FD04u;
label_17fd04:
    // 0x17fd04: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17FD04u;
    SET_GPR_U32(ctx, 31, 0x17FD0Cu);
    ctx->pc = 0x17FD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD04u;
    // 0x17fd08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17FD04u, 0x17FD0Cu)) {
        return;
    }
    ctx->pc = 0x17FD0Cu;
label_17fd0c:
    // 0x17fd0c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17FD0Cu;
    SET_GPR_U32(ctx, 31, 0x17FD14u);
    ctx->pc = 0x17FD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD0Cu;
    // 0x17fd10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17FD0Cu, 0x17FD14u)) {
        return;
    }
    ctx->pc = 0x17FD14u;
label_17fd14:
    // 0x17fd14: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17FD14u;
    SET_GPR_U32(ctx, 31, 0x17FD1Cu);
    ctx->pc = 0x17FD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD14u;
    // 0x17fd18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17FD14u, 0x17FD1Cu)) {
        return;
    }
    ctx->pc = 0x17FD1Cu;
label_17fd1c:
    // 0x17fd1c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x17fd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fd20: 0xc04f084  jal         func_13C210
    ctx->pc = 0x17FD20u;
    SET_GPR_U32(ctx, 31, 0x17FD28u);
    ctx->pc = 0x17FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD20u;
    // 0x17fd24: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x17FD20u, 0x17FD28u)) {
        return;
    }
    ctx->pc = 0x17FD28u;
label_17fd28:
    // 0x17fd28: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x17fd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17fd2c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x17fd2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17fd30: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x17fd30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17fd34: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x17fd34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17fd38: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x17fd38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17fd3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17fd3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17fd40: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x17fd40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fd44: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x17fd44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fd48: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x17fd48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fd4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17fd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fd50: 0x3e00008  jr          $ra
    ctx->pc = 0x17FD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD50u;
        // 0x17fd54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FD58u;
}
