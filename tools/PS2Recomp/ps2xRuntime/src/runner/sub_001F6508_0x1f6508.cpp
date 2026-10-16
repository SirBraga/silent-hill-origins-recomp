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

// Function: sub_001F6508
// Address: 0x1f6508 - 0x1f6858
void sub_001F6508_0x1f6508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6508_0x1f6508");
#endif

    switch (ctx->pc) {
        case 0x1f6550u: goto label_1f6550;
        case 0x1f657cu: goto label_1f657c;
        case 0x1f65acu: goto label_1f65ac;
        case 0x1f65d8u: goto label_1f65d8;
        case 0x1f6604u: goto label_1f6604;
        case 0x1f6630u: goto label_1f6630;
        case 0x1f665cu: goto label_1f665c;
        case 0x1f6688u: goto label_1f6688;
        case 0x1f66b4u: goto label_1f66b4;
        case 0x1f66e0u: goto label_1f66e0;
        case 0x1f670cu: goto label_1f670c;
        case 0x1f6738u: goto label_1f6738;
        case 0x1f6764u: goto label_1f6764;
        case 0x1f6790u: goto label_1f6790;
        case 0x1f67bcu: goto label_1f67bc;
        case 0x1f67e8u: goto label_1f67e8;
        case 0x1f6810u: goto label_1f6810;
        case 0x1f6838u: goto label_1f6838;
        default: break;
    }

    ctx->pc = 0x1f6508u;

    // 0x1f6508: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f6508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f650c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1f650cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1f6510: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1f6510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1f6514: 0x24422e40  addiu       $v0, $v0, 0x2E40
    ctx->pc = 0x1f6514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11840));
    // 0x1f6518: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f6518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f651c: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x1f651cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x1f6520: 0x3631100b  ori         $s1, $s1, 0x100B
    ctx->pc = 0x1f6520u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4107);
    // 0x1f6524: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1f6524u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6528: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f6528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1f652c: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1f652cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x1f6530: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1f6530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1f6534: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f6534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f6538: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1f6538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1f653c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f653cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1f6540: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f6540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1f6544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f6544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f6548: 0xc099446  jal         func_265118
    ctx->pc = 0x1F6548u;
    SET_GPR_U32(ctx, 31, 0x1F6550u);
    ctx->pc = 0x1F654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6548u;
    // 0x1f654c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F6548u, 0x1F6550u)) {
        return;
    }
    ctx->pc = 0x1F6550u;
label_1f6550:
    // 0x1f6550: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1f6550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1f6554: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x1f6554u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    // 0x1f6558: 0x24632ec8  addiu       $v1, $v1, 0x2EC8
    ctx->pc = 0x1f6558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11976));
    // 0x1f655c: 0x3610100c  ori         $s0, $s0, 0x100C
    ctx->pc = 0x1f655cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4108);
    // 0x1f6560: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f6560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f6564: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x1f6564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x1f6568: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f6568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f656c: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1f656cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1f6570: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f6570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f6574: 0xc099446  jal         func_265118
    ctx->pc = 0x1F6574u;
    SET_GPR_U32(ctx, 31, 0x1F657Cu);
    ctx->pc = 0x1F6578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6574u;
    // 0x1f6578: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F6574u, 0x1F657Cu)) {
        return;
    }
    ctx->pc = 0x1F657Cu;
label_1f657c:
    // 0x1f657c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1f657cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1f6580: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f6580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f6584: 0x24632f50  addiu       $v1, $v1, 0x2F50
    ctx->pc = 0x1f6584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12112));
    // 0x1f6588: 0x3442100d  ori         $v0, $v0, 0x100D
    ctx->pc = 0x1f6588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4109);
    // 0x1f658c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1f658cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6590: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f6590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f6594: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f6594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6598: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f6598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f659c: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x1f659cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x1f65a0: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x1f65a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x1f65a4: 0xc099446  jal         func_265118
    ctx->pc = 0x1F65A4u;
    SET_GPR_U32(ctx, 31, 0x1F65ACu);
    ctx->pc = 0x1F65A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F65A4u;
    // 0x1f65a8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F65A4u, 0x1F65ACu)) {
        return;
    }
    ctx->pc = 0x1F65ACu;
