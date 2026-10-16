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

// Function: sub_001D3598
// Address: 0x1d3598 - 0x1d3950
void sub_001D3598_0x1d3598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3598_0x1d3598");
#endif

    switch (ctx->pc) {
        case 0x1d35d0u: goto label_1d35d0;
        case 0x1d35e4u: goto label_1d35e4;
        case 0x1d35f4u: goto label_1d35f4;
        case 0x1d3600u: goto label_1d3600;
        case 0x1d3610u: goto label_1d3610;
        case 0x1d3620u: goto label_1d3620;
        case 0x1d3644u: goto label_1d3644;
        case 0x1d3660u: goto label_1d3660;
        case 0x1d367cu: goto label_1d367c;
        case 0x1d3698u: goto label_1d3698;
        case 0x1d36b4u: goto label_1d36b4;
        case 0x1d36d0u: goto label_1d36d0;
        case 0x1d36ecu: goto label_1d36ec;
        case 0x1d3708u: goto label_1d3708;
        case 0x1d371cu: goto label_1d371c;
        case 0x1d3738u: goto label_1d3738;
        case 0x1d3754u: goto label_1d3754;
        case 0x1d3770u: goto label_1d3770;
        case 0x1d3790u: goto label_1d3790;
        case 0x1d37acu: goto label_1d37ac;
        case 0x1d37c8u: goto label_1d37c8;
        case 0x1d37d8u: goto label_1d37d8;
        case 0x1d37f4u: goto label_1d37f4;
        case 0x1d3810u: goto label_1d3810;
        case 0x1d3820u: goto label_1d3820;
        case 0x1d383cu: goto label_1d383c;
        case 0x1d3858u: goto label_1d3858;
        case 0x1d3868u: goto label_1d3868;
        case 0x1d3884u: goto label_1d3884;
        case 0x1d38a0u: goto label_1d38a0;
        case 0x1d38bcu: goto label_1d38bc;
        case 0x1d38d8u: goto label_1d38d8;
        case 0x1d38f4u: goto label_1d38f4;
        case 0x1d3910u: goto label_1d3910;
        case 0x1d392cu: goto label_1d392c;
        default: break;
    }

    ctx->pc = 0x1d3598u;

    // 0x1d3598: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x1d3598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x1d359c: 0x7fb10440  sq          $s1, 0x440($sp)
    ctx->pc = 0x1d359cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 17));
    // 0x1d35a0: 0x7fb00450  sq          $s0, 0x450($sp)
    ctx->pc = 0x1d35a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 16));
    // 0x1d35a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d35a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d35a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35ac: 0x7fb20430  sq          $s2, 0x430($sp)
    ctx->pc = 0x1d35acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 18));
    // 0x1d35b0: 0x7fb30420  sq          $s3, 0x420($sp)
    ctx->pc = 0x1d35b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 19));
    // 0x1d35b4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d35b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d35b8: 0x7fb40410  sq          $s4, 0x410($sp)
    ctx->pc = 0x1d35b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 20));
    // 0x1d35bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1d35bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35c0: 0xffbf0400  sd          $ra, 0x400($sp)
    ctx->pc = 0x1d35c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 31));
    // 0x1d35c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d35c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35c8: 0xc07596a  jal         func_1D65A8
    ctx->pc = 0x1D35C8u;
    SET_GPR_U32(ctx, 31, 0x1D35D0u);
    ctx->pc = 0x1D35CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35C8u;
    // 0x1d35cc: 0x24a50f80  addiu       $a1, $a1, 0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D35C8u, 0x1D35D0u)) {
        return;
    }
    ctx->pc = 0x1D35D0u;
label_1d35d0:
    // 0x1d35d0: 0x2614001c  addiu       $s4, $s0, 0x1C
    ctx->pc = 0x1d35d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1d35d4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d35d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d35d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d35d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35dc: 0xc07596e  jal         func_1D65B8
    ctx->pc = 0x1D35DCu;
    SET_GPR_U32(ctx, 31, 0x1D35E4u);
    ctx->pc = 0x1D35E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35DCu;
    // 0x1d35e0: 0x24a50fa0  addiu       $a1, $a1, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D35DCu, 0x1D35E4u)) {
        return;
    }
    ctx->pc = 0x1D35E4u;
