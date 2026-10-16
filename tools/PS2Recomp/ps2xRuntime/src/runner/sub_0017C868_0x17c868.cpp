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

// Function: sub_0017C868
// Address: 0x17c868 - 0x17ccb0
void sub_0017C868_0x17c868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C868_0x17c868");
#endif

    switch (ctx->pc) {
        case 0x17c8b0u: goto label_17c8b0;
        case 0x17c8f4u: goto label_17c8f4;
        case 0x17c91cu: goto label_17c91c;
        case 0x17c930u: goto label_17c930;
        case 0x17c95cu: goto label_17c95c;
        case 0x17c970u: goto label_17c970;
        case 0x17c984u: goto label_17c984;
        case 0x17c994u: goto label_17c994;
        case 0x17c9a8u: goto label_17c9a8;
        case 0x17c9bcu: goto label_17c9bc;
        case 0x17c9ccu: goto label_17c9cc;
        case 0x17c9e0u: goto label_17c9e0;
        case 0x17c9f4u: goto label_17c9f4;
        case 0x17ca04u: goto label_17ca04;
        case 0x17ca18u: goto label_17ca18;
        case 0x17ca2cu: goto label_17ca2c;
        case 0x17ca3cu: goto label_17ca3c;
        case 0x17ca50u: goto label_17ca50;
        case 0x17ca64u: goto label_17ca64;
        case 0x17ca74u: goto label_17ca74;
        case 0x17ca88u: goto label_17ca88;
        case 0x17ca9cu: goto label_17ca9c;
        case 0x17caacu: goto label_17caac;
        case 0x17cac0u: goto label_17cac0;
        case 0x17cad4u: goto label_17cad4;
        case 0x17cae4u: goto label_17cae4;
        case 0x17caf8u: goto label_17caf8;
        case 0x17cb0cu: goto label_17cb0c;
        case 0x17cb1cu: goto label_17cb1c;
        case 0x17cb30u: goto label_17cb30;
        case 0x17cb44u: goto label_17cb44;
        case 0x17cb54u: goto label_17cb54;
        case 0x17cb68u: goto label_17cb68;
        case 0x17cb7cu: goto label_17cb7c;
        case 0x17cb8cu: goto label_17cb8c;
        case 0x17cba0u: goto label_17cba0;
        case 0x17cbb4u: goto label_17cbb4;
        case 0x17cbc4u: goto label_17cbc4;
        case 0x17cbd8u: goto label_17cbd8;
        case 0x17cbecu: goto label_17cbec;
        case 0x17cbfcu: goto label_17cbfc;
        case 0x17cc10u: goto label_17cc10;
        case 0x17cc24u: goto label_17cc24;
        case 0x17cc34u: goto label_17cc34;
        case 0x17cc48u: goto label_17cc48;
        case 0x17cc5cu: goto label_17cc5c;
        case 0x17cc6cu: goto label_17cc6c;
        case 0x17cc80u: goto label_17cc80;
        case 0x17cc94u: goto label_17cc94;
        default: break;
    }

    ctx->pc = 0x17c868u;

    // 0x17c868: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17c868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17c86c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x17c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x17c870: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17c870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17c874: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17c874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17c878: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17c878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17c87c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17c87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17c880: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c884: 0x8c62f880  lw          $v0, -0x780($v1)
    ctx->pc = 0x17c884u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BF880u));
    // 0x17c888: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x17c888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17c88c: 0x14a2001e  bne         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x17C88Cu;
    {
        const bool branch_taken_0x17c88c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C88Cu;
        // 0x17c890: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c88c) {
            ctx->pc = 0x17C908u;
            goto label_17c908;
        }
    }
    ctx->pc = 0x17C894u;
    // 0x17c894: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17c894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17c898: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x17c898u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c89c: 0x24428758  addiu       $v0, $v0, -0x78A8
    ctx->pc = 0x17c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936408));
    // 0x17c8a0: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x17c8a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    // 0x17c8a4: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x17c8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x17c8a8: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x17c8a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17c8ac: 0x0  nop
    ctx->pc = 0x17c8acu;
    // NOP