label_1f65ac:
    // 0x1f65ac: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1f65acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1f65b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f65b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f65b4: 0x24632f68  addiu       $v1, $v1, 0x2F68
    ctx->pc = 0x1f65b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12136));
    // 0x1f65b8: 0x3442100e  ori         $v0, $v0, 0x100E
    ctx->pc = 0x1f65b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4110);
    // 0x1f65bc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f65bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f65c0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f65c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f65c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f65c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f65c8: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x1f65c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x1f65cc: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1f65ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1f65d0: 0xc099446  jal         func_265118
    ctx->pc = 0x1F65D0u;
    SET_GPR_U32(ctx, 31, 0x1F65D8u);
    ctx->pc = 0x1F65D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F65D0u;
    // 0x1f65d4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F65D0u, 0x1F65D8u)) {
        return;
    }
    ctx->pc = 0x1F65D8u;
label_1f65d8:
    // 0x1f65d8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1f65d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1f65dc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f65dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f65e0: 0x24632f80  addiu       $v1, $v1, 0x2F80
    ctx->pc = 0x1f65e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12160));
    // 0x1f65e4: 0x3442100f  ori         $v0, $v0, 0x100F
    ctx->pc = 0x1f65e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4111);
    // 0x1f65e8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f65e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f65ec: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f65ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f65f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f65f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f65f4: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x1f65f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x1f65f8: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x1f65f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x1f65fc: 0xc099446  jal         func_265118
    ctx->pc = 0x1F65FCu;
    SET_GPR_U32(ctx, 31, 0x1F6604u);
    ctx->pc = 0x1F6600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F65FCu;
    // 0x1f6600: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F65FCu, 0x1F6604u)) {
        return;
    }
    ctx->pc = 0x1F6604u;
label_1f6604:
    // 0x1f6604: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1f6604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1f6608: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f6608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f660c: 0x24632f98  addiu       $v1, $v1, 0x2F98
    ctx->pc = 0x1f660cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12184));
    // 0x1f6610: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x1f6610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x1f6614: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f6614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f6618: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f6618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f661c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f661cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6620: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1f6620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1f6624: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x1f6624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x1f6628: 0xc099446  jal         func_265118
    ctx->pc = 0x1F6628u;
    SET_GPR_U32(ctx, 31, 0x1F6630u);
    ctx->pc = 0x1F662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6628u;
    // 0x1f662c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F6628u, 0x1F6630u)) {
        return;
    }
    ctx->pc = 0x1F6630u;
label_1f6630:
    // 0x1f6630: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f6630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x1f6634: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x1f6634u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    // 0x1f6638: 0x24631478  addiu       $v1, $v1, 0x1478
    ctx->pc = 0x1f6638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5240));
    // 0x1f663c: 0x3610001d  ori         $s0, $s0, 0x1D
    ctx->pc = 0x1f663cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)29);
    // 0x1f6640: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f6640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f6644: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x1f6644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x1f6648: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f6648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f664c: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1f664cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1f6650: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f6650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f6654: 0xc099446  jal         func_265118
    ctx->pc = 0x1F6654u;
    SET_GPR_U32(ctx, 31, 0x1F665Cu);
    ctx->pc = 0x1F6658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6654u;
    // 0x1f6658: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F6654u, 0x1F665Cu)) {
        return;
    }
    ctx->pc = 0x1F665Cu;
label_1f665c:
    // 0x1f665c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f665cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x1f6660: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f6660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f6664: 0x24631500  addiu       $v1, $v1, 0x1500
    ctx->pc = 0x1f6664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5376));
    // 0x1f6668: 0x3442001e  ori         $v0, $v0, 0x1E
    ctx->pc = 0x1f6668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
    // 0x1f666c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f666cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f6670: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f6670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f6674: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f6674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6678: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1f6678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1f667c: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x1f667cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x1f6680: 0xc099446  jal         func_265118
    ctx->pc = 0x1F6680u;
    SET_GPR_U32(ctx, 31, 0x1F6688u);
    ctx->pc = 0x1F6684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6680u;
    // 0x1f6684: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F6680u, 0x1F6688u)) {
        return;
    }
    ctx->pc = 0x1F6688u;