label_1d35e4:
    // 0x1d35e4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d35e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d35e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d35e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35ec: 0xc075972  jal         func_1D65C8
    ctx->pc = 0x1D35ECu;
    SET_GPR_U32(ctx, 31, 0x1D35F4u);
    ctx->pc = 0x1D35F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35ECu;
    // 0x1d35f0: 0x24a50fb8  addiu       $a1, $a1, 0xFB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65C8u, 0x1D35ECu, 0x1D35F4u)) {
        return;
    }
    ctx->pc = 0x1D35F4u;
label_1d35f4:
    // 0x1d35f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d35f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35f8: 0xc074f22  jal         func_1D3C88
    ctx->pc = 0x1D35F8u;
    SET_GPR_U32(ctx, 31, 0x1D3600u);
    ctx->pc = 0x1D35FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35F8u;
    // 0x1d35fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D3C88u, 0x1D35F8u, 0x1D3600u)) {
        return;
    }
    ctx->pc = 0x1D3600u;
label_1d3600:
    // 0x1d3600: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x1d3600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x1d3604: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d3604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3608: 0xc074ce0  jal         func_1D3380
    ctx->pc = 0x1D3608u;
    SET_GPR_U32(ctx, 31, 0x1D3610u);
    ctx->pc = 0x1D360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3608u;
    // 0x1d360c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D3380u, 0x1D3608u, 0x1D3610u)) {
        return;
    }
    ctx->pc = 0x1D3610u;
label_1d3610:
    // 0x1d3610: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x1d3610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1d3614: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1d3614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1d3618: 0xc074ce0  jal         func_1D3380
    ctx->pc = 0x1D3618u;
    SET_GPR_U32(ctx, 31, 0x1D3620u);
    ctx->pc = 0x1D361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3618u;
    // 0x1d361c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D3380u, 0x1D3618u, 0x1D3620u)) {
        return;
    }
    ctx->pc = 0x1D3620u;
label_1d3620:
    // 0x1d3620: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1d3620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1d3624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3628: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1d3628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1d362c: 0x24c60f50  addiu       $a2, $a2, 0xF50
    ctx->pc = 0x1d362cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3920));
    // 0x1d3630: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1d3630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d3634: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3638: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3638u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d363c: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D363Cu;
    SET_GPR_U32(ctx, 31, 0x1D3644u);
    ctx->pc = 0x1D3640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D363Cu;
    // 0x1d3640: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D363Cu, 0x1D3644u)) {
        return;
    }
    ctx->pc = 0x1D3644u;
label_1d3644:
    // 0x1d3644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3648: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d3648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d364c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d364cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3650: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3654: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3658: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3658u;
    SET_GPR_U32(ctx, 31, 0x1D3660u);
    ctx->pc = 0x1D365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3658u;
    // 0x1d365c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3658u, 0x1D3660u)) {
        return;
    }
    ctx->pc = 0x1D3660u;
label_1d3660:
    // 0x1d3660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3664: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d3664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3668: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d3668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d366c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d366cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3670: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3674: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3674u;
    SET_GPR_U32(ctx, 31, 0x1D367Cu);
    ctx->pc = 0x1D3678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3674u;
    // 0x1d3678: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3674u, 0x1D367Cu)) {
        return;
    }
    ctx->pc = 0x1D367Cu;
label_1d367c:
    // 0x1d367c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d367cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3680: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d3680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3684: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d3684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d3688: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d368c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d368cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3690: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3690u;
    SET_GPR_U32(ctx, 31, 0x1D3698u);
    ctx->pc = 0x1D3694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3690u;
    // 0x1d3694: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3690u, 0x1D3698u)) {
        return;
    }
    ctx->pc = 0x1D3698u;
