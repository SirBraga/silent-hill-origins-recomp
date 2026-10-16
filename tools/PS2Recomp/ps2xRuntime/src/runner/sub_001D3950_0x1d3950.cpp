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

// Function: sub_001D3950
// Address: 0x1d3950 - 0x1d3ac8
void sub_001D3950_0x1d3950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3950_0x1d3950");
#endif

    switch (ctx->pc) {
        case 0x1d3964u: goto label_1d3964;
        case 0x1d3978u: goto label_1d3978;
        case 0x1d3988u: goto label_1d3988;
        case 0x1d3998u: goto label_1d3998;
        case 0x1d39b8u: goto label_1d39b8;
        case 0x1d39d4u: goto label_1d39d4;
        case 0x1d39f0u: goto label_1d39f0;
        case 0x1d3a0cu: goto label_1d3a0c;
        case 0x1d3a28u: goto label_1d3a28;
        case 0x1d3a48u: goto label_1d3a48;
        case 0x1d3a64u: goto label_1d3a64;
        case 0x1d3a80u: goto label_1d3a80;
        case 0x1d3a9cu: goto label_1d3a9c;
        case 0x1d3ab8u: goto label_1d3ab8;
        default: break;
    }

    ctx->pc = 0x1d3950u;

    // 0x1d3950: 0x27bdfbe0  addiu       $sp, $sp, -0x420
    ctx->pc = 0x1d3950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966240));
    // 0x1d3954: 0x7fb00410  sq          $s0, 0x410($sp)
    ctx->pc = 0x1d3954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 16));
    // 0x1d3958: 0xffbf0400  sd          $ra, 0x400($sp)
    ctx->pc = 0x1d3958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 31));
    // 0x1d395c: 0xc07cdd4  jal         func_1F3750
    ctx->pc = 0x1D395Cu;
    SET_GPR_U32(ctx, 31, 0x1D3964u);
    ctx->pc = 0x1D3960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D395Cu;
    // 0x1d3960: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3750u, 0x1D395Cu, 0x1D3964u)) {
        return;
    }
    ctx->pc = 0x1D3964u;
label_1d3964:
    // 0x1d3964: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d3964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d3968: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d3968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d396c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d396cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3970: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1D3970u;
    SET_GPR_U32(ctx, 31, 0x1D3978u);
    ctx->pc = 0x1D3974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3970u;
    // 0x1d3974: 0x24a51070  addiu       $a1, $a1, 0x1070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D3970u, 0x1D3978u)) {
        return;
    }
    ctx->pc = 0x1D3978u;
label_1d3978:
    // 0x1d3978: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d3978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d397c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d397cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3980: 0xc07596a  jal         func_1D65A8
    ctx->pc = 0x1D3980u;
    SET_GPR_U32(ctx, 31, 0x1D3988u);
    ctx->pc = 0x1D3984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3980u;
    // 0x1d3984: 0x24a50f18  addiu       $a1, $a1, 0xF18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D3980u, 0x1D3988u)) {
        return;
    }
    ctx->pc = 0x1D3988u;
label_1d3988:
    // 0x1d3988: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d3988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d398c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d398cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3990: 0xc07596e  jal         func_1D65B8
    ctx->pc = 0x1D3990u;
    SET_GPR_U32(ctx, 31, 0x1D3998u);
    ctx->pc = 0x1D3994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3990u;
    // 0x1d3994: 0x24a50f38  addiu       $a1, $a1, 0xF38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D3990u, 0x1D3998u)) {
        return;
    }
    ctx->pc = 0x1D3998u;
label_1d3998:
    // 0x1d3998: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1d3998u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1d399c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d399cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39a0: 0x24c60f50  addiu       $a2, $a2, 0xF50
    ctx->pc = 0x1d39a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3920));
    // 0x1d39a4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1d39a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d39a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d39a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d39acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39b0: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D39B0u;
    SET_GPR_U32(ctx, 31, 0x1D39B8u);
    ctx->pc = 0x1D39B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D39B0u;
    // 0x1d39b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D39B0u, 0x1D39B8u)) {
        return;
    }
    ctx->pc = 0x1D39B8u;
