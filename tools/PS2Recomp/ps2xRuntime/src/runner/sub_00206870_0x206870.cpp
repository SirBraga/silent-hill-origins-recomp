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

// Function: sub_00206870
// Address: 0x206870 - 0x206a48
void sub_00206870_0x206870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206870_0x206870");
#endif

    switch (ctx->pc) {
        case 0x206898u: goto label_206898;
        case 0x2068d0u: goto label_2068d0;
        case 0x2068f8u: goto label_2068f8;
        case 0x206968u: goto label_206968;
        case 0x2069a4u: goto label_2069a4;
        default: break;
    }

    ctx->pc = 0x206870u;

    // 0x206870: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x206870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
    // 0x206874: 0x7fb10430  sq          $s1, 0x430($sp)
    ctx->pc = 0x206874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 17));
    // 0x206878: 0x7fb00440  sq          $s0, 0x440($sp)
    ctx->pc = 0x206878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 16));
    // 0x20687c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20687cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206880: 0x7fb20420  sq          $s2, 0x420($sp)
    ctx->pc = 0x206880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 18));
    // 0x206884: 0x7fb30410  sq          $s3, 0x410($sp)
    ctx->pc = 0x206884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 19));
    // 0x206888: 0x18a00067  blez        $a1, . + 4 + (0x67 << 2)
    ctx->pc = 0x206888u;
    {
        const bool branch_taken_0x206888 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x20688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206888u;
        // 0x20688c: 0xffbf0400  sd          $ra, 0x400($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206888) {
            ctx->pc = 0x206A28u;
            goto label_206a28;
        }
    }
    ctx->pc = 0x206890u;
    // 0x206890: 0x28a20401  slti        $v0, $a1, 0x401
    ctx->pc = 0x206890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x206894: 0x0  nop
    ctx->pc = 0x206894u;
    // NOP
label_206898:
    // 0x206898: 0x24120400  addiu       $s2, $zero, 0x400
    ctx->pc = 0x206898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x20689c: 0xa2900b  movn        $s2, $a1, $v0
    ctx->pc = 0x20689cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5));
    // 0x2068a0: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2068A0u;
    {
        const bool branch_taken_0x2068a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2068a0) {
            ctx->pc = 0x2068A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2068A0u;
            // 0x2068a4: 0x8e232010  lw          $v1, 0x2010($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2068B0u;
            goto label_2068b0;
        }
    }
    ctx->pc = 0x2068A8u;
    // 0x2068a8: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2068A8u;
    {
        const bool branch_taken_0x2068a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2068ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068A8u;
        // 0x2068ac: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068a8) {
            ctx->pc = 0x206A1Cu;
            goto label_206a1c;
        }
    }
    ctx->pc = 0x2068B0u;
label_2068b0:
    // 0x2068b0: 0xb29823  subu        $s3, $a1, $s2
    ctx->pc = 0x2068b0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2068b4: 0xde222030  ld          $v0, 0x2030($s1)
    ctx->pc = 0x2068b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8240)));
    // 0x2068b8: 0xae3d2028  sw          $sp, 0x2028($s1)
    ctx->pc = 0x2068b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8232), GPR_U32(ctx, 29));
    // 0x2068bc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2068bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2068c0: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2068C0u;
    {
        const bool branch_taken_0x2068c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2068C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068C0u;
        // 0x2068c4: 0xae32202c  sw          $s2, 0x202C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8236), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068c0) {
            ctx->pc = 0x206A10u;
            goto label_206a10;
        }
    }
    ctx->pc = 0x2068C8u;
    // 0x2068c8: 0x8e242008  lw          $a0, 0x2008($s1)
    ctx->pc = 0x2068c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8200)));
    // 0x2068cc: 0x0  nop
    ctx->pc = 0x2068ccu;
    // NOP
label_2068d0:
    // 0x2068d0: 0x28821000  slti        $v0, $a0, 0x1000
    ctx->pc = 0x2068d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x2068d4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2068D4u;
    {
        const bool branch_taken_0x2068d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2068d4) {
            ctx->pc = 0x2068D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2068D4u;
            // 0x2068d8: 0x8e22200c  lw          $v0, 0x200C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20691Cu;
            goto label_20691c;
        }
    }
    ctx->pc = 0x2068DCu;
    // 0x2068dc: 0x8e23200c  lw          $v1, 0x200C($s1)
    ctx->pc = 0x2068dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8204)));
    // 0x2068e0: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2068E0u;
    {
        const bool branch_taken_0x2068e0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2068E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068E0u;
        // 0x2068e4: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068e0) {
            ctx->pc = 0x206918u;
            goto label_206918;
        }
    }
    ctx->pc = 0x2068E8u;
    // 0x2068e8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2068e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2068ec: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2068ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2068f0: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x2068f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2068f4: 0x26302018  addiu       $s0, $s1, 0x2018
    ctx->pc = 0x2068f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8216));