label_1d3698:
    // 0x1d3698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d369c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d369cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36a0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1d36a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d36a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d36a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d36a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36ac: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D36ACu;
    SET_GPR_U32(ctx, 31, 0x1D36B4u);
    ctx->pc = 0x1D36B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D36ACu;
    // 0x1d36b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D36ACu, 0x1D36B4u)) {
        return;
    }
    ctx->pc = 0x1D36B4u;
label_1d36b4:
    // 0x1d36b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d36b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d36b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36bc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1d36bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36c0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1d36c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1d36c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d36c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36c8: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D36C8u;
    SET_GPR_U32(ctx, 31, 0x1D36D0u);
    ctx->pc = 0x1D36CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D36C8u;
    // 0x1d36cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D36C8u, 0x1D36D0u)) {
        return;
    }
    ctx->pc = 0x1D36D0u;
label_1d36d0:
    // 0x1d36d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d36d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d36d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36d8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1d36d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d36dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d36dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d36e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36e4: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D36E4u;
    SET_GPR_U32(ctx, 31, 0x1D36ECu);
    ctx->pc = 0x1D36E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D36E4u;
    // 0x1d36e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D36E4u, 0x1D36ECu)) {
        return;
    }
    ctx->pc = 0x1D36ECu;
label_1d36ec:
    // 0x1d36ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d36ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d36f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d36f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d36f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36fc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d36fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1d3700: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3700u;
    SET_GPR_U32(ctx, 31, 0x1D3708u);
    ctx->pc = 0x1D3704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3700u;
    // 0x1d3704: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3700u, 0x1D3708u)) {
        return;
    }
    ctx->pc = 0x1D3708u;
label_1d3708:
    // 0x1d3708: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d3708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d370c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d370cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3710: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d3710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3714: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1D3714u;
    SET_GPR_U32(ctx, 31, 0x1D371Cu);
    ctx->pc = 0x1D3718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3714u;
    // 0x1d3718: 0x24a50fd8  addiu       $a1, $a1, 0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D3714u, 0x1D371Cu)) {
        return;
    }
    ctx->pc = 0x1D371Cu;
label_1d371c:
    // 0x1d371c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d371cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3724: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d3724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3728: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d372c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d372cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3730: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3730u;
    SET_GPR_U32(ctx, 31, 0x1D3738u);
    ctx->pc = 0x1D3734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3730u;
    // 0x1d3734: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3730u, 0x1D3738u)) {
        return;
    }
    ctx->pc = 0x1D3738u;
label_1d3738:
    // 0x1d3738: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d373c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d373cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3740: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d3740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d3744: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3748: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d374c: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D374Cu;
    SET_GPR_U32(ctx, 31, 0x1D3754u);
    ctx->pc = 0x1D3750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D374Cu;
    // 0x1d3750: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D374Cu, 0x1D3754u)) {
        return;
    }
    ctx->pc = 0x1D3754u;
label_1d3754:
    // 0x1d3754: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d3754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d375c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d375cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d3760: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3764: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3768: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3768u;
    SET_GPR_U32(ctx, 31, 0x1D3770u);
    ctx->pc = 0x1D376Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3768u;
    // 0x1d376c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3768u, 0x1D3770u)) {
        return;
    }
    ctx->pc = 0x1D3770u;
label_1d3770:
    // 0x1d3770: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1d3770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1d3774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3778: 0x24c60fe0  addiu       $a2, $a2, 0xFE0
    ctx->pc = 0x1d3778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4064));
    // 0x1d377c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1d377cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d3780: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3784: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3788: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3788u;
    SET_GPR_U32(ctx, 31, 0x1D3790u);
    ctx->pc = 0x1D378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3788u;
    // 0x1d378c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3788u, 0x1D3790u)) {
        return;
    }
    ctx->pc = 0x1D3790u;
label_1d3790:
    // 0x1d3790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3794: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d3794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3798: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d3798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d379c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d379cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d37a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37a4: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D37A4u;
    SET_GPR_U32(ctx, 31, 0x1D37ACu);
    ctx->pc = 0x1D37A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D37A4u;
    // 0x1d37a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D37A4u, 0x1D37ACu)) {
        return;
    }
    ctx->pc = 0x1D37ACu;
