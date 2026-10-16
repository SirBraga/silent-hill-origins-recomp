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

// Function: sub_001F38D8
// Address: 0x1f38d8 - 0x1f39e0
void sub_001F38D8_0x1f38d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F38D8_0x1f38d8");
#endif

    switch (ctx->pc) {
        case 0x1f38d8u: goto label_1f38d8;
        case 0x1f38dcu: goto label_1f38dc;
        case 0x1f38e0u: goto label_1f38e0;
        case 0x1f38e4u: goto label_1f38e4;
        case 0x1f38e8u: goto label_1f38e8;
        case 0x1f38ecu: goto label_1f38ec;
        case 0x1f38f0u: goto label_1f38f0;
        case 0x1f38f4u: goto label_1f38f4;
        case 0x1f38f8u: goto label_1f38f8;
        case 0x1f38fcu: goto label_1f38fc;
        case 0x1f3900u: goto label_1f3900;
        case 0x1f3904u: goto label_1f3904;
        case 0x1f3908u: goto label_1f3908;
        case 0x1f390cu: goto label_1f390c;
        case 0x1f3910u: goto label_1f3910;
        case 0x1f3914u: goto label_1f3914;
        case 0x1f3918u: goto label_1f3918;
        case 0x1f391cu: goto label_1f391c;
        case 0x1f3920u: goto label_1f3920;
        case 0x1f3924u: goto label_1f3924;
        case 0x1f3928u: goto label_1f3928;
        case 0x1f392cu: goto label_1f392c;
        case 0x1f3930u: goto label_1f3930;
        case 0x1f3934u: goto label_1f3934;
        case 0x1f3938u: goto label_1f3938;
        case 0x1f393cu: goto label_1f393c;
        case 0x1f3940u: goto label_1f3940;
        case 0x1f3944u: goto label_1f3944;
        case 0x1f3948u: goto label_1f3948;
        case 0x1f394cu: goto label_1f394c;
        case 0x1f3950u: goto label_1f3950;
        case 0x1f3954u: goto label_1f3954;
        case 0x1f3958u: goto label_1f3958;
        case 0x1f395cu: goto label_1f395c;
        case 0x1f3960u: goto label_1f3960;
        case 0x1f3964u: goto label_1f3964;
        case 0x1f3968u: goto label_1f3968;
        case 0x1f396cu: goto label_1f396c;
        case 0x1f3970u: goto label_1f3970;
        case 0x1f3974u: goto label_1f3974;
        case 0x1f3978u: goto label_1f3978;
        case 0x1f397cu: goto label_1f397c;
        case 0x1f3980u: goto label_1f3980;
        case 0x1f3984u: goto label_1f3984;
        case 0x1f3988u: goto label_1f3988;
        case 0x1f398cu: goto label_1f398c;
        case 0x1f3990u: goto label_1f3990;
        case 0x1f3994u: goto label_1f3994;
        case 0x1f3998u: goto label_1f3998;
        case 0x1f399cu: goto label_1f399c;
        case 0x1f39a0u: goto label_1f39a0;
        case 0x1f39a4u: goto label_1f39a4;
        case 0x1f39a8u: goto label_1f39a8;
        case 0x1f39acu: goto label_1f39ac;
        case 0x1f39b0u: goto label_1f39b0;
        case 0x1f39b4u: goto label_1f39b4;
        case 0x1f39b8u: goto label_1f39b8;
        case 0x1f39bcu: goto label_1f39bc;
        case 0x1f39c0u: goto label_1f39c0;
        case 0x1f39c4u: goto label_1f39c4;
        case 0x1f39c8u: goto label_1f39c8;
        case 0x1f39ccu: goto label_1f39cc;
        case 0x1f39d0u: goto label_1f39d0;
        case 0x1f39d4u: goto label_1f39d4;
        case 0x1f39d8u: goto label_1f39d8;
        case 0x1f39dcu: goto label_1f39dc;
        default: break;
    }

    ctx->pc = 0x1f38d8u;