label_2068f8:
    // 0x2068f8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2068f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2068fc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2068fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x206900: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x206900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x206904: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x206904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x206908: 0x1ca0fffb  bgtz        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x206908u;
    {
        const bool branch_taken_0x206908 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x20690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206908u;
        // 0x20690c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206908) {
            ctx->pc = 0x2068F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2068f8;
        }
    }
    ctx->pc = 0x206910u;
    // 0x206910: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x206910u;
    {
        const bool branch_taken_0x206910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206910u;
        // 0x206914: 0xae202008  sw          $zero, 0x2008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206910) {
            ctx->pc = 0x206928u;
            goto label_206928;
        }
    }
    ctx->pc = 0x206918u;
label_206918:
    // 0x206918: 0x8e22200c  lw          $v0, 0x200C($s1)
    ctx->pc = 0x206918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8204)));
label_20691c:
    // 0x20691c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20691Cu;
    {
        const bool branch_taken_0x20691c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20691Cu;
        // 0x206920: 0x26302018  addiu       $s0, $s1, 0x2018 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20691c) {
            ctx->pc = 0x206928u;
            goto label_206928;
        }
    }
    ctx->pc = 0x206924u;
    // 0x206924: 0xae202008  sw          $zero, 0x2008($s1)
    ctx->pc = 0x206924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8200), GPR_U32(ctx, 0));
label_206928:
    // 0x206928: 0x8e222008  lw          $v0, 0x2008($s1)
    ctx->pc = 0x206928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8200)));
    // 0x20692c: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x20692cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x206930: 0x8e23200c  lw          $v1, 0x200C($s1)
    ctx->pc = 0x206930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8204)));
    // 0x206934: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x206934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206938: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x206938u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20693c: 0x28c21000  slti        $v0, $a2, 0x1000
    ctx->pc = 0x20693cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x206940: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x206940u;
    {
        const bool branch_taken_0x206940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206940u;
        // 0x206944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206940) {
            ctx->pc = 0x206984u;
            goto label_206984;
        }
    }
    ctx->pc = 0x206948u;
    // 0x206948: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x206948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20694c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20694cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x206950: 0x46202a  slt         $a0, $v0, $a2
    ctx->pc = 0x206950u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x206954: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x206954u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
    // 0x206958: 0x18c00009  blez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x206958u;
    {
        const bool branch_taken_0x206958 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x20695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206958u;
        // 0x20695c: 0x2232821  addu        $a1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206958) {
            ctx->pc = 0x206980u;
            goto label_206980;
        }
    }
    ctx->pc = 0x206960u;
    // 0x206960: 0xc093546  jal         func_24D518
    ctx->pc = 0x206960u;
    SET_GPR_U32(ctx, 31, 0x206968u);
    ctx->pc = 0x206964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206960u;
    // 0x206964: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x206960u, 0x206968u)) {
        return;
    }
    ctx->pc = 0x206968u;
label_206968:
    // 0x206968: 0x8e23200c  lw          $v1, 0x200C($s1)
    ctx->pc = 0x206968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8204)));
    // 0x20696c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x20696cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x206970: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x206970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206974: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x206974u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206978: 0xae23200c  sw          $v1, 0x200C($s1)
    ctx->pc = 0x206978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8204), GPR_U32(ctx, 3));
    // 0x20697c: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x20697cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
label_206980:
    // 0x206980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206984:
    // 0x206984: 0x8e222008  lw          $v0, 0x2008($s1)
    ctx->pc = 0x206984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8200)));
    // 0x206988: 0x8e30200c  lw          $s0, 0x200C($s1)
    ctx->pc = 0x206988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8204)));
    // 0x20698c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20698cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206990: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x206990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x206994: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x206994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x206998: 0xae30201c  sw          $s0, 0x201C($s1)
    ctx->pc = 0x206998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8220), GPR_U32(ctx, 16));
    // 0x20699c: 0xc084a12  jal         func_212848
    ctx->pc = 0x20699Cu;
    SET_GPR_U32(ctx, 31, 0x2069A4u);
    ctx->pc = 0x2069A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20699Cu;
    // 0x2069a0: 0xae222018  sw          $v0, 0x2018($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8216), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212848u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212848u, 0x20699Cu, 0x2069A4u)) {
        return;
    }
    ctx->pc = 0x2069A4u;
