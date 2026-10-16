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

// Function: sub_00160AB8
// Address: 0x160ab8 - 0x160d98
void sub_00160AB8_0x160ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160AB8_0x160ab8");
#endif

    switch (ctx->pc) {
        case 0x160ad4u: goto label_160ad4;
        case 0x160ae8u: goto label_160ae8;
        case 0x160b00u: goto label_160b00;
        case 0x160cfcu: goto label_160cfc;
        case 0x160d3cu: goto label_160d3c;
        default: break;
    }

    ctx->pc = 0x160ab8u;

    // 0x160ab8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x160ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x160abc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x160abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x160ac0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x160ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x160ac4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x160ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x160ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x160acc: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x160ACCu;
    SET_GPR_U32(ctx, 31, 0x160AD4u);
    ctx->pc = 0x160AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160ACCu;
    // 0x160ad0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x160ACCu, 0x160AD4u)) {
        return;
    }
    ctx->pc = 0x160AD4u;
label_160ad4:
    // 0x160ad4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x160ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x160ad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160adc: 0x8c46f590  lw          $a2, -0xA70($v0)
    ctx->pc = 0x160adcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF590u));
    // 0x160ae0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x160AE0u;
    SET_GPR_U32(ctx, 31, 0x160AE8u);
    ctx->pc = 0x160AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160AE0u;
    // 0x160ae4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x160AE0u, 0x160AE8u)) {
        return;
    }
    ctx->pc = 0x160AE8u;
label_160ae8:
    // 0x160ae8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x160ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160aec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x160aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160af0: 0x50400097  beql        $v0, $zero, . + 4 + (0x97 << 2)
    ctx->pc = 0x160AF0u;
    {
        const bool branch_taken_0x160af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160af0) {
            ctx->pc = 0x160AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160AF0u;
            // 0x160af4: 0xc6200080  lwc1        $f0, 0x80($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x160D50u;
            goto label_160d50;
        }
    }
    ctx->pc = 0x160AF8u;
    // 0x160af8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160afc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x160afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160b00:
    // 0x160b00: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x160b00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x160b04: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x160B04u;
    {
        const bool branch_taken_0x160b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B04u;
        // 0x160b08: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b04) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160B0Cu;
    // 0x160b0c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x160b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x160b10: 0x244235c0  addiu       $v0, $v0, 0x35C0
    ctx->pc = 0x160b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13760));
    // 0x160b14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x160b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160b18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x160b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160b1c: 0x800008  jr          $a0
    ctx->pc = 0x160B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160B24u: goto label_160b24;
            case 0x160B40u: goto label_160b40;
            case 0x160B50u: goto label_160b50;
            case 0x160B60u: goto label_160b60;
            case 0x160B70u: goto label_160b70;
            case 0x160B80u: goto label_160b80;
            case 0x160B90u: goto label_160b90;
            case 0x160BA0u: goto label_160ba0;
            case 0x160BB0u: goto label_160bb0;
            case 0x160BC0u: goto label_160bc0;
            case 0x160BD0u: goto label_160bd0;
            case 0x160C4Cu: goto label_160c4c;
            case 0x160C5Cu: goto label_160c5c;
            case 0x160C6Cu: goto label_160c6c;
            case 0x160C84u: goto label_160c84;
            case 0x160C94u: goto label_160c94;
            case 0x160CA4u: goto label_160ca4;
            case 0x160CB4u: goto label_160cb4;
            case 0x160CD4u: goto label_160cd4;
            case 0x160CE4u: goto label_160ce4;
            case 0x160D04u: goto label_160d04;
            case 0x160D14u: goto label_160d14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160B1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x160B24u;