label_1f6688:
    // 0x1f6688: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f6688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x1f668c: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x1f668cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    // 0x1f6690: 0x24635b80  addiu       $v1, $v1, 0x5B80
    ctx->pc = 0x1f6690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23424));
    // 0x1f6694: 0x36100019  ori         $s0, $s0, 0x19
    ctx->pc = 0x1f6694u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)25);
    // 0x1f6698: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f6698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f669c: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x1f669cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x1f66a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f66a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66a4: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1f66a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1f66a8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f66a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f66ac: 0xc099446  jal         func_265118
    ctx->pc = 0x1F66ACu;
    SET_GPR_U32(ctx, 31, 0x1F66B4u);
    ctx->pc = 0x1F66B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66ACu;
    // 0x1f66b0: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F66ACu, 0x1F66B4u)) {
        return;
    }
    ctx->pc = 0x1F66B4u;
label_1f66b4:
    // 0x1f66b4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f66b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x1f66b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f66bc: 0x24635c08  addiu       $v1, $v1, 0x5C08
    ctx->pc = 0x1f66bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23560));
    // 0x1f66c0: 0x3442001a  ori         $v0, $v0, 0x1A
    ctx->pc = 0x1f66c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
    // 0x1f66c4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f66c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f66c8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f66c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f66cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f66ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66d0: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1f66d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1f66d4: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x1f66d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x1f66d8: 0xc099446  jal         func_265118
    ctx->pc = 0x1F66D8u;
    SET_GPR_U32(ctx, 31, 0x1F66E0u);
    ctx->pc = 0x1F66DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66D8u;
    // 0x1f66dc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F66D8u, 0x1F66E0u)) {
        return;
    }
    ctx->pc = 0x1F66E0u;
label_1f66e0:
    // 0x1f66e0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1f66e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1f66e4: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x1f66e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    // 0x1f66e8: 0x24632fd0  addiu       $v1, $v1, 0x2FD0
    ctx->pc = 0x1f66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12240));
    // 0x1f66ec: 0x36101001  ori         $s0, $s0, 0x1001
    ctx->pc = 0x1f66ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4097);
    // 0x1f66f0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f66f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f66f4: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x1f66f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x1f66f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f66f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66fc: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1f66fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1f6700: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f6700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f6704: 0xc099446  jal         func_265118
    ctx->pc = 0x1F6704u;
    SET_GPR_U32(ctx, 31, 0x1F670Cu);
    ctx->pc = 0x1F6708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6704u;
    // 0x1f6708: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F6704u, 0x1F670Cu)) {
        return;
    }
    ctx->pc = 0x1F670Cu;
label_1f670c:
    // 0x1f670c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1f670cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1f6710: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f6710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f6714: 0x24633058  addiu       $v1, $v1, 0x3058
    ctx->pc = 0x1f6714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12376));
    // 0x1f6718: 0x34421002  ori         $v0, $v0, 0x1002
    ctx->pc = 0x1f6718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4098);
    // 0x1f671c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f671cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f6720: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f6720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f6724: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f6724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6728: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1f6728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1f672c: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x1f672cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x1f6730: 0xc099446  jal         func_265118
    ctx->pc = 0x1F6730u;
    SET_GPR_U32(ctx, 31, 0x1F6738u);
    ctx->pc = 0x1F6734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6730u;
    // 0x1f6734: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F6730u, 0x1F6738u)) {
        return;
    }
    ctx->pc = 0x1F6738u;
label_1f6738:
    // 0x1f6738: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1f6738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1f673c: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x1f673cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    // 0x1f6740: 0x2463c950  addiu       $v1, $v1, -0x36B0
    ctx->pc = 0x1f6740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953296));
    // 0x1f6744: 0x36101011  ori         $s0, $s0, 0x1011
    ctx->pc = 0x1f6744u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4113);
    // 0x1f6748: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f6748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f674c: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x1f674cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x1f6750: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f6750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6754: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1f6754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1f6758: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f6758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f675c: 0xc099446  jal         func_265118
    ctx->pc = 0x1F675Cu;
    SET_GPR_U32(ctx, 31, 0x1F6764u);
    ctx->pc = 0x1F6760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F675Cu;
    // 0x1f6760: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F675Cu, 0x1F6764u)) {
        return;
    }
    ctx->pc = 0x1F6764u;