label_1d37ac:
    // 0x1d37ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d37acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d37b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d37b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d37b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d37bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37c0: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D37C0u;
    SET_GPR_U32(ctx, 31, 0x1D37C8u);
    ctx->pc = 0x1D37C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D37C0u;
    // 0x1d37c4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D37C0u, 0x1D37C8u)) {
        return;
    }
    ctx->pc = 0x1D37C8u;
label_1d37c8:
    // 0x1d37c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d37c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d37ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37d0: 0xc07590e  jal         func_1D6438
    ctx->pc = 0x1D37D0u;
    SET_GPR_U32(ctx, 31, 0x1D37D8u);
    ctx->pc = 0x1D37D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D37D0u;
    // 0x1d37d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6438u, 0x1D37D0u, 0x1D37D8u)) {
        return;
    }
    ctx->pc = 0x1D37D8u;
label_1d37d8:
    // 0x1d37d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d37d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d37dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37e0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d37e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d37e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d37e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d37e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37ec: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D37ECu;
    SET_GPR_U32(ctx, 31, 0x1D37F4u);
    ctx->pc = 0x1D37F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D37ECu;
    // 0x1d37f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D37ECu, 0x1D37F4u)) {
        return;
    }
    ctx->pc = 0x1D37F4u;
label_1d37f4:
    // 0x1d37f4: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1d37f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d37f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d37f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37fc: 0x240803c4  addiu       $t0, $zero, 0x3C4
    ctx->pc = 0x1d37fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x1d3800: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d3800u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3808: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3808u;
    SET_GPR_U32(ctx, 31, 0x1D3810u);
    ctx->pc = 0x1D380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3808u;
    // 0x1d380c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3808u, 0x1D3810u)) {
        return;
    }
    ctx->pc = 0x1D3810u;
label_1d3810:
    // 0x1d3810: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3818: 0xc07591e  jal         func_1D6478
    ctx->pc = 0x1D3818u;
    SET_GPR_U32(ctx, 31, 0x1D3820u);
    ctx->pc = 0x1D381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3818u;
    // 0x1d381c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6478u, 0x1D3818u, 0x1D3820u)) {
        return;
    }
    ctx->pc = 0x1D3820u;
label_1d3820:
    // 0x1d3820: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3828: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d3828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d382c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d382cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3830: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3834: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3834u;
    SET_GPR_U32(ctx, 31, 0x1D383Cu);
    ctx->pc = 0x1D3838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3834u;
    // 0x1d3838: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3834u, 0x1D383Cu)) {
        return;
    }
    ctx->pc = 0x1D383Cu;
label_1d383c:
    // 0x1d383c: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x1d383cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d3840: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3844: 0x8e080018  lw          $t0, 0x18($s0)
    ctx->pc = 0x1d3844u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d3848: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d3848u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d384c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d384cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3850: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3850u;
    SET_GPR_U32(ctx, 31, 0x1D3858u);
    ctx->pc = 0x1D3854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3850u;
    // 0x1d3854: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3850u, 0x1D3858u)) {
        return;
    }
    ctx->pc = 0x1D3858u;
label_1d3858:
    // 0x1d3858: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d385c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d385cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3860: 0xc0758fe  jal         func_1D63F8
    ctx->pc = 0x1D3860u;
    SET_GPR_U32(ctx, 31, 0x1D3868u);
    ctx->pc = 0x1D3864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3860u;
    // 0x1d3864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D63F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D63F8u, 0x1D3860u, 0x1D3868u)) {
        return;
    }
    ctx->pc = 0x1D3868u;
label_1d3868:
    // 0x1d3868: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d386c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d386cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3870: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d3870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d3874: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3878: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3878u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d387c: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D387Cu;
    SET_GPR_U32(ctx, 31, 0x1D3884u);
    ctx->pc = 0x1D3880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D387Cu;
    // 0x1d3880: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D387Cu, 0x1D3884u)) {
        return;
    }
    ctx->pc = 0x1D3884u;