label_1d39b8:
    // 0x1d39b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d39b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d39bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d39c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d39c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d39c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d39c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39cc: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D39CCu;
    SET_GPR_U32(ctx, 31, 0x1D39D4u);
    ctx->pc = 0x1D39D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D39CCu;
    // 0x1d39d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D39CCu, 0x1D39D4u)) {
        return;
    }
    ctx->pc = 0x1D39D4u;
label_1d39d4:
    // 0x1d39d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d39d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d39d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d39dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d39e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d39e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d39e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39e8: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D39E8u;
    SET_GPR_U32(ctx, 31, 0x1D39F0u);
    ctx->pc = 0x1D39ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D39E8u;
    // 0x1d39ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D39E8u, 0x1D39F0u)) {
        return;
    }
    ctx->pc = 0x1D39F0u;
label_1d39f0:
    // 0x1d39f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d39f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d39f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d39f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d39fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d39fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3a00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a04: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3A04u;
    SET_GPR_U32(ctx, 31, 0x1D3A0Cu);
    ctx->pc = 0x1D3A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3A04u;
    // 0x1d3a08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3A04u, 0x1D3A0Cu)) {
        return;
    }
    ctx->pc = 0x1D3A0Cu;
label_1d3a0c:
    // 0x1d3a0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a14: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1d3a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d3a18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3a18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3a1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a20: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3A20u;
    SET_GPR_U32(ctx, 31, 0x1D3A28u);
    ctx->pc = 0x1D3A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3A20u;
    // 0x1d3a24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3A20u, 0x1D3A28u)) {
        return;
    }
    ctx->pc = 0x1D3A28u;
label_1d3a28:
    // 0x1d3a28: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1d3a28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1d3a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a30: 0x24c60f68  addiu       $a2, $a2, 0xF68
    ctx->pc = 0x1d3a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3944));
    // 0x1d3a34: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1d3a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d3a38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3a3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a40: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3A40u;
    SET_GPR_U32(ctx, 31, 0x1D3A48u);
    ctx->pc = 0x1D3A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3A40u;
    // 0x1d3a44: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3A40u, 0x1D3A48u)) {
        return;
    }
    ctx->pc = 0x1D3A48u;
label_1d3a48:
    // 0x1d3a48: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a50: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1d3a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1d3a54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3a58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a5c: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3A5Cu;
    SET_GPR_U32(ctx, 31, 0x1D3A64u);
    ctx->pc = 0x1D3A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3A5Cu;
    // 0x1d3a60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3A5Cu, 0x1D3A64u)) {
        return;
    }
    ctx->pc = 0x1D3A64u;
label_1d3a64:
    // 0x1d3a64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a6c: 0x2607001c  addiu       $a3, $s0, 0x1C
    ctx->pc = 0x1d3a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1d3a70: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d3a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d3a74: 0x24080034  addiu       $t0, $zero, 0x34
    ctx->pc = 0x1d3a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1d3a78: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3A78u;
    SET_GPR_U32(ctx, 31, 0x1D3A80u);
    ctx->pc = 0x1D3A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3A78u;
    // 0x1d3a7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3A78u, 0x1D3A80u)) {
        return;
    }
    ctx->pc = 0x1D3A80u;
label_1d3a80:
    // 0x1d3a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a84: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a88: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1d3a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d3a8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3a90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a94: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3A94u;
    SET_GPR_U32(ctx, 31, 0x1D3A9Cu);
    ctx->pc = 0x1D3A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3A94u;
    // 0x1d3a98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3A94u, 0x1D3A9Cu)) {
        return;
    }
    ctx->pc = 0x1D3A9Cu;
label_1d3a9c:
    // 0x1d3a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3aa0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d3aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d3aa4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3aa8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3aac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3aacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ab0: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3AB0u;
    SET_GPR_U32(ctx, 31, 0x1D3AB8u);
    ctx->pc = 0x1D3AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AB0u;
    // 0x1d3ab4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3AB0u, 0x1D3AB8u)) {
        return;
    }
    ctx->pc = 0x1D3AB8u;
label_1d3ab8:
    // 0x1d3ab8: 0x7bb00410  lq          $s0, 0x410($sp)
    ctx->pc = 0x1d3ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1d3abc: 0xdfbf0400  ld          $ra, 0x400($sp)
    ctx->pc = 0x1d3abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1d3ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AC0u;
        // 0x1d3ac4: 0x27bd0420  addiu       $sp, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3AC8u;
}