label_160b24:
    // 0x160b24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160b28: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x160b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x160b2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160b30: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x160b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160b34: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x160b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x160b38: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x160B38u;
    {
        const bool branch_taken_0x160b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B38u;
        // 0x160b3c: 0xac83864c  sw          $v1, -0x79B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294936140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b38) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160B40u;
label_160b40:
    // 0x160b40: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160b44: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x160b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x160b48: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x160B48u;
    {
        const bool branch_taken_0x160b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B48u;
        // 0x160b4c: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b48) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160B50u;
label_160b50:
    // 0x160b50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160b54: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x160b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160b58: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x160B58u;
    {
        const bool branch_taken_0x160b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B58u;
        // 0x160b5c: 0xe620004c  swc1        $f0, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b58) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160B60u;
label_160b60:
    // 0x160b60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160b64: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x160b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160b68: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x160B68u;
    {
        const bool branch_taken_0x160b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B68u;
        // 0x160b6c: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b68) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160B70u;
label_160b70:
    // 0x160b70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160b74: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x160b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x160b78: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x160B78u;
    {
        const bool branch_taken_0x160b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B78u;
        // 0x160b7c: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b78) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160B80u;
label_160b80:
    // 0x160b80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160b84: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x160b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160b88: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x160B88u;
    {
        const bool branch_taken_0x160b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B88u;
        // 0x160b8c: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b88) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160B90u;
label_160b90:
    // 0x160b90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160b94: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x160b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160b98: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x160B98u;
    {
        const bool branch_taken_0x160b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B98u;
        // 0x160b9c: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b98) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160BA0u;
label_160ba0:
    // 0x160ba0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160ba4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x160ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160ba8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x160BA8u;
    {
        const bool branch_taken_0x160ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BA8u;
        // 0x160bac: 0xe6200060  swc1        $f0, 0x60($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ba8) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160BB0u;
label_160bb0:
    // 0x160bb0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160bb4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x160bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160bb8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x160BB8u;
    {
        const bool branch_taken_0x160bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BB8u;
        // 0x160bbc: 0xe6200064  swc1        $f0, 0x64($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160bb8) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160BC0u;
label_160bc0:
    // 0x160bc0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160bc4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x160bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x160bc8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x160BC8u;
    {
        const bool branch_taken_0x160bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BC8u;
        // 0x160bcc: 0xae230068  sw          $v1, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160bc8) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160BD0u;
label_160bd0:
    // 0x160bd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160bd4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x160bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x160bd8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x160bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x160bdc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x160bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x160be0: 0x32403  sra         $a0, $v1, 16
    ctx->pc = 0x160be0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 16));
    // 0x160be4: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x160be4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x160be8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x160be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x160bec: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x160becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x160bf0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x160bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x160bf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160bf8: 0x0  nop
    ctx->pc = 0x160bf8u;
    // NOP
    // 0x160bfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x160bfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x160c00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x160c00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160c04: 0x0  nop
    ctx->pc = 0x160c04u;
    // NOP
    // 0x160c08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x160c08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x160c0c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x160c0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x160c10: 0x0  nop
    ctx->pc = 0x160c10u;
    // NOP
    // 0x160c14: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x160c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x160c18: 0x0  nop
    ctx->pc = 0x160c18u;
    // NOP
    // 0x160c1c: 0x0  nop
    ctx->pc = 0x160c1cu;
    // NOP
    // 0x160c20: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x160c20u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x160c24: 0x0  nop
    ctx->pc = 0x160c24u;
    // NOP
    // 0x160c28: 0x0  nop
    ctx->pc = 0x160c28u;
    // NOP
    // 0x160c2c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x160c2cu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
    // 0x160c30: 0x0  nop
    ctx->pc = 0x160c30u;
    // NOP
    // 0x160c34: 0x0  nop
    ctx->pc = 0x160c34u;
    // NOP
    // 0x160c38: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x160c38u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[3]);
    // 0x160c3c: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x160c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x160c40: 0xe621006c  swc1        $f1, 0x6C($s1)
    ctx->pc = 0x160c40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x160c44: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x160C44u;
    {
        const bool branch_taken_0x160c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C44u;
        // 0x160c48: 0xe6220074  swc1        $f2, 0x74($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c44) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160C4Cu;
label_160c4c:
    // 0x160c4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160c50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x160c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160c54: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x160C54u;
    {
        const bool branch_taken_0x160c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C54u;
        // 0x160c58: 0xe6200078  swc1        $f0, 0x78($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c54) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160C5Cu;
label_160c5c:
    // 0x160c5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160c60: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x160c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x160c64: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x160C64u;
    {
        const bool branch_taken_0x160c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C64u;
        // 0x160c68: 0xae23007c  sw          $v1, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c64) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160C6Cu;
label_160c6c:
    // 0x160c6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160c70: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x160c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160c74: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x160c74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x160c78: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x160c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x160c7c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x160C7Cu;
    {
        const bool branch_taken_0x160c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C7Cu;
        // 0x160c80: 0xe6210084  swc1        $f1, 0x84($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c7c) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160C84u;
label_160c84:
    // 0x160c84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160c88: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x160c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160c8c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x160C8Cu;
    {
        const bool branch_taken_0x160c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C8Cu;
        // 0x160c90: 0xe6200088  swc1        $f0, 0x88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c8c) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160C94u;
label_160c94:
    // 0x160c94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160c98: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x160c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x160c9c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x160C9Cu;
    {
        const bool branch_taken_0x160c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C9Cu;
        // 0x160ca0: 0xae23008c  sw          $v1, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c9c) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160CA4u;
label_160ca4:
    // 0x160ca4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160ca8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x160ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160cac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x160CACu;
    {
        const bool branch_taken_0x160cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CACu;
        // 0x160cb0: 0xe6200090  swc1        $f0, 0x90($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cac) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160CB4u;
label_160cb4:
    // 0x160cb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160cb8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x160cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x160cbc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160CBCu;
    {
        const bool branch_taken_0x160cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CBCu;
        // 0x160cc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cbc) {
            ctx->pc = 0x160CCCu;
            goto label_160ccc;
        }
    }
    ctx->pc = 0x160CC4u;
    // 0x160cc4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x160CC4u;
    {
        const bool branch_taken_0x160cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CC4u;
        // 0x160cc8: 0xae2200ac  sw          $v0, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cc4) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160CCCu;
label_160ccc:
    // 0x160ccc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x160CCCu;
    {
        const bool branch_taken_0x160ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CCCu;
        // 0x160cd0: 0xae2000ac  sw          $zero, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ccc) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160CD4u;
label_160cd4:
    // 0x160cd4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x160cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160cd8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x160cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x160cdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x160CDCu;
    {
        const bool branch_taken_0x160cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CDCu;
        // 0x160ce0: 0x26250094  addiu       $a1, $s1, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cdc) {
            ctx->pc = 0x160CF0u;
            goto label_160cf0;
        }
    }
    ctx->pc = 0x160CE4u;
label_160ce4:
    // 0x160ce4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x160ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160ce8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x160ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x160cec: 0x2625009c  addiu       $a1, $s1, 0x9C
    ctx->pc = 0x160cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
label_160cf0:
    // 0x160cf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160cf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160cf4: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x160CF4u;
    SET_GPR_U32(ctx, 31, 0x160CFCu);
    ctx->pc = 0x160CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160CF4u;
    // 0x160cf8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x160CF4u, 0x160CFCu)) {
        return;
    }
    ctx->pc = 0x160CFCu;
label_160cfc:
    // 0x160cfc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x160CFCu;
    {
        const bool branch_taken_0x160cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CFCu;
        // 0x160d00: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cfc) {
            ctx->pc = 0x160D24u;
            goto label_160d24;
        }
    }
    ctx->pc = 0x160D04u;
label_160d04:
    // 0x160d04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160d08: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x160d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x160d0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x160D0Cu;
    {
        const bool branch_taken_0x160d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D0Cu;
        // 0x160d10: 0xae2300a4  sw          $v1, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d0c) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160D14u;
label_160d14:
    // 0x160d14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160d18: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x160d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160d1c: 0xe62000a8  swc1        $f0, 0xA8($s1)
    ctx->pc = 0x160d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
label_160d20:
    // 0x160d20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x160d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_160d24:
    // 0x160d24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x160d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x160d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160d2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x160d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160d30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x160d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160d34: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x160D34u;
    SET_GPR_U32(ctx, 31, 0x160D3Cu);
    ctx->pc = 0x160D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160D34u;
    // 0x160d38: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x160D34u, 0x160D3Cu)) {
        return;
    }
    ctx->pc = 0x160D3Cu;
label_160d3c:
    // 0x160d3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x160d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160d40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x160d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160d44: 0x5460ff6e  bnel        $v1, $zero, . + 4 + (-0x92 << 2)
    ctx->pc = 0x160D44u;
    {
        const bool branch_taken_0x160d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160d44) {
            ctx->pc = 0x160D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160D44u;
            // 0x160d48: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160b00;
        }
    }
    ctx->pc = 0x160D4Cu;
    // 0x160d4c: 0xc6200080  lwc1        $f0, 0x80($s1)
    ctx->pc = 0x160d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160d50:
    // 0x160d50: 0xc6210088  lwc1        $f1, 0x88($s1)
    ctx->pc = 0x160d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160d54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x160d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160d58: 0x0  nop
    ctx->pc = 0x160d58u;
    // NOP
    // 0x160d5c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x160D5Cu;
    {
        const bool branch_taken_0x160d5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x160D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D5Cu;
        // 0x160d60: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d5c) {
            ctx->pc = 0x160D7Cu;
            goto label_160d7c;
        }
    }
    ctx->pc = 0x160D64u;
    // 0x160d64: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x160d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x160d68: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x160d68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x160d6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x160d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160d70: 0x0  nop
    ctx->pc = 0x160d70u;
    // NOP
    // 0x160d74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x160d74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x160d78: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x160d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_160d7c:
    // 0x160d7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x160d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160d80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x160d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160d84: 0x3e00008  jr          $ra
    ctx->pc = 0x160D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D84u;
        // 0x160d88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160D8Cu;
    // 0x160d8c: 0x0  nop
    ctx->pc = 0x160d8cu;
    // NOP
    // 0x160d90: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x160d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x160d94: 0x0  nop
    ctx->pc = 0x160d94u;
    // NOP
    ctx->pc = 0x160d98u;
}