label_17c8b0:
    // 0x17c8b0: 0x8e02fff8  lw          $v0, -0x8($s0)
    ctx->pc = 0x17c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x17c8b4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x17C8B4u;
    {
        const bool branch_taken_0x17c8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c8b4) {
            ctx->pc = 0x17C8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C8B4u;
            // 0x17c8b8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C8F8u;
            goto label_17c8f8;
        }
    }
    ctx->pc = 0x17C8BCu;
    // 0x17c8bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17c8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c8c0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x17c8c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8c4: 0x8e03fffc  lw          $v1, -0x4($s0)
    ctx->pc = 0x17c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x17c8c8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x17c8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c8cc: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x17c8ccu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
    // 0x17c8d0: 0x8e441a70  lw          $a0, 0x1A70($s2)
    ctx->pc = 0x17c8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
    // 0x17c8d4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x17c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x17c8d8: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C8D8u;
    {
        const bool branch_taken_0x17c8d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x17C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8D8u;
        // 0x17c8dc: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c8d8) {
            ctx->pc = 0x17C8F4u;
            goto label_17c8f4;
        }
    }
    ctx->pc = 0x17C8E0u;
    // 0x17c8e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17c8e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C8E4u;
    {
        const bool branch_taken_0x17c8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c8e4) {
            ctx->pc = 0x17C8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C8E4u;
            // 0x17c8e8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C8F8u;
            goto label_17c8f8;
        }
    }
    ctx->pc = 0x17C8ECu;
    // 0x17c8ec: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x17C8ECu;
    SET_GPR_U32(ctx, 31, 0x17C8F4u);
    ctx->pc = 0x17C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C8ECu;
    // 0x17c8f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x17C8ECu, 0x17C8F4u)) {
        return;
    }
    ctx->pc = 0x17C8F4u;
label_17c8f4:
    // 0x17c8f4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17c8f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_17c8f8:
    // 0x17c8f8: 0x621ffed  bgez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17C8F8u;
    {
        const bool branch_taken_0x17c8f8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x17C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8F8u;
        // 0x17c8fc: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c8f8) {
            ctx->pc = 0x17C8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c8b0;
        }
    }
    ctx->pc = 0x17C900u;
    // 0x17c900: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x17C900u;
    {
        const bool branch_taken_0x17c900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C900u;
        // 0x17c904: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c900) {
            ctx->pc = 0x17CC98u;
            goto label_17cc98;
        }
    }
    ctx->pc = 0x17C908u;
label_17c908:
    // 0x17c908: 0x8c43f928  lw          $v1, -0x6D8($v0)
    ctx->pc = 0x17c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965544)));
    // 0x17c90c: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17C90Cu;
    {
        const bool branch_taken_0x17c90c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x17C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C90Cu;
        // 0x17c910: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c90c) {
            ctx->pc = 0x17C938u;
            goto label_17c938;
        }
    }
    ctx->pc = 0x17C914u;
    // 0x17c914: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x17C914u;
    SET_GPR_U32(ctx, 31, 0x17C91Cu);
    ctx->pc = 0x17C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C914u;
    // 0x17c918: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x17C914u, 0x17C91Cu)) {
        return;
    }
    ctx->pc = 0x17C91Cu;
label_17c91c:
    // 0x17c91c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17c91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17c920: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17c920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17c924: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x17c924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17c928: 0xc05f910  jal         func_17E440
    ctx->pc = 0x17C928u;
    SET_GPR_U32(ctx, 31, 0x17C930u);
    ctx->pc = 0x17C92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C928u;
    // 0x17c92c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x17C928u, 0x17C930u)) {
        return;
    }
    ctx->pc = 0x17C930u;
label_17c930:
    // 0x17c930: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x17C930u;
    {
        const bool branch_taken_0x17c930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C930u;
        // 0x17c934: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c930) {
            ctx->pc = 0x17CC98u;
            goto label_17cc98;
        }
    }
    ctx->pc = 0x17C938u;
label_17c938:
    // 0x17c938: 0x8c43f930  lw          $v1, -0x6D0($v0)
    ctx->pc = 0x17c938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965552)));
    // 0x17c93c: 0x14a300d6  bne         $a1, $v1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x17C93Cu;
    {
        const bool branch_taken_0x17c93c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x17C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C93Cu;
        // 0x17c940: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c93c) {
            ctx->pc = 0x17CC98u;
            goto label_17cc98;
        }
    }
    ctx->pc = 0x17C944u;
    // 0x17c944: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17c944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17c948: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17c948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17c94c: 0x24527260  addiu       $s2, $v0, 0x7260
    ctx->pc = 0x17c94cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29280));
    // 0x17c950: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x17c950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c954: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17C954u;
    SET_GPR_U32(ctx, 31, 0x17C95Cu);
    ctx->pc = 0x17C958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C954u;
    // 0x17c958: 0x8c708740  lw          $s0, -0x78C0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17C954u, 0x17C95Cu)) {
        return;
    }
    ctx->pc = 0x17C95Cu;
