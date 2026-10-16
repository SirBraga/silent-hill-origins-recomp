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

// Function: sub_001CB308
// Address: 0x1cb308 - 0x1cb580
void sub_001CB308_0x1cb308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB308_0x1cb308");
#endif

    switch (ctx->pc) {
        case 0x1cb350u: goto label_1cb350;
        case 0x1cb364u: goto label_1cb364;
        case 0x1cb398u: goto label_1cb398;
        case 0x1cb40cu: goto label_1cb40c;
        case 0x1cb43cu: goto label_1cb43c;
        case 0x1cb440u: goto label_1cb440;
        case 0x1cb454u: goto label_1cb454;
        case 0x1cb480u: goto label_1cb480;
        case 0x1cb518u: goto label_1cb518;
        default: break;
    }

    ctx->pc = 0x1cb308u;

    // 0x1cb308: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1cb308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1cb30c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1cb30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1cb310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb314: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1cb314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1cb318: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1cb318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1cb31c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1cb31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1cb320: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1cb320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1cb324: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1cb324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1cb328: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1cb328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1cb32c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1cb32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1cb330: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1cb330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1cb334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb338: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x1cb338u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1cb33c: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x1cb33cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1cb340: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x1cb340u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1cb344: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1cb344u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1cb348: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1CB348u;
    SET_GPR_U32(ctx, 31, 0x1CB350u);
    ctx->pc = 0x1CB34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB348u;
    // 0x1cb34c: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1CB348u, 0x1CB350u)) {
        return;
    }
    ctx->pc = 0x1CB350u;
label_1cb350:
    // 0x1cb350: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cb350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1cb354: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB354u;
    {
        const bool branch_taken_0x1cb354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB354u;
        // 0x1cb358: 0x26020354  addiu       $v0, $s0, 0x354 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 852));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb354) {
            ctx->pc = 0x1CB368u;
            goto label_1cb368;
        }
    }
    ctx->pc = 0x1CB35Cu;
    // 0x1cb35c: 0xc06db7c  jal         func_1B6DF0
    ctx->pc = 0x1CB35Cu;
    SET_GPR_U32(ctx, 31, 0x1CB364u);
    ctx->pc = 0x1B6DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6DF0u, 0x1CB35Cu, 0x1CB364u)) {
        return;
    }
    ctx->pc = 0x1CB364u;
label_1cb364:
    // 0x1cb364: 0x26020354  addiu       $v0, $s0, 0x354
    ctx->pc = 0x1cb364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 852));
label_1cb368:
    // 0x1cb368: 0x26030274  addiu       $v1, $s0, 0x274
    ctx->pc = 0x1cb368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 628));
    // 0x1cb36c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1cb36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1cb370: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb374: 0x260202d8  addiu       $v0, $s0, 0x2D8
    ctx->pc = 0x1cb374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 728));
    // 0x1cb378: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1cb378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1cb37c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1cb37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1cb380: 0x260602c4  addiu       $a2, $s0, 0x2C4
    ctx->pc = 0x1cb380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
    // 0x1cb384: 0x261e0350  addiu       $fp, $s0, 0x350
    ctx->pc = 0x1cb384u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
    // 0x1cb388: 0x26150360  addiu       $s5, $s0, 0x360
    ctx->pc = 0x1cb388u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x1cb38c: 0x26140364  addiu       $s4, $s0, 0x364
    ctx->pc = 0x1cb38cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 868));
    // 0x1cb390: 0x26120358  addiu       $s2, $s0, 0x358
    ctx->pc = 0x1cb390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 856));
    // 0x1cb394: 0x2611035c  addiu       $s1, $s0, 0x35C
    ctx->pc = 0x1cb394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 860));