label_1f38d8:
    // 0x1f38d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f38d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f38dc:
    // 0x1f38dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f38dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f38e0:
    // 0x1f38e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f38e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f38e4:
    // 0x1f38e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f38e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f38e8:
    // 0x1f38e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f38e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1f38ec:
    // 0x1f38ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f38ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f38f0:
    // 0x1f38f0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1f38f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1f38f4:
    // 0x1f38f4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1f38f8:
    if (ctx->pc == 0x1F38F8u) {
        ctx->pc = 0x1F38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F38F4u;
        // 0x1f38f8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F38FCu;
        goto label_1f38fc;
    }
    ctx->pc = 0x1F38F4u;
    {
        const bool branch_taken_0x1f38f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F38F4u;
        // 0x1f38f8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f38f4) {
            ctx->pc = 0x1F3920u;
            goto label_1f3920;
        }
    }
    ctx->pc = 0x1F38FCu;
label_1f38fc:
    // 0x1f38fc: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_1f3900:
    if (ctx->pc == 0x1F3900u) {
        ctx->pc = 0x1F3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F38FCu;
        // 0x1f3900: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3904u;
        goto label_1f3904;
    }
    ctx->pc = 0x1F38FCu;
    {
        const bool branch_taken_0x1f38fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F38FCu;
        // 0x1f3900: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f38fc) {
            ctx->pc = 0x1F39CCu;
            goto label_1f39cc;
        }
    }
    ctx->pc = 0x1F3904u;
label_1f3904:
    // 0x1f3904: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f3904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f3908:
    // 0x1f3908: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1f390c:
    if (ctx->pc == 0x1F390Cu) {
        ctx->pc = 0x1F390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3908u;
        // 0x1f390c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3910u;
        goto label_1f3910;
    }
    ctx->pc = 0x1F3908u;
    {
        const bool branch_taken_0x1f3908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3908u;
        // 0x1f390c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3908) {
            ctx->pc = 0x1F3938u;
            goto label_1f3938;
        }
    }
    ctx->pc = 0x1F3910u;
label_1f3910:
    // 0x1f3910: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_1f3914:
    if (ctx->pc == 0x1F3914u) {
        ctx->pc = 0x1F3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3910u;
        // 0x1f3914: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3918u;
        goto label_1f3918;
    }
    ctx->pc = 0x1F3910u;
    {
        const bool branch_taken_0x1f3910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3910u;
        // 0x1f3914: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3910) {
            ctx->pc = 0x1F39C0u;
            goto label_1f39c0;
        }
    }
    ctx->pc = 0x1F3918u;
label_1f3918:
    // 0x1f3918: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1f391c:
    if (ctx->pc == 0x1F391Cu) {
        ctx->pc = 0x1F3920u;
        goto label_1f3920;
    }
    ctx->pc = 0x1F3918u;
    {
        const bool branch_taken_0x1f3918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3918) {
            ctx->pc = 0x1F39D0u;
            goto label_1f39d0;
        }
    }
    ctx->pc = 0x1F3920u;
label_1f3920:
    // 0x1f3920: 0xc0548a8  jal         func_1522A0
label_1f3924:
    if (ctx->pc == 0x1F3924u) {
        ctx->pc = 0x1F3928u;
        goto label_1f3928;
    }
    ctx->pc = 0x1F3920u;
    SET_GPR_U32(ctx, 31, 0x1F3928u);
    ctx->pc = 0x1522A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1522A0u, 0x1F3920u, 0x1F3928u)) {
        return;
    }
    ctx->pc = 0x1F3928u;
label_1f3928:
    // 0x1f3928: 0xc07d084  jal         func_1F4210
label_1f392c:
    if (ctx->pc == 0x1F392Cu) {
        ctx->pc = 0x1F3930u;
        goto label_1f3930;
    }
    ctx->pc = 0x1F3928u;
    SET_GPR_U32(ctx, 31, 0x1F3930u);
    ctx->pc = 0x1F4210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4210u, 0x1F3928u, 0x1F3930u)) {
        return;
    }
    ctx->pc = 0x1F3930u;
label_1f3930:
    // 0x1f3930: 0x10000026  b           . + 4 + (0x26 << 2)