label_17c95c:
    // 0x17c95c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17C95Cu;
    {
        const bool branch_taken_0x17c95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C95Cu;
        // 0x17c960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c95c) {
            ctx->pc = 0x17C984u;
            goto label_17c984;
        }
    }
    ctx->pc = 0x17C964u;
    // 0x17c964: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c968: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17C968u;
    SET_GPR_U32(ctx, 31, 0x17C970u);
    ctx->pc = 0x17C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C968u;
    // 0x17c96c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17C968u, 0x17C970u)) {
        return;
    }
    ctx->pc = 0x17C970u;
label_17c970:
    // 0x17c970: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C970u;
    {
        const bool branch_taken_0x17c970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C970u;
        // 0x17c974: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c970) {
            ctx->pc = 0x17C984u;
            goto label_17c984;
        }
    }
    ctx->pc = 0x17C978u;
    // 0x17c978: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17c978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c97c: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17C97Cu;
    SET_GPR_U32(ctx, 31, 0x17C984u);
    ctx->pc = 0x17C980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C97Cu;
    // 0x17c980: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17C97Cu, 0x17C984u)) {
        return;
    }
    ctx->pc = 0x17C984u;
label_17c984:
    // 0x17c984: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17c984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17c988: 0x8e308740  lw          $s0, -0x78C0($s1)
    ctx->pc = 0x17c988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936384)));
    // 0x17c98c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17C98Cu;
    SET_GPR_U32(ctx, 31, 0x17C994u);
    ctx->pc = 0x17C990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C98Cu;
    // 0x17c990: 0x24527270  addiu       $s2, $v0, 0x7270 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17C98Cu, 0x17C994u)) {
        return;
    }
    ctx->pc = 0x17C994u;
label_17c994:
    // 0x17c994: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17C994u;
    {
        const bool branch_taken_0x17c994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C994u;
        // 0x17c998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c994) {
            ctx->pc = 0x17C9BCu;
            goto label_17c9bc;
        }
    }
    ctx->pc = 0x17C99Cu;
    // 0x17c99c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9a0: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17C9A0u;
    SET_GPR_U32(ctx, 31, 0x17C9A8u);
    ctx->pc = 0x17C9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9A0u;
    // 0x17c9a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17C9A0u, 0x17C9A8u)) {
        return;
    }
    ctx->pc = 0x17C9A8u;
label_17c9a8:
    // 0x17c9a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C9A8u;
    {
        const bool branch_taken_0x17c9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9A8u;
        // 0x17c9ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9a8) {
            ctx->pc = 0x17C9BCu;
            goto label_17c9bc;
        }
    }
    ctx->pc = 0x17C9B0u;
    // 0x17c9b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17c9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9b4: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17C9B4u;
    SET_GPR_U32(ctx, 31, 0x17C9BCu);
    ctx->pc = 0x17C9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9B4u;
    // 0x17c9b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17C9B4u, 0x17C9BCu)) {
        return;
    }
    ctx->pc = 0x17C9BCu;
label_17c9bc:
    // 0x17c9bc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17c9c0: 0x8e308740  lw          $s0, -0x78C0($s1)
    ctx->pc = 0x17c9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936384)));
    // 0x17c9c4: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17C9C4u;
    SET_GPR_U32(ctx, 31, 0x17C9CCu);
    ctx->pc = 0x17C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9C4u;
    // 0x17c9c8: 0x24527280  addiu       $s2, $v0, 0x7280 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17C9C4u, 0x17C9CCu)) {
        return;
    }
    ctx->pc = 0x17C9CCu;
label_17c9cc:
    // 0x17c9cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17C9CCu;
    {
        const bool branch_taken_0x17c9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9CCu;
        // 0x17c9d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9cc) {
            ctx->pc = 0x17C9F4u;
            goto label_17c9f4;
        }
    }
    ctx->pc = 0x17C9D4u;
    // 0x17c9d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9d8: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17C9D8u;
    SET_GPR_U32(ctx, 31, 0x17C9E0u);
    ctx->pc = 0x17C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9D8u;
    // 0x17c9dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17C9D8u, 0x17C9E0u)) {
        return;
    }
    ctx->pc = 0x17C9E0u;