label_1cb398:
    // 0x1cb398: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cb398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cb39c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cb39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cb3a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cb3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cb3a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb3a8: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1cb3a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1cb3ac: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CB3ACu;
    {
        const bool branch_taken_0x1cb3ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3ACu;
        // 0x1cb3b0: 0xac4001d0  sw          $zero, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb3ac) {
            ctx->pc = 0x1CB398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb398;
        }
    }
    ctx->pc = 0x1CB3B4u;
    // 0x1cb3b4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cb3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cb3b8: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1cb3b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3bc: 0x2663008c  addiu       $v1, $s3, 0x8C
    ctx->pc = 0x1cb3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
    // 0x1cb3c0: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1cb3c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3c4: 0xac4000f4  sw          $zero, 0xF4($v0)
    ctx->pc = 0x1cb3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 0));
    // 0x1cb3c8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1cb3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3cc: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1cb3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1cb3d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3d4: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x1cb3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x1cb3d8: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x1cb3d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3dc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cb3e0: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x1cb3e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3e4: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1cb3e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1cb3e8: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x1cb3e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3ec: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1cb3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1cb3f0: 0x24140064  addiu       $s4, $zero, 0x64
    ctx->pc = 0x1cb3f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1cb3f4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1cb3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1cb3f8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1cb3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1cb3fc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cb3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cb400: 0x8fb50008  lw          $s5, 0x8($sp)
    ctx->pc = 0x1cb400u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb404: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CB404u;
    SET_GPR_U32(ctx, 31, 0x1CB40Cu);
    ctx->pc = 0x1CB408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB404u;
    // 0x1cb408: 0xac4001d0  sw          $zero, 0x1D0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CB404u, 0x1CB40Cu)) {
        return;
    }
    ctx->pc = 0x1CB40Cu;
label_1cb40c:
    // 0x1cb40c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1cb40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1cb410: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cb410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1cb414: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1cb414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1cb418: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cb418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb41c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1cb41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cb420: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1cb420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb424: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1cb424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1cb428: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cb428u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cb42c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1cb42cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1cb430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb434: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CB434u;
    SET_GPR_U32(ctx, 31, 0x1CB43Cu);
    ctx->pc = 0x1CB438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB434u;
    // 0x1cb438: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CB434u, 0x1CB43Cu)) {
        return;
    }
    ctx->pc = 0x1CB43Cu;
label_1cb43c:
    // 0x1cb43c: 0x0  nop
    ctx->pc = 0x1cb43cu;
    // NOP
label_1cb440:
    // 0x1cb440: 0xe6b60000  swc1        $f22, 0x0($s5)
    ctx->pc = 0x1cb440u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x1cb444: 0xe6d60000  swc1        $f22, 0x0($s6)
    ctx->pc = 0x1cb444u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x1cb448: 0x26b5001c  addiu       $s5, $s5, 0x1C
    ctx->pc = 0x1cb448u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x1cb44c: 0xc0c580c  jal         func_316030
    ctx->pc = 0x1CB44Cu;
    SET_GPR_U32(ctx, 31, 0x1CB454u);
    ctx->pc = 0x1CB450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB44Cu;
    // 0x1cb450: 0x26d6001c  addiu       $s6, $s6, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x1CB44Cu, 0x1CB454u)) {
        return;
    }
    ctx->pc = 0x1CB454u;
label_1cb454:
    // 0x1cb454: 0x54001a  div         $zero, $v0, $s4
    ctx->pc = 0x1cb454u;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cb458: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CB458u;
    {
        const bool branch_taken_0x1cb458 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb458) {
            ctx->pc = 0x1CB45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB458u;
            // 0x1cb45c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB460u;
            goto label_1cb460;
        }
    }
    ctx->pc = 0x1CB460u;
label_1cb460:
    // 0x1cb460: 0x1810  mfhi        $v1
    ctx->pc = 0x1cb460u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1cb464: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb468: 0x0  nop
    ctx->pc = 0x1cb468u;
    // NOP
    // 0x1cb46c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cb46cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cb470: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x1cb470u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[21]);
    // 0x1cb474: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x1cb474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x1cb478: 0xc0c580c  jal         func_316030
    ctx->pc = 0x1CB478u;
    SET_GPR_U32(ctx, 31, 0x1CB480u);
    ctx->pc = 0x1CB47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB478u;
    // 0x1cb47c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x1CB478u, 0x1CB480u)) {
        return;
    }
    ctx->pc = 0x1CB480u;
