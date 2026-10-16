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

// Function: sub_0025F3A8
// Address: 0x25f3a8 - 0x25f538
void sub_0025F3A8_0x25f3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F3A8_0x25f3a8");
#endif

    switch (ctx->pc) {
        case 0x25f408u: goto label_25f408;
        case 0x25f414u: goto label_25f414;
        case 0x25f428u: goto label_25f428;
        case 0x25f444u: goto label_25f444;
        case 0x25f458u: goto label_25f458;
        case 0x25f460u: goto label_25f460;
        case 0x25f478u: goto label_25f478;
        case 0x25f4a0u: goto label_25f4a0;
        case 0x25f4b0u: goto label_25f4b0;
        case 0x25f4c4u: goto label_25f4c4;
        case 0x25f4d8u: goto label_25f4d8;
        case 0x25f4e8u: goto label_25f4e8;
        case 0x25f500u: goto label_25f500;
        default: break;
    }

    ctx->pc = 0x25f3a8u;

    // 0x25f3a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25f3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x25f3ac: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x25f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x25f3b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25f3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x25f3b4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x25f3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x25f3b8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x25f3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x25f3bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25f3bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f3c0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x25f3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x25f3c4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x25f3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x25f3c8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x25f3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x25f3cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25f3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25f3d0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x25f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x25f3d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25f3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25f3d8: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x25F3D8u;
    {
        const bool branch_taken_0x25f3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3D8u;
        // 0x25f3dc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3d8) {
            ctx->pc = 0x25F510u;
            goto label_25f510;
        }
    }
    ctx->pc = 0x25F3E0u;
    // 0x25f3e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x25f3e4: 0x8c4241b0  lw          $v0, 0x41B0($v0)
    ctx->pc = 0x25f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41B0u));
    // 0x25f3e8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x25f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x25f3ec: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x25f3ecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25f3f0: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x25f3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x25f3f4: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x25F3F4u;
    {
        const bool branch_taken_0x25f3f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F3F4u;
        // 0x25f3f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3f4) {
            ctx->pc = 0x25F420u;
            goto label_25f420;
        }
    }
    ctx->pc = 0x25F3FCu;
    // 0x25f3fc: 0x26b00004  addiu       $s0, $s5, 0x4
    ctx->pc = 0x25f3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x25f400: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25f400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25f404: 0x0  nop
    ctx->pc = 0x25f404u;
    // NOP
label_25f408:
    // 0x25f408: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25f408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25f40c: 0xc098e22  jal         func_263888
    ctx->pc = 0x25F40Cu;
    SET_GPR_U32(ctx, 31, 0x25F414u);
    ctx->pc = 0x25F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F40Cu;
    // 0x25f410: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x263888u, 0x25F40Cu, 0x25F414u)) {
        return;
    }
    ctx->pc = 0x25F414u;
label_25f414:
    // 0x25f414: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x25f414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x25f418: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x25F418u;
    {
        const bool branch_taken_0x25f418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f418) {
            ctx->pc = 0x25F41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F418u;
            // 0x25f41c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f408;
        }
    }
    ctx->pc = 0x25F420u;
label_25f420:
    // 0x25f420: 0xc097dea  jal         func_25F7A8
    ctx->pc = 0x25F420u;
    SET_GPR_U32(ctx, 31, 0x25F428u);
    ctx->pc = 0x25F424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F420u;
    // 0x25f424: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25F7A8u, 0x25F420u, 0x25F428u)) {
        return;
    }
    ctx->pc = 0x25F428u;
label_25f428:
    // 0x25f428: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x25f428u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x25f42c: 0x2446fff4  addiu       $a2, $v0, -0xC
    ctx->pc = 0x25f42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x25f430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f434: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25f434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f438: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x25f438u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x25f43c: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x25F43Cu;
    SET_GPR_U32(ctx, 31, 0x25F444u);
    ctx->pc = 0x25F440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F43Cu;
    // 0x25f440: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x25F43Cu, 0x25F444u)) {
        return;
    }
    ctx->pc = 0x25F444u;
label_25f444:
    // 0x25f444: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25F444u;
    {
        const bool branch_taken_0x25f444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F444u;
        // 0x25f448: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f444) {
            ctx->pc = 0x25F460u;
            goto label_25f460;
        }
    }
    ctx->pc = 0x25F44Cu;
    // 0x25f44c: 0x27858648  addiu       $a1, $gp, -0x79B8
    ctx->pc = 0x25f44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936136));
    // 0x25f450: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x25F450u;
    SET_GPR_U32(ctx, 31, 0x25F458u);
    ctx->pc = 0x25F454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F450u;
    // 0x25f454: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x25F450u, 0x25F458u)) {
        return;
    }
    ctx->pc = 0x25F458u;
label_25f458:
    // 0x25f458: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F458u;
    {
        const bool branch_taken_0x25f458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f458) {
            ctx->pc = 0x25F45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F458u;
            // 0x25f45c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F468u;
            goto label_25f468;
        }
    }
    ctx->pc = 0x25F460u;