label_1f6764:
    // 0x1f6764: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1f6764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1f6768: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x1f6768u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x1f676c: 0x2463c9d8  addiu       $v1, $v1, -0x3628
    ctx->pc = 0x1f676cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953432));
    // 0x1f6770: 0x36311012  ori         $s1, $s1, 0x1012
    ctx->pc = 0x1f6770u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4114);
    // 0x1f6774: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f6774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f6778: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1f6778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x1f677c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f677cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6780: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1f6780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1f6784: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f6784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f6788: 0xc099446  jal         func_265118
    ctx->pc = 0x1F6788u;
    SET_GPR_U32(ctx, 31, 0x1F6790u);
    ctx->pc = 0x1F678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6788u;
    // 0x1f678c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F6788u, 0x1F6790u)) {
        return;
    }
    ctx->pc = 0x1F6790u;
label_1f6790:
    // 0x1f6790: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1f6790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1f6794: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f6794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f6798: 0x2463ca60  addiu       $v1, $v1, -0x35A0
    ctx->pc = 0x1f6798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953568));
    // 0x1f679c: 0x34421013  ori         $v0, $v0, 0x1013
    ctx->pc = 0x1f679cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4115);
    // 0x1f67a0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f67a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f67a4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f67a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f67a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f67a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f67ac: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1f67acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1f67b0: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x1f67b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x1f67b4: 0xc099446  jal         func_265118
    ctx->pc = 0x1F67B4u;
    SET_GPR_U32(ctx, 31, 0x1F67BCu);
    ctx->pc = 0x1F67B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67B4u;
    // 0x1f67b8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F67B4u, 0x1F67BCu)) {
        return;
    }
    ctx->pc = 0x1F67BCu;
label_1f67bc:
    // 0x1f67bc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1f67bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1f67c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f67c4: 0x2463ca78  addiu       $v1, $v1, -0x3588
    ctx->pc = 0x1f67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953592));
    // 0x1f67c8: 0x34421014  ori         $v0, $v0, 0x1014
    ctx->pc = 0x1f67c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4116);
    // 0x1f67cc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f67ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f67d0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f67d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f67d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f67d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f67d8: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x1f67d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x1f67dc: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x1f67dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x1f67e0: 0xc099446  jal         func_265118
    ctx->pc = 0x1F67E0u;
    SET_GPR_U32(ctx, 31, 0x1F67E8u);
    ctx->pc = 0x1F67E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67E0u;
    // 0x1f67e4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F67E0u, 0x1F67E8u)) {
        return;
    }
    ctx->pc = 0x1F67E8u;
label_1f67e8:
    // 0x1f67e8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1f67e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1f67ec: 0x24639f40  addiu       $v1, $v1, -0x60C0
    ctx->pc = 0x1f67ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942528));
    // 0x1f67f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f67f4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f67f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f67f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f67f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f67fc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f67fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f6800: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x1f6800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x1f6804: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f6804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f6808: 0xc099446  jal         func_265118
    ctx->pc = 0x1F6808u;
    SET_GPR_U32(ctx, 31, 0x1F6810u);
    ctx->pc = 0x1F680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6808u;
    // 0x1f680c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F6808u, 0x1F6810u)) {
        return;
    }
    ctx->pc = 0x1F6810u;
label_1f6810:
    // 0x1f6810: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1f6810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1f6814: 0x2463e9a0  addiu       $v1, $v1, -0x1660
    ctx->pc = 0x1f6814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961568));
    // 0x1f6818: 0x24021101  addiu       $v0, $zero, 0x1101
    ctx->pc = 0x1f6818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x1f681c: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1f681cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1f6820: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f6820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6824: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f6824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f6828: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f6828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f682c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f682cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f6830: 0xc099446  jal         func_265118
    ctx->pc = 0x1F6830u;
    SET_GPR_U32(ctx, 31, 0x1F6838u);
    ctx->pc = 0x1F6834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6830u;
    // 0x1f6834: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F6830u, 0x1F6838u)) {
        return;
    }
    ctx->pc = 0x1F6838u;
label_1f6838:
    // 0x1f6838: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f6838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f683c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1f683cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f6840: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f6840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f6844: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f6844u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6848: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f6848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f684c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F684Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F684Cu;
        // 0x1f6850: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F684Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6854u;
    // 0x1f6854: 0x0  nop
    ctx->pc = 0x1f6854u;
    // NOP
    ctx->pc = 0x1f6858u;
}