label_17c9e0:
    // 0x17c9e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C9E0u;
    {
        const bool branch_taken_0x17c9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9E0u;
        // 0x17c9e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9e0) {
            ctx->pc = 0x17C9F4u;
            goto label_17c9f4;
        }
    }
    ctx->pc = 0x17C9E8u;
    // 0x17c9e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17c9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9ec: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17C9ECu;
    SET_GPR_U32(ctx, 31, 0x17C9F4u);
    ctx->pc = 0x17C9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9ECu;
    // 0x17c9f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17C9ECu, 0x17C9F4u)) {
        return;
    }
    ctx->pc = 0x17C9F4u;
label_17c9f4:
    // 0x17c9f4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17c9f8: 0x8e308740  lw          $s0, -0x78C0($s1)
    ctx->pc = 0x17c9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936384)));
    // 0x17c9fc: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17C9FCu;
    SET_GPR_U32(ctx, 31, 0x17CA04u);
    ctx->pc = 0x17CA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9FCu;
    // 0x17ca00: 0x24527290  addiu       $s2, $v0, 0x7290 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17C9FCu, 0x17CA04u)) {
        return;
    }
    ctx->pc = 0x17CA04u;
label_17ca04:
    // 0x17ca04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17CA04u;
    {
        const bool branch_taken_0x17ca04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA04u;
        // 0x17ca08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca04) {
            ctx->pc = 0x17CA2Cu;
            goto label_17ca2c;
        }
    }
    ctx->pc = 0x17CA0Cu;
    // 0x17ca0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ca0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca10: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17CA10u;
    SET_GPR_U32(ctx, 31, 0x17CA18u);
    ctx->pc = 0x17CA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA10u;
    // 0x17ca14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17CA10u, 0x17CA18u)) {
        return;
    }
    ctx->pc = 0x17CA18u;
label_17ca18:
    // 0x17ca18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CA18u;
    {
        const bool branch_taken_0x17ca18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA18u;
        // 0x17ca1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca18) {
            ctx->pc = 0x17CA2Cu;
            goto label_17ca2c;
        }
    }
    ctx->pc = 0x17CA20u;
    // 0x17ca20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17ca20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca24: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17CA24u;
    SET_GPR_U32(ctx, 31, 0x17CA2Cu);
    ctx->pc = 0x17CA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA24u;
    // 0x17ca28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17CA24u, 0x17CA2Cu)) {
        return;
    }
    ctx->pc = 0x17CA2Cu;
label_17ca2c:
    // 0x17ca2c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17ca30: 0x8e308740  lw          $s0, -0x78C0($s1)
    ctx->pc = 0x17ca30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936384)));
    // 0x17ca34: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17CA34u;
    SET_GPR_U32(ctx, 31, 0x17CA3Cu);
    ctx->pc = 0x17CA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA34u;
    // 0x17ca38: 0x245272a0  addiu       $s2, $v0, 0x72A0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17CA34u, 0x17CA3Cu)) {
        return;
    }
    ctx->pc = 0x17CA3Cu;
label_17ca3c:
    // 0x17ca3c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17CA3Cu;
    {
        const bool branch_taken_0x17ca3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA3Cu;
        // 0x17ca40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca3c) {
            ctx->pc = 0x17CA64u;
            goto label_17ca64;
        }
    }
    ctx->pc = 0x17CA44u;
    // 0x17ca44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ca44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca48: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17CA48u;
    SET_GPR_U32(ctx, 31, 0x17CA50u);
    ctx->pc = 0x17CA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA48u;
    // 0x17ca4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17CA48u, 0x17CA50u)) {
        return;
    }
    ctx->pc = 0x17CA50u;
label_17ca50:
    // 0x17ca50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CA50u;
    {
        const bool branch_taken_0x17ca50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA50u;
        // 0x17ca54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca50) {
            ctx->pc = 0x17CA64u;
            goto label_17ca64;
        }
    }
    ctx->pc = 0x17CA58u;
    // 0x17ca58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17ca58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca5c: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17CA5Cu;
    SET_GPR_U32(ctx, 31, 0x17CA64u);
    ctx->pc = 0x17CA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA5Cu;
    // 0x17ca60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17CA5Cu, 0x17CA64u)) {
        return;
    }
    ctx->pc = 0x17CA64u;
label_17ca64:
    // 0x17ca64: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17ca68: 0x8e308740  lw          $s0, -0x78C0($s1)
    ctx->pc = 0x17ca68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936384)));
    // 0x17ca6c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17CA6Cu;
    SET_GPR_U32(ctx, 31, 0x17CA74u);
    ctx->pc = 0x17CA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA6Cu;
    // 0x17ca70: 0x245272b0  addiu       $s2, $v0, 0x72B0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17CA6Cu, 0x17CA74u)) {
        return;
    }
    ctx->pc = 0x17CA74u;
