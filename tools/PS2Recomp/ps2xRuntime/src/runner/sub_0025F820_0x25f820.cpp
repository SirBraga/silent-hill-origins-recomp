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

// Function: sub_0025F820
// Address: 0x25f820 - 0x25f9b0
void sub_0025F820_0x25f820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F820_0x25f820");
#endif

    switch (ctx->pc) {
        case 0x25f850u: goto label_25f850;
        case 0x25f880u: goto label_25f880;
        case 0x25f88cu: goto label_25f88c;
        case 0x25f8a0u: goto label_25f8a0;
        case 0x25f8bcu: goto label_25f8bc;
        case 0x25f8d0u: goto label_25f8d0;
        case 0x25f8d8u: goto label_25f8d8;
        case 0x25f8f0u: goto label_25f8f0;
        case 0x25f918u: goto label_25f918;
        case 0x25f928u: goto label_25f928;
        case 0x25f93cu: goto label_25f93c;
        case 0x25f950u: goto label_25f950;
        case 0x25f960u: goto label_25f960;
        case 0x25f978u: goto label_25f978;
        default: break;
    }

    ctx->pc = 0x25f820u;

    // 0x25f820: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25f820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x25f824: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25f824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x25f828: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x25f828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x25f82c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25f82cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f830: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25f830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f834: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x25f834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x25f838: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x25f838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x25f83c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x25f83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x25f840: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x25f840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x25f844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25f844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25f848: 0xc097188  jal         func_25C620
    ctx->pc = 0x25F848u;
    SET_GPR_U32(ctx, 31, 0x25F850u);
    ctx->pc = 0x25F84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F848u;
    // 0x25f84c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C620u, 0x25F848u, 0x25F850u)) {
        return;
    }
    ctx->pc = 0x25F850u;
label_25f850:
    // 0x25f850: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25f850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25f854: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x25f854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x25f858: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x25f858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25f85c: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x25F85Cu;
    {
        const bool branch_taken_0x25f85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F85Cu;
        // 0x25f860: 0x8f829144  lw          $v0, -0x6EBC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f85c) {
            ctx->pc = 0x25F988u;
            goto label_25f988;
        }
    }
    ctx->pc = 0x25F864u;
    // 0x25f864: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x25f864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x25f868: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x25f868u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25f86c: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x25f86cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x25f870: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25F870u;
    {
        const bool branch_taken_0x25f870 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F870u;
        // 0x25f874: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f870) {
            ctx->pc = 0x25F898u;
            goto label_25f898;
        }
    }
    ctx->pc = 0x25F878u;
    // 0x25f878: 0x26b00004  addiu       $s0, $s5, 0x4
    ctx->pc = 0x25f878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x25f87c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25f880:
    // 0x25f880: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25f880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25f884: 0xc098e22  jal         func_263888
    ctx->pc = 0x25F884u;
    SET_GPR_U32(ctx, 31, 0x25F88Cu);
    ctx->pc = 0x25F888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F884u;
    // 0x25f888: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x263888u, 0x25F884u, 0x25F88Cu)) {
        return;
    }
    ctx->pc = 0x25F88Cu;
label_25f88c:
    // 0x25f88c: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x25f88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x25f890: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x25F890u;
    {
        const bool branch_taken_0x25f890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f890) {
            ctx->pc = 0x25F894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F890u;
            // 0x25f894: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f880;
        }
    }
    ctx->pc = 0x25F898u;
label_25f898:
    // 0x25f898: 0xc097f0a  jal         func_25FC28
    ctx->pc = 0x25F898u;
    SET_GPR_U32(ctx, 31, 0x25F8A0u);
    ctx->pc = 0x25F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F898u;
    // 0x25f89c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25FC28u, 0x25F898u, 0x25F8A0u)) {
        return;
    }
    ctx->pc = 0x25F8A0u;
label_25f8a0:
    // 0x25f8a0: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x25f8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x25f8a4: 0x2446fff4  addiu       $a2, $v0, -0xC
    ctx->pc = 0x25f8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x25f8a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25f8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f8b0: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x25f8b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x25f8b4: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x25F8B4u;
    SET_GPR_U32(ctx, 31, 0x25F8BCu);
    ctx->pc = 0x25F8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F8B4u;
    // 0x25f8b8: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x25F8B4u, 0x25F8BCu)) {
        return;
    }
    ctx->pc = 0x25F8BCu;
label_25f8bc:
    // 0x25f8bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25F8BCu;
    {
        const bool branch_taken_0x25f8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8BCu;
        // 0x25f8c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8bc) {
            ctx->pc = 0x25F8D8u;
            goto label_25f8d8;
        }
    }
    ctx->pc = 0x25F8C4u;
    // 0x25f8c4: 0x2785864c  addiu       $a1, $gp, -0x79B4
    ctx->pc = 0x25f8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936140));
    // 0x25f8c8: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x25F8C8u;
    SET_GPR_U32(ctx, 31, 0x25F8D0u);
    ctx->pc = 0x25F8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F8C8u;
    // 0x25f8cc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x25F8C8u, 0x25F8D0u)) {
        return;
    }
    ctx->pc = 0x25F8D0u;