label_25f460:
    // 0x25f460: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x25F460u;
    {
        const bool branch_taken_0x25f460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F460u;
        // 0x25f464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f460) {
            ctx->pc = 0x25F514u;
            goto label_25f514;
        }
    }
    ctx->pc = 0x25F468u;
label_25f468:
    // 0x25f468: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x25F468u;
    {
        const bool branch_taken_0x25f468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F468u;
        // 0x25f46c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f468) {
            ctx->pc = 0x25F510u;
            goto label_25f510;
        }
    }
    ctx->pc = 0x25F470u;
    // 0x25f470: 0x26b40004  addiu       $s4, $s5, 0x4
    ctx->pc = 0x25f470u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x25f474: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x25f474u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25f478:
    // 0x25f478: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f47c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x25f47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f480: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25f480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25f484: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x25f484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x25f488: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x25f488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25f48c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x25f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25f490: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x25f490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25f494: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25f494u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f498: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x25F498u;
    SET_GPR_U32(ctx, 31, 0x25F4A0u);
    ctx->pc = 0x25F49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F498u;
    // 0x25f49c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x25F498u, 0x25F4A0u)) {
        return;
    }
    ctx->pc = 0x25F4A0u;
label_25f4a0:
    // 0x25f4a0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x25F4A0u;
    {
        const bool branch_taken_0x25f4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F4A0u;
        // 0x25f4a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4a0) {
            ctx->pc = 0x25F514u;
            goto label_25f514;
        }
    }
    ctx->pc = 0x25F4A8u;
    // 0x25f4a8: 0xc097ca0  jal         func_25F280
    ctx->pc = 0x25F4A8u;
    SET_GPR_U32(ctx, 31, 0x25F4B0u);
    ctx->pc = 0x25F4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F4A8u;
    // 0x25f4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25F280u, 0x25F4A8u, 0x25F4B0u)) {
        return;
    }
    ctx->pc = 0x25F4B0u;
label_25f4b0:
    // 0x25f4b0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x25f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x25f4b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4b8: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x25f4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x25f4bc: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x25F4BCu;
    SET_GPR_U32(ctx, 31, 0x25F4C4u);
    ctx->pc = 0x25F4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F4BCu;
    // 0x25f4c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x25F4BCu, 0x25F4C4u)) {
        return;
    }
    ctx->pc = 0x25F4C4u;
label_25f4c4:
    // 0x25f4c4: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x25F4C4u;
    {
        const bool branch_taken_0x25f4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F4C4u;
        // 0x25f4c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4c4) {
            ctx->pc = 0x25F460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f460;
        }
    }
    ctx->pc = 0x25F4CCu;
    // 0x25f4cc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x25f4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25f4d0: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x25F4D0u;
    SET_GPR_U32(ctx, 31, 0x25F4D8u);
    ctx->pc = 0x25F4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F4D0u;
    // 0x25f4d4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x25F4D0u, 0x25F4D8u)) {
        return;
    }
    ctx->pc = 0x25F4D8u;
label_25f4d8:
    // 0x25f4d8: 0x1040ffe1  beqz        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x25F4D8u;
    {
        const bool branch_taken_0x25f4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F4D8u;
        // 0x25f4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f4d8) {
            ctx->pc = 0x25F460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f460;
        }
    }
    ctx->pc = 0x25F4E0u;
    // 0x25f4e0: 0xc097cc4  jal         func_25F310
    ctx->pc = 0x25F4E0u;
    SET_GPR_U32(ctx, 31, 0x25F4E8u);
    ctx->pc = 0x25F4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F4E0u;
    // 0x25f4e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25F310u, 0x25F4E0u, 0x25F4E8u)) {
        return;
    }
    ctx->pc = 0x25F4E8u;
label_25f4e8:
    // 0x25f4e8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x25f4e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x25f4ec: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x25f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25f4f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4f4: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x25f4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x25f4f8: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x25F4F8u;
    SET_GPR_U32(ctx, 31, 0x25F500u);
    ctx->pc = 0x25F4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F4F8u;
    // 0x25f4fc: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x25F4F8u, 0x25F500u)) {
        return;
    }
    ctx->pc = 0x25F500u;
label_25f500:
    // 0x25f500: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x25f500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x25f504: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x25f504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25f508: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x25F508u;
    {
        const bool branch_taken_0x25f508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f508) {
            ctx->pc = 0x25F50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F508u;
            // 0x25f50c: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f478;
        }
    }
    ctx->pc = 0x25F510u;
label_25f510:
    // 0x25f510: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x25f510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25f514:
    // 0x25f514: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x25f514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25f518: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x25f518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f51c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x25f51cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f520: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25f520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f524: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x25f524u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f528: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x25f528u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f52c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25f52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f530: 0x3e00008  jr          $ra
    ctx->pc = 0x25F530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F530u;
        // 0x25f534: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F538u;
}