label_17ca74:
    // 0x17ca74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17CA74u;
    {
        const bool branch_taken_0x17ca74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA74u;
        // 0x17ca78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca74) {
            ctx->pc = 0x17CA9Cu;
            goto label_17ca9c;
        }
    }
    ctx->pc = 0x17CA7Cu;
    // 0x17ca7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ca7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca80: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17CA80u;
    SET_GPR_U32(ctx, 31, 0x17CA88u);
    ctx->pc = 0x17CA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA80u;
    // 0x17ca84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17CA80u, 0x17CA88u)) {
        return;
    }
    ctx->pc = 0x17CA88u;
label_17ca88:
    // 0x17ca88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CA88u;
    {
        const bool branch_taken_0x17ca88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA88u;
        // 0x17ca8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca88) {
            ctx->pc = 0x17CA9Cu;
            goto label_17ca9c;
        }
    }
    ctx->pc = 0x17CA90u;
    // 0x17ca90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17ca90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca94: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17CA94u;
    SET_GPR_U32(ctx, 31, 0x17CA9Cu);
    ctx->pc = 0x17CA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA94u;
    // 0x17ca98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17CA94u, 0x17CA9Cu)) {
        return;
    }
    ctx->pc = 0x17CA9Cu;
label_17ca9c:
    // 0x17ca9c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17caa0: 0x8e308740  lw          $s0, -0x78C0($s1)
    ctx->pc = 0x17caa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936384)));
    // 0x17caa4: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17CAA4u;
    SET_GPR_U32(ctx, 31, 0x17CAACu);
    ctx->pc = 0x17CAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CAA4u;
    // 0x17caa8: 0x245272c0  addiu       $s2, $v0, 0x72C0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17CAA4u, 0x17CAACu)) {
        return;
    }
    ctx->pc = 0x17CAACu;
label_17caac:
    // 0x17caac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17CAACu;
    {
        const bool branch_taken_0x17caac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CAACu;
        // 0x17cab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17caac) {
            ctx->pc = 0x17CAD4u;
            goto label_17cad4;
        }
    }
    ctx->pc = 0x17CAB4u;
    // 0x17cab4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17cab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cab8: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17CAB8u;
    SET_GPR_U32(ctx, 31, 0x17CAC0u);
    ctx->pc = 0x17CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CAB8u;
    // 0x17cabc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17CAB8u, 0x17CAC0u)) {
        return;
    }
    ctx->pc = 0x17CAC0u;
label_17cac0:
    // 0x17cac0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CAC0u;
    {
        const bool branch_taken_0x17cac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CAC0u;
        // 0x17cac4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cac0) {
            ctx->pc = 0x17CAD4u;
            goto label_17cad4;
        }
    }
    ctx->pc = 0x17CAC8u;
    // 0x17cac8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17cac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cacc: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17CACCu;
    SET_GPR_U32(ctx, 31, 0x17CAD4u);
    ctx->pc = 0x17CAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CACCu;
    // 0x17cad0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17CACCu, 0x17CAD4u)) {
        return;
    }
    ctx->pc = 0x17CAD4u;
label_17cad4:
    // 0x17cad4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17cad8: 0x8e308740  lw          $s0, -0x78C0($s1)
    ctx->pc = 0x17cad8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936384)));
    // 0x17cadc: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17CADCu;
    SET_GPR_U32(ctx, 31, 0x17CAE4u);
    ctx->pc = 0x17CAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CADCu;
    // 0x17cae0: 0x245272d0  addiu       $s2, $v0, 0x72D0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17CADCu, 0x17CAE4u)) {
        return;
    }
    ctx->pc = 0x17CAE4u;
label_17cae4:
    // 0x17cae4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17CAE4u;
    {
        const bool branch_taken_0x17cae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CAE4u;
        // 0x17cae8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cae4) {
            ctx->pc = 0x17CB0Cu;
            goto label_17cb0c;
        }
    }
    ctx->pc = 0x17CAECu;
    // 0x17caec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17caecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17caf0: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17CAF0u;
    SET_GPR_U32(ctx, 31, 0x17CAF8u);
    ctx->pc = 0x17CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CAF0u;
    // 0x17caf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17CAF0u, 0x17CAF8u)) {
        return;
    }
    ctx->pc = 0x17CAF8u;
