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

// Function: sub_0017C6C8
// Address: 0x17c6c8 - 0x17c868
void sub_0017C6C8_0x17c6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C6C8_0x17c6c8");
#endif

    switch (ctx->pc) {
        case 0x17c700u: goto label_17c700;
        case 0x17c720u: goto label_17c720;
        case 0x17c738u: goto label_17c738;
        case 0x17c750u: goto label_17c750;
        case 0x17c768u: goto label_17c768;
        case 0x17c780u: goto label_17c780;
        case 0x17c798u: goto label_17c798;
        case 0x17c7b0u: goto label_17c7b0;
        case 0x17c7c8u: goto label_17c7c8;
        case 0x17c7e4u: goto label_17c7e4;
        case 0x17c800u: goto label_17c800;
        case 0x17c814u: goto label_17c814;
        case 0x17c828u: goto label_17c828;
        case 0x17c840u: goto label_17c840;
        case 0x17c848u: goto label_17c848;
        default: break;
    }

    ctx->pc = 0x17c6c8u;

    // 0x17c6c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17c6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17c6cc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17c6d0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17c6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17c6d4: 0x24427358  addiu       $v0, $v0, 0x7358
    ctx->pc = 0x17c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29528));
    // 0x17c6d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17c6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17c6dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17c6dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c6e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17c6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17c6e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c6e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17c6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17c6ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c6f0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x17c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x17c6f4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x17c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x17c6f8: 0xc05f3f6  jal         func_17CFD8
    ctx->pc = 0x17C6F8u;
    SET_GPR_U32(ctx, 31, 0x17C700u);
    ctx->pc = 0x17C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6F8u;
    // 0x17c6fc: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CFD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17CFD8u, 0x17C6F8u, 0x17C700u)) {
        return;
    }
    ctx->pc = 0x17C700u;
label_17c700:
    // 0x17c700: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x17c700u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
    // 0x17c704: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17c704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17c708: 0x26527170  addiu       $s2, $s2, 0x7170
    ctx->pc = 0x17c708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 29040));
    // 0x17c70c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17c70cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17c710: 0x2484f8e8  addiu       $a0, $a0, -0x718
    ctx->pc = 0x17c710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965480));
    // 0x17c714: 0x24a57158  addiu       $a1, $a1, 0x7158
    ctx->pc = 0x17c714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29016));
    // 0x17c718: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17C718u;
    SET_GPR_U32(ctx, 31, 0x17C720u);
    ctx->pc = 0x17C71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C718u;
    // 0x17c71c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17C718u, 0x17C720u)) {
        return;
    }
    ctx->pc = 0x17C720u;
label_17c720:
    // 0x17c720: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17c720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17c724: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17c724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17c728: 0x2484f8f0  addiu       $a0, $a0, -0x710
    ctx->pc = 0x17c728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965488));
    // 0x17c72c: 0x24a57180  addiu       $a1, $a1, 0x7180
    ctx->pc = 0x17c72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29056));
    // 0x17c730: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17C730u;
    SET_GPR_U32(ctx, 31, 0x17C738u);
    ctx->pc = 0x17C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C730u;
    // 0x17c734: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17C730u, 0x17C738u)) {
        return;
    }
    ctx->pc = 0x17C738u;
label_17c738:
    // 0x17c738: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17c738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17c73c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17c73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17c740: 0x2484f8f8  addiu       $a0, $a0, -0x708
    ctx->pc = 0x17c740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965496));
    // 0x17c744: 0x24a57198  addiu       $a1, $a1, 0x7198
    ctx->pc = 0x17c744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29080));
    // 0x17c748: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17C748u;
    SET_GPR_U32(ctx, 31, 0x17C750u);
    ctx->pc = 0x17C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C748u;
    // 0x17c74c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17C748u, 0x17C750u)) {
        return;
    }
    ctx->pc = 0x17C750u;
label_17c750:
    // 0x17c750: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17c750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17c754: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17c754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17c758: 0x2484f900  addiu       $a0, $a0, -0x700
    ctx->pc = 0x17c758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x17c75c: 0x24a571b0  addiu       $a1, $a1, 0x71B0
    ctx->pc = 0x17c75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29104));
    // 0x17c760: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17C760u;
    SET_GPR_U32(ctx, 31, 0x17C768u);
    ctx->pc = 0x17C764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C760u;
    // 0x17c764: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17C760u, 0x17C768u)) {
        return;
    }
    ctx->pc = 0x17C768u;
label_17c768:
    // 0x17c768: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17c768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17c76c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17c76cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17c770: 0x2484f908  addiu       $a0, $a0, -0x6F8
    ctx->pc = 0x17c770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965512));
    // 0x17c774: 0x24a571d0  addiu       $a1, $a1, 0x71D0
    ctx->pc = 0x17c774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29136));
    // 0x17c778: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17C778u;
    SET_GPR_U32(ctx, 31, 0x17C780u);
    ctx->pc = 0x17C77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C778u;
    // 0x17c77c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17C778u, 0x17C780u)) {
        return;
    }
    ctx->pc = 0x17C780u;