label_2069a4:
    // 0x2069a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2069a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2069a8: 0x8e22201c  lw          $v0, 0x201C($s1)
    ctx->pc = 0x2069a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8220)));
    // 0x2069ac: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2069acu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2069b0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2069B0u;
    {
        const bool branch_taken_0x2069b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2069B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069B0u;
        // 0x2069b4: 0x2882fffc  slti        $v0, $a0, -0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967292) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069b0) {
            ctx->pc = 0x2069D4u;
            goto label_2069d4;
        }
    }
    ctx->pc = 0x2069B8u;
    // 0x2069b8: 0x8e22200c  lw          $v0, 0x200C($s1)
    ctx->pc = 0x2069b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8204)));
    // 0x2069bc: 0x8e232008  lw          $v1, 0x2008($s1)
    ctx->pc = 0x2069bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8200)));
    // 0x2069c0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2069c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2069c4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2069c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2069c8: 0xae22200c  sw          $v0, 0x200C($s1)
    ctx->pc = 0x2069c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8204), GPR_U32(ctx, 2));
    // 0x2069cc: 0xae232008  sw          $v1, 0x2008($s1)
    ctx->pc = 0x2069ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8200), GPR_U32(ctx, 3));
    // 0x2069d0: 0x2882fffc  slti        $v0, $a0, -0x4
    ctx->pc = 0x2069d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967292) ? 1 : 0);
label_2069d4:
    // 0x2069d4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2069D4u;
    {
        const bool branch_taken_0x2069d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2069d4) {
            ctx->pc = 0x2069D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2069D4u;
            // 0x2069d8: 0x8e22202c  lw          $v0, 0x202C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2069F4u;
            goto label_2069f4;
        }
    }
    ctx->pc = 0x2069DCu;
    // 0x2069dc: 0x2882fffe  slti        $v0, $a0, -0x2
    ctx->pc = 0x2069dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967294) ? 1 : 0);
    // 0x2069e0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2069E0u;
    {
        const bool branch_taken_0x2069e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2069E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069E0u;
        // 0x2069e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069e0) {
            ctx->pc = 0x206A1Cu;
            goto label_206a1c;
        }
    }
    ctx->pc = 0x2069E8u;
    // 0x2069e8: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2069E8u;
    {
        const bool branch_taken_0x2069e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2069ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069E8u;
        // 0x2069ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069e8) {
            ctx->pc = 0x206A20u;
            goto label_206a20;
        }
    }
    ctx->pc = 0x2069F0u;
    // 0x2069f0: 0x8e22202c  lw          $v0, 0x202C($s1)
    ctx->pc = 0x2069f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8236)));
label_2069f4:
    // 0x2069f4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2069F4u;
    {
        const bool branch_taken_0x2069f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2069f4) {
            ctx->pc = 0x2069F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2069F4u;
            // 0x2069f8: 0x8e222014  lw          $v0, 0x2014($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206A14u;
            goto label_206a14;
        }
    }
    ctx->pc = 0x2069FCu;
    // 0x2069fc: 0x8e232010  lw          $v1, 0x2010($s1)
    ctx->pc = 0x2069fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8208)));
    // 0x206a00: 0xde222030  ld          $v0, 0x2030($s1)
    ctx->pc = 0x206a00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8240)));
    // 0x206a04: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x206a04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x206a08: 0x5440ffb1  bnel        $v0, $zero, . + 4 + (-0x4F << 2)
    ctx->pc = 0x206A08u;
    {
        const bool branch_taken_0x206a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206a08) {
            ctx->pc = 0x206A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206A08u;
            // 0x206a0c: 0x8e242008  lw          $a0, 0x2008($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2068D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2068d0;
        }
    }
    ctx->pc = 0x206A10u;
label_206a10:
    // 0x206a10: 0x8e222014  lw          $v0, 0x2014($s1)
    ctx->pc = 0x206a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8212)));
label_206a14:
    // 0x206a14: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x206a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x206a18: 0xae222014  sw          $v0, 0x2014($s1)
    ctx->pc = 0x206a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8212), GPR_U32(ctx, 2));
label_206a1c:
    // 0x206a1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x206a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_206a20:
    // 0x206a20: 0x1ca0ff9d  bgtz        $a1, . + 4 + (-0x63 << 2)
    ctx->pc = 0x206A20u;
    {
        const bool branch_taken_0x206a20 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x206A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A20u;
        // 0x206a24: 0x28a20401  slti        $v0, $a1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a20) {
            ctx->pc = 0x206898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206898;
        }
    }
    ctx->pc = 0x206A28u;
label_206a28:
    // 0x206a28: 0x7bb00440  lq          $s0, 0x440($sp)
    ctx->pc = 0x206a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x206a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206a30: 0x7bb10430  lq          $s1, 0x430($sp)
    ctx->pc = 0x206a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x206a34: 0x7bb20420  lq          $s2, 0x420($sp)
    ctx->pc = 0x206a34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x206a38: 0x7bb30410  lq          $s3, 0x410($sp)
    ctx->pc = 0x206a38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x206a3c: 0xdfbf0400  ld          $ra, 0x400($sp)
    ctx->pc = 0x206a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x206a40: 0x3e00008  jr          $ra
    ctx->pc = 0x206A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A40u;
        // 0x206a44: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206A48u;
}