label_1f3934:
    if (ctx->pc == 0x1F3934u) {
        ctx->pc = 0x1F3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3930u;
        // 0x1f3934: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3938u;
        goto label_1f3938;
    }
    ctx->pc = 0x1F3930u;
    {
        const bool branch_taken_0x1f3930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3930u;
        // 0x1f3934: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3930) {
            ctx->pc = 0x1F39CCu;
            goto label_1f39cc;
        }
    }
    ctx->pc = 0x1F3938u;
label_1f3938:
    // 0x1f3938: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f3938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1f393c:
    // 0x1f393c: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x1f393cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f3940:
    // 0x1f3940: 0x8c44eaf8  lw          $a0, -0x1508($v0)
    ctx->pc = 0x1f3940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961912)));
label_1f3944:
    // 0x1f3944: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1f3944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1f3948:
    // 0x1f3948: 0x8c6210b8  lw          $v0, 0x10B8($v1)
    ctx->pc = 0x1f3948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4280)));
label_1f394c:
    // 0x1f394c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f394cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3950:
    // 0x1f3950: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x1f3950u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1f3954:
    // 0x1f3954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f3954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f3958:
    // 0x1f3958: 0x40f809  jalr        $v0
label_1f395c:
    if (ctx->pc == 0x1F395Cu) {
        ctx->pc = 0x1F395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3958u;
        // 0x1f395c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3960u;
        goto label_1f3960;
    }
    ctx->pc = 0x1F3958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3960u);
        ctx->pc = 0x1F395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3958u;
        // 0x1f395c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3958u, 0x1F3960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3960u;
label_1f3960:
    // 0x1f3960: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1f3964:
    if (ctx->pc == 0x1F3964u) {
        ctx->pc = 0x1F3968u;
        goto label_1f3968;
    }
    ctx->pc = 0x1F3960u;
    {
        const bool branch_taken_0x1f3960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3960) {
            ctx->pc = 0x1F3974u;
            goto label_1f3974;
        }
    }
    ctx->pc = 0x1F3968u;
label_1f3968:
    // 0x1f3968: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f3968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f396c:
    // 0x1f396c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1f396cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_1f3970:
    // 0x1f3970: 0x202880b  movn        $s1, $s0, $v0
    ctx->pc = 0x1f3970u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16));
label_1f3974:
    // 0x1f3974: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_1f3978:
    if (ctx->pc == 0x1F3978u) {
        ctx->pc = 0x1F3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3974u;
        // 0x1f3978: 0x8e10001c  lw          $s0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F397Cu;
        goto label_1f397c;
    }
    ctx->pc = 0x1F3974u;
    {
        const bool branch_taken_0x1f3974 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3974u;
        // 0x1f3978: 0x8e10001c  lw          $s0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3974) {
            ctx->pc = 0x1F39B0u;
            goto label_1f39b0;
        }
    }
    ctx->pc = 0x1F397Cu;
label_1f397c:
    // 0x1f397c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_1f3980:
    if (ctx->pc == 0x1F3980u) {
        ctx->pc = 0x1F3980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F397Cu;
        // 0x1f3980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3984u;
        goto label_1f3984;
    }
    ctx->pc = 0x1F397Cu;
    {
        const bool branch_taken_0x1f397c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F397Cu;
        // 0x1f3980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f397c) {
            ctx->pc = 0x1F39A8u;
            goto label_1f39a8;
        }
    }
    ctx->pc = 0x1F3984u;
label_1f3984:
    // 0x1f3984: 0x0  nop
    ctx->pc = 0x1f3984u;
    // NOP
label_1f3988:
    // 0x1f3988: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f3988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f398c:
    // 0x1f398c: 0xc07cfe8  jal         func_1F3FA0
label_1f3990:
    if (ctx->pc == 0x1F3990u) {
        ctx->pc = 0x1F3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F398Cu;
        // 0x1f3990: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3994u;
        goto label_1f3994;
    }
    ctx->pc = 0x1F398Cu;
    SET_GPR_U32(ctx, 31, 0x1F3994u);
    ctx->pc = 0x1F3990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F398Cu;
    // 0x1f3990: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3FA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3FA0u, 0x1F398Cu, 0x1F3994u)) {
        return;
    }
    ctx->pc = 0x1F3994u;