label_17c780:
    // 0x17c780: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17c780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17c784: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17c784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17c788: 0x2484f910  addiu       $a0, $a0, -0x6F0
    ctx->pc = 0x17c788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965520));
    // 0x17c78c: 0x24a571e8  addiu       $a1, $a1, 0x71E8
    ctx->pc = 0x17c78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29160));
    // 0x17c790: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17C790u;
    SET_GPR_U32(ctx, 31, 0x17C798u);
    ctx->pc = 0x17C794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C790u;
    // 0x17c794: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17C790u, 0x17C798u)) {
        return;
    }
    ctx->pc = 0x17C798u;
label_17c798:
    // 0x17c798: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17c798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17c79c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17c79cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17c7a0: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x17c7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    // 0x17c7a4: 0x24a57200  addiu       $a1, $a1, 0x7200
    ctx->pc = 0x17c7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29184));
    // 0x17c7a8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17C7A8u;
    SET_GPR_U32(ctx, 31, 0x17C7B0u);
    ctx->pc = 0x17C7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C7A8u;
    // 0x17c7ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17C7A8u, 0x17C7B0u)) {
        return;
    }
    ctx->pc = 0x17C7B0u;
label_17c7b0:
    // 0x17c7b0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17c7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17c7b4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17c7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17c7b8: 0x24a57218  addiu       $a1, $a1, 0x7218
    ctx->pc = 0x17c7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29208));
    // 0x17c7bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17c7bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7c0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17C7C0u;
    SET_GPR_U32(ctx, 31, 0x17C7C8u);
    ctx->pc = 0x17C7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C7C0u;
    // 0x17c7c4: 0x2484f918  addiu       $a0, $a0, -0x6E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17C7C0u, 0x17C7C8u)) {
        return;
    }
    ctx->pc = 0x17C7C8u;
label_17c7c8:
    // 0x17c7c8: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x17c7c8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x17c7cc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17c7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17c7d0: 0x2631f928  addiu       $s1, $s1, -0x6D8
    ctx->pc = 0x17c7d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965544));
    // 0x17c7d4: 0x24a57230  addiu       $a1, $a1, 0x7230
    ctx->pc = 0x17c7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29232));
    // 0x17c7d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7dc: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17C7DCu;
    SET_GPR_U32(ctx, 31, 0x17C7E4u);
    ctx->pc = 0x17C7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C7DCu;
    // 0x17c7e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17C7DCu, 0x17C7E4u)) {
        return;
    }
    ctx->pc = 0x17C7E4u;
label_17c7e4:
    // 0x17c7e4: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x17c7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x17c7e8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17c7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17c7ec: 0x2610f930  addiu       $s0, $s0, -0x6D0
    ctx->pc = 0x17c7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965552));
    // 0x17c7f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17c7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7f8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17C7F8u;
    SET_GPR_U32(ctx, 31, 0x17C800u);
    ctx->pc = 0x17C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C7F8u;
    // 0x17c7fc: 0x24a57248  addiu       $a1, $a1, 0x7248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17C7F8u, 0x17C800u)) {
        return;
    }
    ctx->pc = 0x17C800u;
label_17c800:
    // 0x17c800: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17c800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c804: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17c804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c80c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17C80Cu;
    SET_GPR_U32(ctx, 31, 0x17C814u);
    ctx->pc = 0x17C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C80Cu;
    // 0x17c810: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17C80Cu, 0x17C814u)) {
        return;
    }
    ctx->pc = 0x17C814u;
label_17c814:
    // 0x17c814: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c818: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17c818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c81c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c820: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17C820u;
    SET_GPR_U32(ctx, 31, 0x17C828u);
    ctx->pc = 0x17C824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C820u;
    // 0x17c824: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17C820u, 0x17C828u)) {
        return;
    }
    ctx->pc = 0x17C828u;
label_17c828:
    // 0x17c828: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x17c828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x17c82c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17c82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c830: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x17c830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x17c834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c838: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17C838u;
    SET_GPR_U32(ctx, 31, 0x17C840u);
    ctx->pc = 0x17C83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C838u;
    // 0x17c83c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17C838u, 0x17C840u)) {
        return;
    }
    ctx->pc = 0x17C840u;
label_17c840:
    // 0x17c840: 0xc05f32c  jal         func_17CCB0
    ctx->pc = 0x17C840u;
    SET_GPR_U32(ctx, 31, 0x17C848u);
    ctx->pc = 0x17C844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C840u;
    // 0x17c844: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CCB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17CCB0u, 0x17C840u, 0x17C848u)) {
        return;
    }
    ctx->pc = 0x17C848u;
label_17c848:
    // 0x17c848: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x17c848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c84c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17c84cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c850: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17c850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c854: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17c854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c858: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17c858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c85c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c860: 0x3e00008  jr          $ra
    ctx->pc = 0x17C860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C860u;
        // 0x17c864: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C868u;
}