label_1cb480:
    // 0x1cb480: 0x54001a  div         $zero, $v0, $s4
    ctx->pc = 0x1cb480u;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cb484: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CB484u;
    {
        const bool branch_taken_0x1cb484 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb484) {
            ctx->pc = 0x1CB488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB484u;
            // 0x1cb488: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB48Cu;
            goto label_1cb48c;
        }
    }
    ctx->pc = 0x1CB48Cu;
label_1cb48c:
    // 0x1cb48c: 0x1810  mfhi        $v1
    ctx->pc = 0x1cb48cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1cb490: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb494: 0x0  nop
    ctx->pc = 0x1cb494u;
    // NOP
    // 0x1cb498: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cb498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cb49c: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x1cb49cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[21]);
    // 0x1cb4a0: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x1cb4a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x1cb4a4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1cb4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1cb4a8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1cb4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb4ac: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x1cb4acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1cb4b0: 0x0  nop
    ctx->pc = 0x1cb4b0u;
    // NOP
    // 0x1cb4b4: 0x0  nop
    ctx->pc = 0x1cb4b4u;
    // NOP
    // 0x1cb4b8: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x1cb4b8u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[1]);
    // 0x1cb4bc: 0xe6e10000  swc1        $f1, 0x0($s7)
    ctx->pc = 0x1cb4bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x1cb4c0: 0x26f7001c  addiu       $s7, $s7, 0x1C
    ctx->pc = 0x1cb4c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x1cb4c4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1cb4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb4c8: 0x0  nop
    ctx->pc = 0x1cb4c8u;
    // NOP
    // 0x1cb4cc: 0x0  nop
    ctx->pc = 0x1cb4ccu;
    // NOP
    // 0x1cb4d0: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x1cb4d0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
    // 0x1cb4d4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1cb4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1cb4d8: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x1cb4d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x1cb4dc: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1cb4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1cb4e0: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x1cb4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1cb4e4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1CB4E4u;
    {
        const bool branch_taken_0x1cb4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4E4u;
        // 0x1cb4e8: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4e4) {
            ctx->pc = 0x1CB440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb440;
        }
    }
    ctx->pc = 0x1CB4ECu;
    // 0x1cb4ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb4f0: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1cb4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1cb4f4: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1cb4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
    // 0x1cb4f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1cb4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb4fc: 0x3c01c308  lui         $at, 0xC308
    ctx->pc = 0x1cb4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49928 << 16));
    // 0x1cb500: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb504: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1cb504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb508: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x1cb508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x1cb50c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1cb50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cb510: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1cb510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1cb514: 0x0  nop
    ctx->pc = 0x1cb514u;
    // NOP
label_1cb518:
    // 0x1cb518: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1cb518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1cb51c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1cb51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1cb520: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1cb520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1cb524: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1cb524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cb528: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CB528u;
    {
        const bool branch_taken_0x1cb528 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1CB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB528u;
        // 0x1cb52c: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb528) {
            ctx->pc = 0x1CB518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb518;
        }
    }
    ctx->pc = 0x1CB530u;
    // 0x1cb530: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cb530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb534: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1cb534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cb538: 0xae0202a0  sw          $v0, 0x2A0($s0)
    ctx->pc = 0x1cb538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 2));
    // 0x1cb53c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1cb53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cb540: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1cb540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cb544: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1cb544u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cb548: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1cb548u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cb54c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1cb54cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cb550: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1cb550u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cb554: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1cb554u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb558: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1cb558u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb55c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb560: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x1cb560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1cb564: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x1cb564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1cb568: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x1cb568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1cb56c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1cb56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cb570: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1cb570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cb574: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB574u;
        // 0x1cb578: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB57Cu;
    // 0x1cb57c: 0x0  nop
    ctx->pc = 0x1cb57cu;
    // NOP
    ctx->pc = 0x1cb580u;
}
