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

// Function: sub_001F63B0
// Address: 0x1f63b0 - 0x1f6508
void sub_001F63B0_0x1f63b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F63B0_0x1f63b0");
#endif

    switch (ctx->pc) {
        case 0x1f63f4u: goto label_1f63f4;
        case 0x1f6420u: goto label_1f6420;
        case 0x1f6448u: goto label_1f6448;
        case 0x1f6470u: goto label_1f6470;
        case 0x1f6498u: goto label_1f6498;
        case 0x1f64c0u: goto label_1f64c0;
        case 0x1f64e8u: goto label_1f64e8;
        default: break;
    }

    ctx->pc = 0x1f63b0u;

    // 0x1f63b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f63b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f63b4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1f63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1f63b8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f63b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1f63bc: 0x24429ea0  addiu       $v0, $v0, -0x6160
    ctx->pc = 0x1f63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942368));
    // 0x1f63c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f63c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f63c4: 0x24101001  addiu       $s0, $zero, 0x1001
    ctx->pc = 0x1f63c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x1f63c8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1f63c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f63cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f63ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1f63d0: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x1f63d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x1f63d4: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1f63d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1f63d8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f63d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f63dc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1f63dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1f63e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1f63e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1f63e4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f63e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1f63e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f63e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f63ec: 0xc099446  jal         func_265118
    ctx->pc = 0x1F63ECu;
    SET_GPR_U32(ctx, 31, 0x1F63F4u);
    ctx->pc = 0x1F63F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F63ECu;
    // 0x1f63f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F63ECu, 0x1F63F4u)) {
        return;
    }
    ctx->pc = 0x1F63F4u;
label_1f63f4:
    // 0x1f63f4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1f63f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1f63f8: 0x24639f28  addiu       $v1, $v1, -0x60D8
    ctx->pc = 0x1f63f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942504));
    // 0x1f63fc: 0x24021002  addiu       $v0, $zero, 0x1002
    ctx->pc = 0x1f63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x1f6400: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1f6400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6404: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f6404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f6408: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f6408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f640c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f640cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6410: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x1f6410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x1f6414: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1f6414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1f6418: 0xc099446  jal         func_265118
    ctx->pc = 0x1F6418u;
    SET_GPR_U32(ctx, 31, 0x1F6420u);
    ctx->pc = 0x1F641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6418u;
    // 0x1f641c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F6418u, 0x1F6420u)) {
        return;
    }
    ctx->pc = 0x1F6420u;
label_1f6420:
    // 0x1f6420: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1f6420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1f6424: 0x24639f40  addiu       $v1, $v1, -0x60C0
    ctx->pc = 0x1f6424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942528));
    // 0x1f6428: 0x24021003  addiu       $v0, $zero, 0x1003
    ctx->pc = 0x1f6428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    // 0x1f642c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f642cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f6430: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f6430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6434: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f6434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f6438: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1f6438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1f643c: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x1f643cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x1f6440: 0xc099446  jal         func_265118
    ctx->pc = 0x1F6440u;
    SET_GPR_U32(ctx, 31, 0x1F6448u);
    ctx->pc = 0x1F6444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6440u;
    // 0x1f6444: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F6440u, 0x1F6448u)) {
        return;
    }
    ctx->pc = 0x1F6448u;
label_1f6448:
    // 0x1f6448: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1f6448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1f644c: 0x24632c90  addiu       $v1, $v1, 0x2C90
    ctx->pc = 0x1f644cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11408));
    // 0x1f6450: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x1f6450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f6454: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f6454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f6458: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f6458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f645c: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x1f645cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x1f6460: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1f6460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1f6464: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f6464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f6468: 0xc099446  jal         func_265118
    ctx->pc = 0x1F6468u;
    SET_GPR_U32(ctx, 31, 0x1F6470u);
    ctx->pc = 0x1F646Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6468u;
    // 0x1f646c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F6468u, 0x1F6470u)) {
        return;
    }
    ctx->pc = 0x1F6470u;
label_1f6470:
    // 0x1f6470: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1f6470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1f6474: 0x24632d18  addiu       $v1, $v1, 0x2D18
    ctx->pc = 0x1f6474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11544));
    // 0x1f6478: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1f6478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f647c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f647cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f6480: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f6480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6484: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x1f6484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x1f6488: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1f6488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x1f648c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f648cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f6490: 0xc099446  jal         func_265118
    ctx->pc = 0x1F6490u;
    SET_GPR_U32(ctx, 31, 0x1F6498u);
    ctx->pc = 0x1F6494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6490u;
    // 0x1f6494: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F6490u, 0x1F6498u)) {
        return;
    }
    ctx->pc = 0x1F6498u;
label_1f6498:
    // 0x1f6498: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1f6498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1f649c: 0x24632da0  addiu       $v1, $v1, 0x2DA0
    ctx->pc = 0x1f649cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11680));
    // 0x1f64a0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f64a4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f64a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f64a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f64a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f64ac: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f64acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f64b0: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1f64b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1f64b4: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x1f64b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x1f64b8: 0xc099446  jal         func_265118
    ctx->pc = 0x1F64B8u;
    SET_GPR_U32(ctx, 31, 0x1F64C0u);
    ctx->pc = 0x1F64BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F64B8u;
    // 0x1f64bc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F64B8u, 0x1F64C0u)) {
        return;
    }
    ctx->pc = 0x1F64C0u;
label_1f64c0:
    // 0x1f64c0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1f64c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1f64c4: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x1f64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
    // 0x1f64c8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1f64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f64cc: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x1f64ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x1f64d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f64d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f64d4: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x1f64d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x1f64d8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f64d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f64dc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f64dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f64e0: 0xc099446  jal         func_265118
    ctx->pc = 0x1F64E0u;
    SET_GPR_U32(ctx, 31, 0x1F64E8u);
    ctx->pc = 0x1F64E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F64E0u;
    // 0x1f64e4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265118u, 0x1F64E0u, 0x1F64E8u)) {
        return;
    }
    ctx->pc = 0x1F64E8u;
label_1f64e8:
    // 0x1f64e8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f64e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f64ec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1f64ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f64f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f64f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f64f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f64f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f64f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f64f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f64fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F64FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64FCu;
        // 0x1f6500: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F64FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6504u;
    // 0x1f6504: 0x0  nop
    ctx->pc = 0x1f6504u;
    // NOP
    ctx->pc = 0x1f6508u;
}