label_17caf8:
    // 0x17caf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CAF8u;
    {
        const bool branch_taken_0x17caf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CAF8u;
        // 0x17cafc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17caf8) {
            ctx->pc = 0x17CB0Cu;
            goto label_17cb0c;
        }
    }
    ctx->pc = 0x17CB00u;
    // 0x17cb00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17cb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb04: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17CB04u;
    SET_GPR_U32(ctx, 31, 0x17CB0Cu);
    ctx->pc = 0x17CB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB04u;
    // 0x17cb08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17CB04u, 0x17CB0Cu)) {
        return;
    }
    ctx->pc = 0x17CB0Cu;
label_17cb0c:
    // 0x17cb0c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17cb10: 0x8e308740  lw          $s0, -0x78C0($s1)
    ctx->pc = 0x17cb10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936384)));
    // 0x17cb14: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17CB14u;
    SET_GPR_U32(ctx, 31, 0x17CB1Cu);
    ctx->pc = 0x17CB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB14u;
    // 0x17cb18: 0x245272e0  addiu       $s2, $v0, 0x72E0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17CB14u, 0x17CB1Cu)) {
        return;
    }
    ctx->pc = 0x17CB1Cu;
label_17cb1c:
    // 0x17cb1c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17CB1Cu;
    {
        const bool branch_taken_0x17cb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB1Cu;
        // 0x17cb20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb1c) {
            ctx->pc = 0x17CB44u;
            goto label_17cb44;
        }
    }
    ctx->pc = 0x17CB24u;
    // 0x17cb24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17cb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb28: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17CB28u;
    SET_GPR_U32(ctx, 31, 0x17CB30u);
    ctx->pc = 0x17CB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB28u;
    // 0x17cb2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17CB28u, 0x17CB30u)) {
        return;
    }
    ctx->pc = 0x17CB30u;
label_17cb30:
    // 0x17cb30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CB30u;
    {
        const bool branch_taken_0x17cb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB30u;
        // 0x17cb34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb30) {
            ctx->pc = 0x17CB44u;
            goto label_17cb44;
        }
    }
    ctx->pc = 0x17CB38u;
    // 0x17cb38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17cb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb3c: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17CB3Cu;
    SET_GPR_U32(ctx, 31, 0x17CB44u);
    ctx->pc = 0x17CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB3Cu;
    // 0x17cb40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17CB3Cu, 0x17CB44u)) {
        return;
    }
    ctx->pc = 0x17CB44u;
label_17cb44:
    // 0x17cb44: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17cb48: 0x8e308740  lw          $s0, -0x78C0($s1)
    ctx->pc = 0x17cb48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936384)));
    // 0x17cb4c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17CB4Cu;
    SET_GPR_U32(ctx, 31, 0x17CB54u);
    ctx->pc = 0x17CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB4Cu;
    // 0x17cb50: 0x245272f0  addiu       $s2, $v0, 0x72F0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17CB4Cu, 0x17CB54u)) {
        return;
    }
    ctx->pc = 0x17CB54u;
label_17cb54:
    // 0x17cb54: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17CB54u;
    {
        const bool branch_taken_0x17cb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB54u;
        // 0x17cb58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb54) {
            ctx->pc = 0x17CB7Cu;
            goto label_17cb7c;
        }
    }
    ctx->pc = 0x17CB5Cu;
    // 0x17cb5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17cb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb60: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17CB60u;
    SET_GPR_U32(ctx, 31, 0x17CB68u);
    ctx->pc = 0x17CB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB60u;
    // 0x17cb64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17CB60u, 0x17CB68u)) {
        return;
    }
    ctx->pc = 0x17CB68u;
label_17cb68:
    // 0x17cb68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CB68u;
    {
        const bool branch_taken_0x17cb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB68u;
        // 0x17cb6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb68) {
            ctx->pc = 0x17CB7Cu;
            goto label_17cb7c;
        }
    }
    ctx->pc = 0x17CB70u;
    // 0x17cb70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17cb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb74: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17CB74u;
    SET_GPR_U32(ctx, 31, 0x17CB7Cu);
    ctx->pc = 0x17CB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB74u;
    // 0x17cb78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17CB74u, 0x17CB7Cu)) {
        return;
    }
    ctx->pc = 0x17CB7Cu;
label_17cb7c:
    // 0x17cb7c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17cb80: 0x8e308740  lw          $s0, -0x78C0($s1)
    ctx->pc = 0x17cb80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936384)));
    // 0x17cb84: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17CB84u;
    SET_GPR_U32(ctx, 31, 0x17CB8Cu);
    ctx->pc = 0x17CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB84u;
    // 0x17cb88: 0x24527300  addiu       $s2, $v0, 0x7300 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17CB84u, 0x17CB8Cu)) {
        return;
    }
    ctx->pc = 0x17CB8Cu;