label_25f8d0:
    // 0x25f8d0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F8D0u;
    {
        const bool branch_taken_0x25f8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f8d0) {
            ctx->pc = 0x25F8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F8D0u;
            // 0x25f8d4: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F8E0u;
            goto label_25f8e0;
        }
    }
    ctx->pc = 0x25F8D8u;
label_25f8d8:
    // 0x25f8d8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x25F8D8u;
    {
        const bool branch_taken_0x25f8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8D8u;
        // 0x25f8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8d8) {
            ctx->pc = 0x25F98Cu;
            goto label_25f98c;
        }
    }
    ctx->pc = 0x25F8E0u;
label_25f8e0:
    // 0x25f8e0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x25F8E0u;
    {
        const bool branch_taken_0x25f8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8E0u;
        // 0x25f8e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8e0) {
            ctx->pc = 0x25F988u;
            goto label_25f988;
        }
    }
    ctx->pc = 0x25F8E8u;
    // 0x25f8e8: 0x26b40004  addiu       $s4, $s5, 0x4
    ctx->pc = 0x25f8e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x25f8ec: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x25f8ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25f8f0:
    // 0x25f8f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x25f8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8f8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25f8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25f8fc: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x25f8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x25f900: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x25f900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25f904: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x25f904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25f908: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x25f908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25f90c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25f90cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f910: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x25F910u;
    SET_GPR_U32(ctx, 31, 0x25F918u);
    ctx->pc = 0x25F914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F910u;
    // 0x25f914: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x25F910u, 0x25F918u)) {
        return;
    }
    ctx->pc = 0x25F918u;
label_25f918:
    // 0x25f918: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x25F918u;
    {
        const bool branch_taken_0x25f918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F918u;
        // 0x25f91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f918) {
            ctx->pc = 0x25F98Cu;
            goto label_25f98c;
        }
    }
    ctx->pc = 0x25F920u;
    // 0x25f920: 0xc097ca0  jal         func_25F280
    ctx->pc = 0x25F920u;
    SET_GPR_U32(ctx, 31, 0x25F928u);
    ctx->pc = 0x25F924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F920u;
    // 0x25f924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25F280u, 0x25F920u, 0x25F928u)) {
        return;
    }
    ctx->pc = 0x25F928u;
label_25f928:
    // 0x25f928: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x25f928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x25f92c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f930: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x25f930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x25f934: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x25F934u;
    SET_GPR_U32(ctx, 31, 0x25F93Cu);
    ctx->pc = 0x25F938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F934u;
    // 0x25f938: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x25F934u, 0x25F93Cu)) {
        return;
    }
    ctx->pc = 0x25F93Cu;
label_25f93c:
    // 0x25f93c: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x25F93Cu;
    {
        const bool branch_taken_0x25f93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F93Cu;
        // 0x25f940: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f93c) {
            ctx->pc = 0x25F8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f8d8;
        }
    }
    ctx->pc = 0x25F944u;
    // 0x25f944: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x25f944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25f948: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x25F948u;
    SET_GPR_U32(ctx, 31, 0x25F950u);
    ctx->pc = 0x25F94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F948u;
    // 0x25f94c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x25F948u, 0x25F950u)) {
        return;
    }
    ctx->pc = 0x25F950u;
label_25f950:
    // 0x25f950: 0x1040ffe1  beqz        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x25F950u;
    {
        const bool branch_taken_0x25f950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F950u;
        // 0x25f954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f950) {
            ctx->pc = 0x25F8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f8d8;
        }
    }
    ctx->pc = 0x25F958u;
    // 0x25f958: 0xc097cc4  jal         func_25F310
    ctx->pc = 0x25F958u;
    SET_GPR_U32(ctx, 31, 0x25F960u);
    ctx->pc = 0x25F95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F958u;
    // 0x25f95c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25F310u, 0x25F958u, 0x25F960u)) {
        return;
    }
    ctx->pc = 0x25F960u;
label_25f960:
    // 0x25f960: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x25f960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x25f964: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x25f964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25f968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f96c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x25f96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x25f970: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x25F970u;
    SET_GPR_U32(ctx, 31, 0x25F978u);
    ctx->pc = 0x25F974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F970u;
    // 0x25f974: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x25F970u, 0x25F978u)) {
        return;
    }
    ctx->pc = 0x25F978u;
label_25f978:
    // 0x25f978: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x25f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x25f97c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x25f97cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25f980: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x25F980u;
    {
        const bool branch_taken_0x25f980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f980) {
            ctx->pc = 0x25F984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F980u;
            // 0x25f984: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f8f0;
        }
    }
    ctx->pc = 0x25F988u;
label_25f988:
    // 0x25f988: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x25f988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25f98c:
    // 0x25f98c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x25f98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25f990: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x25f990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f994: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x25f994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f998: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25f998u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f99c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x25f99cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f9a0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x25f9a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f9a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25f9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x25F9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9A8u;
        // 0x25f9ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F9B0u;
}