label_1f3994:
    // 0x1f3994: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f3994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3998:
    // 0x1f3998: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_1f399c:
    if (ctx->pc == 0x1F399Cu) {
        ctx->pc = 0x1F399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3998u;
        // 0x1f399c: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F39A0u;
        goto label_1f39a0;
    }
    ctx->pc = 0x1F3998u;
    {
        const bool branch_taken_0x1f3998 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3998u;
        // 0x1f399c: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3998) {
            ctx->pc = 0x1F39B0u;
            goto label_1f39b0;
        }
    }
    ctx->pc = 0x1F39A0u;
label_1f39a0:
    // 0x1f39a0: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
label_1f39a4:
    if (ctx->pc == 0x1F39A4u) {
        ctx->pc = 0x1F39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39A0u;
        // 0x1f39a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F39A8u;
        goto label_1f39a8;
    }
    ctx->pc = 0x1F39A0u;
    {
        const bool branch_taken_0x1f39a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39A0u;
        // 0x1f39a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f39a0) {
            ctx->pc = 0x1F3988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3988;
        }
    }
    ctx->pc = 0x1F39A8u;
label_1f39a8:
    // 0x1f39a8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_1f39ac:
    if (ctx->pc == 0x1F39ACu) {
        ctx->pc = 0x1F39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39A8u;
        // 0x1f39ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F39B0u;
        goto label_1f39b0;
    }
    ctx->pc = 0x1F39A8u;
    {
        const bool branch_taken_0x1f39a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39A8u;
        // 0x1f39ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f39a8) {
            ctx->pc = 0x1F39CCu;
            goto label_1f39cc;
        }
    }
    ctx->pc = 0x1F39B0u;
label_1f39b0:
    // 0x1f39b0: 0xc07d016  jal         func_1F4058
label_1f39b4:
    if (ctx->pc == 0x1F39B4u) {
        ctx->pc = 0x1F39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39B0u;
        // 0x1f39b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F39B8u;
        goto label_1f39b8;
    }
    ctx->pc = 0x1F39B0u;
    SET_GPR_U32(ctx, 31, 0x1F39B8u);
    ctx->pc = 0x1F39B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F39B0u;
    // 0x1f39b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4058u, 0x1F39B0u, 0x1F39B8u)) {
        return;
    }
    ctx->pc = 0x1F39B8u;
label_1f39b8:
    // 0x1f39b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f39bc:
    if (ctx->pc == 0x1F39BCu) {
        ctx->pc = 0x1F39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39B8u;
        // 0x1f39bc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F39C0u;
        goto label_1f39c0;
    }
    ctx->pc = 0x1F39B8u;
    {
        const bool branch_taken_0x1f39b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39B8u;
        // 0x1f39bc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f39b8) {
            ctx->pc = 0x1F39CCu;
            goto label_1f39cc;
        }
    }
    ctx->pc = 0x1F39C0u;
label_1f39c0:
    // 0x1f39c0: 0xc07d016  jal         func_1F4058
label_1f39c4:
    if (ctx->pc == 0x1F39C4u) {
        ctx->pc = 0x1F39C8u;
        goto label_1f39c8;
    }
    ctx->pc = 0x1F39C0u;
    SET_GPR_U32(ctx, 31, 0x1F39C8u);
    ctx->pc = 0x1F4058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4058u, 0x1F39C0u, 0x1F39C8u)) {
        return;
    }
    ctx->pc = 0x1F39C8u;
label_1f39c8:
    // 0x1f39c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f39c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f39cc:
    // 0x1f39cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f39ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f39d0:
    // 0x1f39d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f39d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f39d4:
    // 0x1f39d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f39d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f39d8:
    // 0x1f39d8: 0x3e00008  jr          $ra
label_1f39dc:
    if (ctx->pc == 0x1F39DCu) {
        ctx->pc = 0x1F39DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39D8u;
        // 0x1f39dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F39E0u;
        goto label_fallthrough_0x1f39d8;
    }
    ctx->pc = 0x1F39D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F39DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39D8u;
        // 0x1f39dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F39D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f39d8:
    ctx->pc = 0x1F39E0u;
}