label_17cb8c:
    // 0x17cb8c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17CB8Cu;
    {
        const bool branch_taken_0x17cb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB8Cu;
        // 0x17cb90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb8c) {
            ctx->pc = 0x17CBB4u;
            goto label_17cbb4;
        }
    }
    ctx->pc = 0x17CB94u;
    // 0x17cb94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17cb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb98: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17CB98u;
    SET_GPR_U32(ctx, 31, 0x17CBA0u);
    ctx->pc = 0x17CB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB98u;
    // 0x17cb9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17CB98u, 0x17CBA0u)) {
        return;
    }
    ctx->pc = 0x17CBA0u;
label_17cba0:
    // 0x17cba0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CBA0u;
    {
        const bool branch_taken_0x17cba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBA0u;
        // 0x17cba4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cba0) {
            ctx->pc = 0x17CBB4u;
            goto label_17cbb4;
        }
    }
    ctx->pc = 0x17CBA8u;
    // 0x17cba8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17cba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbac: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17CBACu;
    SET_GPR_U32(ctx, 31, 0x17CBB4u);
    ctx->pc = 0x17CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CBACu;
    // 0x17cbb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17CBACu, 0x17CBB4u)) {
        return;
    }
    ctx->pc = 0x17CBB4u;
label_17cbb4:
    // 0x17cbb4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17cbb8: 0x8e308740  lw          $s0, -0x78C0($s1)
    ctx->pc = 0x17cbb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936384)));
    // 0x17cbbc: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17CBBCu;
    SET_GPR_U32(ctx, 31, 0x17CBC4u);
    ctx->pc = 0x17CBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CBBCu;
    // 0x17cbc0: 0x24527310  addiu       $s2, $v0, 0x7310 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17CBBCu, 0x17CBC4u)) {
        return;
    }
    ctx->pc = 0x17CBC4u;
label_17cbc4:
    // 0x17cbc4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17CBC4u;
    {
        const bool branch_taken_0x17cbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBC4u;
        // 0x17cbc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cbc4) {
            ctx->pc = 0x17CBECu;
            goto label_17cbec;
        }
    }
    ctx->pc = 0x17CBCCu;
    // 0x17cbcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17cbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbd0: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17CBD0u;
    SET_GPR_U32(ctx, 31, 0x17CBD8u);
    ctx->pc = 0x17CBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CBD0u;
    // 0x17cbd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17CBD0u, 0x17CBD8u)) {
        return;
    }
    ctx->pc = 0x17CBD8u;
label_17cbd8:
    // 0x17cbd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CBD8u;
    {
        const bool branch_taken_0x17cbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBD8u;
        // 0x17cbdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cbd8) {
            ctx->pc = 0x17CBECu;
            goto label_17cbec;
        }
    }
    ctx->pc = 0x17CBE0u;
    // 0x17cbe0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17cbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbe4: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17CBE4u;
    SET_GPR_U32(ctx, 31, 0x17CBECu);
    ctx->pc = 0x17CBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CBE4u;
    // 0x17cbe8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17CBE4u, 0x17CBECu)) {
        return;
    }
    ctx->pc = 0x17CBECu;
label_17cbec:
    // 0x17cbec: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17cbf0: 0x8e308740  lw          $s0, -0x78C0($s1)
    ctx->pc = 0x17cbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936384)));
    // 0x17cbf4: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17CBF4u;
    SET_GPR_U32(ctx, 31, 0x17CBFCu);
    ctx->pc = 0x17CBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CBF4u;
    // 0x17cbf8: 0x24527320  addiu       $s2, $v0, 0x7320 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17CBF4u, 0x17CBFCu)) {
        return;
    }
    ctx->pc = 0x17CBFCu;
label_17cbfc:
    // 0x17cbfc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17CBFCu;
    {
        const bool branch_taken_0x17cbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBFCu;
        // 0x17cc00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cbfc) {
            ctx->pc = 0x17CC24u;
            goto label_17cc24;
        }
    }
    ctx->pc = 0x17CC04u;
    // 0x17cc04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17cc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc08: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17CC08u;
    SET_GPR_U32(ctx, 31, 0x17CC10u);
    ctx->pc = 0x17CC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CC08u;
    // 0x17cc0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17CC08u, 0x17CC10u)) {
        return;
    }
    ctx->pc = 0x17CC10u;