label_1d3884:
    // 0x1d3884: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d388c: 0x26070050  addiu       $a3, $s0, 0x50
    ctx->pc = 0x1d388cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d3890: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d3890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3894: 0x24080034  addiu       $t0, $zero, 0x34
    ctx->pc = 0x1d3894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1d3898: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3898u;
    SET_GPR_U32(ctx, 31, 0x1D38A0u);
    ctx->pc = 0x1D389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3898u;
    // 0x1d389c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3898u, 0x1D38A0u)) {
        return;
    }
    ctx->pc = 0x1D38A0u;
label_1d38a0:
    // 0x1d38a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d38a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1d38a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38a8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1d38a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d38acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38b0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d38b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d38b4: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D38B4u;
    SET_GPR_U32(ctx, 31, 0x1D38BCu);
    ctx->pc = 0x1D38B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38B4u;
    // 0x1d38b8: 0x24090034  addiu       $t1, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D38B4u, 0x1D38BCu)) {
        return;
    }
    ctx->pc = 0x1D38BCu;
label_1d38bc:
    // 0x1d38bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d38bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d38c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38c4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1d38c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38c8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d38c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d38cc: 0x24080034  addiu       $t0, $zero, 0x34
    ctx->pc = 0x1d38ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1d38d0: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D38D0u;
    SET_GPR_U32(ctx, 31, 0x1D38D8u);
    ctx->pc = 0x1D38D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38D0u;
    // 0x1d38d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D38D0u, 0x1D38D8u)) {
        return;
    }
    ctx->pc = 0x1D38D8u;
label_1d38d8:
    // 0x1d38d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d38d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38dc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1d38dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d38e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d38e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d38e8: 0x24080034  addiu       $t0, $zero, 0x34
    ctx->pc = 0x1d38e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1d38ec: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D38ECu;
    SET_GPR_U32(ctx, 31, 0x1D38F4u);
    ctx->pc = 0x1D38F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38ECu;
    // 0x1d38f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D38ECu, 0x1D38F4u)) {
        return;
    }
    ctx->pc = 0x1D38F4u;
label_1d38f4:
    // 0x1d38f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d38f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d38f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1d38fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d3900: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3904: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3908: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3908u;
    SET_GPR_U32(ctx, 31, 0x1D3910u);
    ctx->pc = 0x1D390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3908u;
    // 0x1d390c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3908u, 0x1D3910u)) {
        return;
    }
    ctx->pc = 0x1D3910u;
label_1d3910:
    // 0x1d3910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3914: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d3914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d3918: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d3918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d391c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d391cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3920: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3924: 0xc075860  jal         func_1D6180
    ctx->pc = 0x1D3924u;
    SET_GPR_U32(ctx, 31, 0x1D392Cu);
    ctx->pc = 0x1D3928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3924u;
    // 0x1d3928: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6180u, 0x1D3924u, 0x1D392Cu)) {
        return;
    }
    ctx->pc = 0x1D392Cu;
label_1d392c:
    // 0x1d392c: 0x7bb00450  lq          $s0, 0x450($sp)
    ctx->pc = 0x1d392cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x1d3930: 0x7bb10440  lq          $s1, 0x440($sp)
    ctx->pc = 0x1d3930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x1d3934: 0x7bb20430  lq          $s2, 0x430($sp)
    ctx->pc = 0x1d3934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1d3938: 0x7bb30420  lq          $s3, 0x420($sp)
    ctx->pc = 0x1d3938u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1d393c: 0x7bb40410  lq          $s4, 0x410($sp)
    ctx->pc = 0x1d393cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1d3940: 0xdfbf0400  ld          $ra, 0x400($sp)
    ctx->pc = 0x1d3940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1d3944: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3944u;
        // 0x1d3948: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D394Cu;
    // 0x1d394c: 0x0  nop
    ctx->pc = 0x1d394cu;
    // NOP
    ctx->pc = 0x1d3950u;
}