label_17cc10:
    // 0x17cc10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CC10u;
    {
        const bool branch_taken_0x17cc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC10u;
        // 0x17cc14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc10) {
            ctx->pc = 0x17CC24u;
            goto label_17cc24;
        }
    }
    ctx->pc = 0x17CC18u;
    // 0x17cc18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17cc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc1c: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17CC1Cu;
    SET_GPR_U32(ctx, 31, 0x17CC24u);
    ctx->pc = 0x17CC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CC1Cu;
    // 0x17cc20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17CC1Cu, 0x17CC24u)) {
        return;
    }
    ctx->pc = 0x17CC24u;
label_17cc24:
    // 0x17cc24: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17cc28: 0x8e308740  lw          $s0, -0x78C0($s1)
    ctx->pc = 0x17cc28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936384)));
    // 0x17cc2c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17CC2Cu;
    SET_GPR_U32(ctx, 31, 0x17CC34u);
    ctx->pc = 0x17CC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CC2Cu;
    // 0x17cc30: 0x24527330  addiu       $s2, $v0, 0x7330 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17CC2Cu, 0x17CC34u)) {
        return;
    }
    ctx->pc = 0x17CC34u;
label_17cc34:
    // 0x17cc34: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17CC34u;
    {
        const bool branch_taken_0x17cc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC34u;
        // 0x17cc38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc34) {
            ctx->pc = 0x17CC5Cu;
            goto label_17cc5c;
        }
    }
    ctx->pc = 0x17CC3Cu;
    // 0x17cc3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17cc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc40: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17CC40u;
    SET_GPR_U32(ctx, 31, 0x17CC48u);
    ctx->pc = 0x17CC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CC40u;
    // 0x17cc44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17CC40u, 0x17CC48u)) {
        return;
    }
    ctx->pc = 0x17CC48u;
label_17cc48:
    // 0x17cc48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CC48u;
    {
        const bool branch_taken_0x17cc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC48u;
        // 0x17cc4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc48) {
            ctx->pc = 0x17CC5Cu;
            goto label_17cc5c;
        }
    }
    ctx->pc = 0x17CC50u;
    // 0x17cc50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17cc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc54: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17CC54u;
    SET_GPR_U32(ctx, 31, 0x17CC5Cu);
    ctx->pc = 0x17CC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CC54u;
    // 0x17cc58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17CC54u, 0x17CC5Cu)) {
        return;
    }
    ctx->pc = 0x17CC5Cu;
label_17cc5c:
    // 0x17cc5c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17cc60: 0x8e308740  lw          $s0, -0x78C0($s1)
    ctx->pc = 0x17cc60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936384)));
    // 0x17cc64: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x17CC64u;
    SET_GPR_U32(ctx, 31, 0x17CC6Cu);
    ctx->pc = 0x17CC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CC64u;
    // 0x17cc68: 0x24517340  addiu       $s1, $v0, 0x7340 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17CC64u, 0x17CC6Cu)) {
        return;
    }
    ctx->pc = 0x17CC6Cu;
label_17cc6c:
    // 0x17cc6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17CC6Cu;
    {
        const bool branch_taken_0x17cc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC6Cu;
        // 0x17cc70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc6c) {
            ctx->pc = 0x17CC94u;
            goto label_17cc94;
        }
    }
    ctx->pc = 0x17CC74u;
    // 0x17cc74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17cc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc78: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x17CC78u;
    SET_GPR_U32(ctx, 31, 0x17CC80u);
    ctx->pc = 0x17CC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CC78u;
    // 0x17cc7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x17CC78u, 0x17CC80u)) {
        return;
    }
    ctx->pc = 0x17CC80u;
label_17cc80:
    // 0x17cc80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CC80u;
    {
        const bool branch_taken_0x17cc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC80u;
        // 0x17cc84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc80) {
            ctx->pc = 0x17CC94u;
            goto label_17cc94;
        }
    }
    ctx->pc = 0x17CC88u;
    // 0x17cc88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17cc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc8c: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17CC8Cu;
    SET_GPR_U32(ctx, 31, 0x17CC94u);
    ctx->pc = 0x17CC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CC8Cu;
    // 0x17cc90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x17CC8Cu, 0x17CC94u)) {
        return;
    }
    ctx->pc = 0x17CC94u;
label_17cc94:
    // 0x17cc94: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17cc94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17cc98:
    // 0x17cc98: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17cc98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17cc9c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17cc9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cca0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x17cca0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17cca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cca8: 0x3e00008  jr          $ra
    ctx->pc = 0x17CCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CCA8u;
        // 0x17ccac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CCB0u;
}
