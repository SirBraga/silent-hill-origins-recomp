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

// Function: sub_00193A30
// Address: 0x193a30 - 0x193e90
void sub_00193A30_0x193a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193A30_0x193a30");
#endif

    switch (ctx->pc) {
        case 0x193a4cu: goto label_193a4c;
        case 0x193a60u: goto label_193a60;
        case 0x193a78u: goto label_193a78;
        case 0x193ad8u: goto label_193ad8;
        case 0x193b14u: goto label_193b14;
        case 0x193b38u: goto label_193b38;
        case 0x193b5cu: goto label_193b5c;
        case 0x193b80u: goto label_193b80;
        case 0x193ba4u: goto label_193ba4;
        case 0x193bc8u: goto label_193bc8;
        case 0x193becu: goto label_193bec;
        case 0x193c10u: goto label_193c10;
        case 0x193c34u: goto label_193c34;
        case 0x193c58u: goto label_193c58;
        case 0x193c7cu: goto label_193c7c;
        case 0x193ca0u: goto label_193ca0;
        case 0x193cc4u: goto label_193cc4;
        case 0x193ce8u: goto label_193ce8;
        case 0x193d0cu: goto label_193d0c;
        case 0x193d30u: goto label_193d30;
        case 0x193d54u: goto label_193d54;
        case 0x193d78u: goto label_193d78;
        case 0x193d9cu: goto label_193d9c;
        case 0x193dc0u: goto label_193dc0;
        case 0x193de4u: goto label_193de4;
        case 0x193e08u: goto label_193e08;
        case 0x193e2cu: goto label_193e2c;
        case 0x193e50u: goto label_193e50;
        case 0x193e6cu: goto label_193e6c;
        default: break;
    }

    ctx->pc = 0x193a30u;

    // 0x193a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x193a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x193a34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x193a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x193a38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x193a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x193a3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x193a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193a44: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x193A44u;
    SET_GPR_U32(ctx, 31, 0x193A4Cu);
    ctx->pc = 0x193A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A44u;
    // 0x193a48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x193A44u, 0x193A4Cu)) {
        return;
    }
    ctx->pc = 0x193A4Cu;
label_193a4c:
    // 0x193a4c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x193a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x193a50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a54: 0x8c46be00  lw          $a2, -0x4200($v0)
    ctx->pc = 0x193a54u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6CBE00u));
    // 0x193a58: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x193A58u;
    SET_GPR_U32(ctx, 31, 0x193A60u);
    ctx->pc = 0x193A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A58u;
    // 0x193a5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x193A58u, 0x193A60u)) {
        return;
    }
    ctx->pc = 0x193A60u;
label_193a60:
    // 0x193a60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x193a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193a64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x193a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193a68: 0x10400105  beqz        $v0, . + 4 + (0x105 << 2)
    ctx->pc = 0x193A68u;
    {
        const bool branch_taken_0x193a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A68u;
        // 0x193a6c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a68) {
            ctx->pc = 0x193E80u;
            goto label_193e80;
        }
    }
    ctx->pc = 0x193A70u;
    // 0x193a70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x193a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193a74: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x193a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_193a78:
    // 0x193a78: 0x2c83001c  sltiu       $v1, $a0, 0x1C
    ctx->pc = 0x193a78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x193a7c: 0x106000f4  beqz        $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x193A7Cu;
    {
        const bool branch_taken_0x193a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A7Cu;
        // 0x193a80: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a7c) {
            ctx->pc = 0x193E50u;
            goto label_193e50;
        }
    }
    ctx->pc = 0x193A84u;
    // 0x193a84: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x193a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x193a88: 0x24429870  addiu       $v0, $v0, -0x6790
    ctx->pc = 0x193a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940784));
    // 0x193a8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x193a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193a90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x193a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193a94: 0x800008  jr          $a0
    ctx->pc = 0x193A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193A9Cu: goto label_193a9c;
            case 0x193AACu: goto label_193aac;
            case 0x193ABCu: goto label_193abc;
            case 0x193AE0u: goto label_193ae0;
            case 0x193AF8u: goto label_193af8;
            case 0x193B1Cu: goto label_193b1c;
            case 0x193B40u: goto label_193b40;
            case 0x193B64u: goto label_193b64;
            case 0x193B88u: goto label_193b88;
            case 0x193BACu: goto label_193bac;
            case 0x193BD0u: goto label_193bd0;
            case 0x193BF4u: goto label_193bf4;
            case 0x193C18u: goto label_193c18;
            case 0x193C3Cu: goto label_193c3c;
            case 0x193C60u: goto label_193c60;
            case 0x193C84u: goto label_193c84;
            case 0x193CA8u: goto label_193ca8;
            case 0x193CCCu: goto label_193ccc;
            case 0x193CF0u: goto label_193cf0;
            case 0x193D14u: goto label_193d14;
            case 0x193D38u: goto label_193d38;
            case 0x193D5Cu: goto label_193d5c;
            case 0x193D80u: goto label_193d80;
            case 0x193DA4u: goto label_193da4;
            case 0x193DC8u: goto label_193dc8;
            case 0x193DECu: goto label_193dec;
            case 0x193E10u: goto label_193e10;
            case 0x193E34u: goto label_193e34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x193A9Cu;
label_193a9c:
    // 0x193a9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x193a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193aa0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x193aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x193aa4: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x193AA4u;
    {
        const bool branch_taken_0x193aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AA4u;
        // 0x193aa8: 0xae230068  sw          $v1, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193aa4) {
            ctx->pc = 0x193E50u;
            goto label_193e50;
        }
    }
    ctx->pc = 0x193AACu;
label_193aac:
    // 0x193aac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x193aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193ab0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x193ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x193ab4: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x193AB4u;
    {
        const bool branch_taken_0x193ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AB4u;
        // 0x193ab8: 0xae23006c  sw          $v1, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ab4) {
            ctx->pc = 0x193E50u;
            goto label_193e50;
        }
    }
    ctx->pc = 0x193ABCu;
label_193abc:
    // 0x193abc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193ac0: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193ac4: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193ac8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193acc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193ad0: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193AD0u;
    SET_GPR_U32(ctx, 31, 0x193AD8u);
    ctx->pc = 0x193AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AD0u;
    // 0x193ad4: 0x26250074  addiu       $a1, $s1, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193AD0u, 0x193AD8u)) {
        return;
    }
    ctx->pc = 0x193AD8u;
label_193ad8:
    // 0x193ad8: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x193AD8u;
    {
        const bool branch_taken_0x193ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AD8u;
        // 0x193adc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ad8) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193AE0u;
label_193ae0:
    // 0x193ae0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x193ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193ae4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x193ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x193ae8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x193ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193aec: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x193aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x193af0: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x193AF0u;
    {
        const bool branch_taken_0x193af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AF0u;
        // 0x193af4: 0xe460836c  swc1        $f0, -0x7C94($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294935404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193af0) {
            ctx->pc = 0x193E50u;
            goto label_193e50;
        }
    }
    ctx->pc = 0x193AF8u;
label_193af8:
    // 0x193af8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193af8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193afc: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193afcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193b00: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193b04: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193b08: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193b0c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193B0Cu;
    SET_GPR_U32(ctx, 31, 0x193B14u);
    ctx->pc = 0x193B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B0Cu;
    // 0x193b10: 0x2625007c  addiu       $a1, $s1, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193B0Cu, 0x193B14u)) {
        return;
    }
    ctx->pc = 0x193B14u;
label_193b14:
    // 0x193b14: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x193B14u;
    {
        const bool branch_taken_0x193b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B14u;
        // 0x193b18: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b14) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193B1Cu;
label_193b1c:
    // 0x193b1c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193b20: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193b20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193b24: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193b28: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193b2c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193b30: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193B30u;
    SET_GPR_U32(ctx, 31, 0x193B38u);
    ctx->pc = 0x193B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B30u;
    // 0x193b34: 0x26250084  addiu       $a1, $s1, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193B30u, 0x193B38u)) {
        return;
    }
    ctx->pc = 0x193B38u;
label_193b38:
    // 0x193b38: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x193B38u;
    {
        const bool branch_taken_0x193b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B38u;
        // 0x193b3c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b38) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193B40u;
label_193b40:
    // 0x193b40: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193b40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193b44: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193b44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193b48: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193b4c: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193b50: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193b54: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193B54u;
    SET_GPR_U32(ctx, 31, 0x193B5Cu);
    ctx->pc = 0x193B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B54u;
    // 0x193b58: 0x2625008c  addiu       $a1, $s1, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193B54u, 0x193B5Cu)) {
        return;
    }
    ctx->pc = 0x193B5Cu;
label_193b5c:
    // 0x193b5c: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x193B5Cu;
    {
        const bool branch_taken_0x193b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B5Cu;
        // 0x193b60: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b5c) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193B64u;
label_193b64:
    // 0x193b64: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193b68: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193b68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193b6c: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193b70: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193b74: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193b78: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193B78u;
    SET_GPR_U32(ctx, 31, 0x193B80u);
    ctx->pc = 0x193B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B78u;
    // 0x193b7c: 0x26250094  addiu       $a1, $s1, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193B78u, 0x193B80u)) {
        return;
    }
    ctx->pc = 0x193B80u;
label_193b80:
    // 0x193b80: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x193B80u;
    {
        const bool branch_taken_0x193b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B80u;
        // 0x193b84: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b80) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193B88u;
label_193b88:
    // 0x193b88: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193b88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193b8c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193b90: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193b94: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193b98: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193b9c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193B9Cu;
    SET_GPR_U32(ctx, 31, 0x193BA4u);
    ctx->pc = 0x193BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B9Cu;
    // 0x193ba0: 0x2625009c  addiu       $a1, $s1, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193B9Cu, 0x193BA4u)) {
        return;
    }
    ctx->pc = 0x193BA4u;
label_193ba4:
    // 0x193ba4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x193BA4u;
    {
        const bool branch_taken_0x193ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BA4u;
        // 0x193ba8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ba4) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193BACu;
label_193bac:
    // 0x193bac: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193bb0: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193bb4: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193bb8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193bbc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193bc0: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193BC0u;
    SET_GPR_U32(ctx, 31, 0x193BC8u);
    ctx->pc = 0x193BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193BC0u;
    // 0x193bc4: 0x262500a4  addiu       $a1, $s1, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193BC0u, 0x193BC8u)) {
        return;
    }
    ctx->pc = 0x193BC8u;
label_193bc8:
    // 0x193bc8: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x193BC8u;
    {
        const bool branch_taken_0x193bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BC8u;
        // 0x193bcc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193bc8) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193BD0u;
label_193bd0:
    // 0x193bd0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193bd4: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193bd8: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193bdc: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193be0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193be4: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193BE4u;
    SET_GPR_U32(ctx, 31, 0x193BECu);
    ctx->pc = 0x193BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193BE4u;
    // 0x193be8: 0x262500ac  addiu       $a1, $s1, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193BE4u, 0x193BECu)) {
        return;
    }
    ctx->pc = 0x193BECu;
label_193bec:
    // 0x193bec: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x193BECu;
    {
        const bool branch_taken_0x193bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BECu;
        // 0x193bf0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193bec) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193BF4u;
label_193bf4:
    // 0x193bf4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193bf8: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193bfc: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193c00: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193c04: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193c08: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193C08u;
    SET_GPR_U32(ctx, 31, 0x193C10u);
    ctx->pc = 0x193C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C08u;
    // 0x193c0c: 0x262500b4  addiu       $a1, $s1, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193C08u, 0x193C10u)) {
        return;
    }
    ctx->pc = 0x193C10u;
label_193c10:
    // 0x193c10: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x193C10u;
    {
        const bool branch_taken_0x193c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C10u;
        // 0x193c14: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c10) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193C18u;
label_193c18:
    // 0x193c18: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193c18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193c1c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193c20: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193c24: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193c28: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193c2c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193C2Cu;
    SET_GPR_U32(ctx, 31, 0x193C34u);
    ctx->pc = 0x193C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C2Cu;
    // 0x193c30: 0x262500bc  addiu       $a1, $s1, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193C2Cu, 0x193C34u)) {
        return;
    }
    ctx->pc = 0x193C34u;
label_193c34:
    // 0x193c34: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x193C34u;
    {
        const bool branch_taken_0x193c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C34u;
        // 0x193c38: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c34) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193C3Cu;
label_193c3c:
    // 0x193c3c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193c40: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193c40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193c44: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193c48: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193c4c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193c50: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193C50u;
    SET_GPR_U32(ctx, 31, 0x193C58u);
    ctx->pc = 0x193C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C50u;
    // 0x193c54: 0x262500cc  addiu       $a1, $s1, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193C50u, 0x193C58u)) {
        return;
    }
    ctx->pc = 0x193C58u;
label_193c58:
    // 0x193c58: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x193C58u;
    {
        const bool branch_taken_0x193c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C58u;
        // 0x193c5c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c58) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193C60u;
label_193c60:
    // 0x193c60: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193c64: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193c64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193c68: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193c6c: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193c70: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193c74: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193C74u;
    SET_GPR_U32(ctx, 31, 0x193C7Cu);
    ctx->pc = 0x193C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C74u;
    // 0x193c78: 0x262500c4  addiu       $a1, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193C74u, 0x193C7Cu)) {
        return;
    }
    ctx->pc = 0x193C7Cu;
label_193c7c:
    // 0x193c7c: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x193C7Cu;
    {
        const bool branch_taken_0x193c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C7Cu;
        // 0x193c80: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c7c) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193C84u;
label_193c84:
    // 0x193c84: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193c88: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193c88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193c8c: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193c90: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193c94: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193c98: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193C98u;
    SET_GPR_U32(ctx, 31, 0x193CA0u);
    ctx->pc = 0x193C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C98u;
    // 0x193c9c: 0x262500d4  addiu       $a1, $s1, 0xD4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193C98u, 0x193CA0u)) {
        return;
    }
    ctx->pc = 0x193CA0u;
label_193ca0:
    // 0x193ca0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x193CA0u;
    {
        const bool branch_taken_0x193ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CA0u;
        // 0x193ca4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ca0) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193CA8u;
label_193ca8:
    // 0x193ca8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193cac: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193cacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193cb0: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193cb4: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193cb8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193cbc: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193CBCu;
    SET_GPR_U32(ctx, 31, 0x193CC4u);
    ctx->pc = 0x193CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193CBCu;
    // 0x193cc0: 0x262500dc  addiu       $a1, $s1, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193CBCu, 0x193CC4u)) {
        return;
    }
    ctx->pc = 0x193CC4u;
label_193cc4:
    // 0x193cc4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x193CC4u;
    {
        const bool branch_taken_0x193cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CC4u;
        // 0x193cc8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193cc4) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193CCCu;
label_193ccc:
    // 0x193ccc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193cd0: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193cd4: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193cd8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193cdc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193ce0: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193CE0u;
    SET_GPR_U32(ctx, 31, 0x193CE8u);
    ctx->pc = 0x193CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193CE0u;
    // 0x193ce4: 0x262500e4  addiu       $a1, $s1, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193CE0u, 0x193CE8u)) {
        return;
    }
    ctx->pc = 0x193CE8u;
label_193ce8:
    // 0x193ce8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x193CE8u;
    {
        const bool branch_taken_0x193ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CE8u;
        // 0x193cec: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ce8) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193CF0u;
label_193cf0:
    // 0x193cf0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193cf4: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193cf8: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193cfc: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193d00: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193d04: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193D04u;
    SET_GPR_U32(ctx, 31, 0x193D0Cu);
    ctx->pc = 0x193D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D04u;
    // 0x193d08: 0x262500ec  addiu       $a1, $s1, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193D04u, 0x193D0Cu)) {
        return;
    }
    ctx->pc = 0x193D0Cu;
label_193d0c:
    // 0x193d0c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x193D0Cu;
    {
        const bool branch_taken_0x193d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D0Cu;
        // 0x193d10: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d0c) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193D14u;
label_193d14:
    // 0x193d14: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193d18: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193d18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193d1c: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193d20: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193d24: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193d28: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193D28u;
    SET_GPR_U32(ctx, 31, 0x193D30u);
    ctx->pc = 0x193D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D28u;
    // 0x193d2c: 0x262500f4  addiu       $a1, $s1, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193D28u, 0x193D30u)) {
        return;
    }
    ctx->pc = 0x193D30u;
label_193d30:
    // 0x193d30: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x193D30u;
    {
        const bool branch_taken_0x193d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D30u;
        // 0x193d34: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d30) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193D38u;
label_193d38:
    // 0x193d38: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193d38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193d3c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193d40: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193d44: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193d48: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193d4c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193D4Cu;
    SET_GPR_U32(ctx, 31, 0x193D54u);
    ctx->pc = 0x193D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D4Cu;
    // 0x193d50: 0x262500fc  addiu       $a1, $s1, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193D4Cu, 0x193D54u)) {
        return;
    }
    ctx->pc = 0x193D54u;
label_193d54:
    // 0x193d54: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x193D54u;
    {
        const bool branch_taken_0x193d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D54u;
        // 0x193d58: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d54) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193D5Cu;
label_193d5c:
    // 0x193d5c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193d60: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193d60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193d64: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193d68: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193d6c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193d70: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193D70u;
    SET_GPR_U32(ctx, 31, 0x193D78u);
    ctx->pc = 0x193D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D70u;
    // 0x193d74: 0x26250104  addiu       $a1, $s1, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193D70u, 0x193D78u)) {
        return;
    }
    ctx->pc = 0x193D78u;
label_193d78:
    // 0x193d78: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x193D78u;
    {
        const bool branch_taken_0x193d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D78u;
        // 0x193d7c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d78) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193D80u;
label_193d80:
    // 0x193d80: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193d84: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193d84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193d88: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193d8c: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193d90: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193d94: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193D94u;
    SET_GPR_U32(ctx, 31, 0x193D9Cu);
    ctx->pc = 0x193D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D94u;
    // 0x193d98: 0x2625010c  addiu       $a1, $s1, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193D94u, 0x193D9Cu)) {
        return;
    }
    ctx->pc = 0x193D9Cu;
label_193d9c:
    // 0x193d9c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x193D9Cu;
    {
        const bool branch_taken_0x193d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D9Cu;
        // 0x193da0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d9c) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193DA4u;
label_193da4:
    // 0x193da4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193da8: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193da8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193dac: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193db0: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193db4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193db8: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193DB8u;
    SET_GPR_U32(ctx, 31, 0x193DC0u);
    ctx->pc = 0x193DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193DB8u;
    // 0x193dbc: 0x26250114  addiu       $a1, $s1, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193DB8u, 0x193DC0u)) {
        return;
    }
    ctx->pc = 0x193DC0u;
label_193dc0:
    // 0x193dc0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x193DC0u;
    {
        const bool branch_taken_0x193dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DC0u;
        // 0x193dc4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193dc0) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193DC8u;
label_193dc8:
    // 0x193dc8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193dcc: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193dccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193dd0: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193dd4: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193dd8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193ddc: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193DDCu;
    SET_GPR_U32(ctx, 31, 0x193DE4u);
    ctx->pc = 0x193DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193DDCu;
    // 0x193de0: 0x2625011c  addiu       $a1, $s1, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193DDCu, 0x193DE4u)) {
        return;
    }
    ctx->pc = 0x193DE4u;
label_193de4:
    // 0x193de4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x193DE4u;
    {
        const bool branch_taken_0x193de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DE4u;
        // 0x193de8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193de4) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193DECu;
label_193dec:
    // 0x193dec: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193df0: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193df0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193df4: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193df8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193dfc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193e00: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193E00u;
    SET_GPR_U32(ctx, 31, 0x193E08u);
    ctx->pc = 0x193E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E00u;
    // 0x193e04: 0x26250124  addiu       $a1, $s1, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193E00u, 0x193E08u)) {
        return;
    }
    ctx->pc = 0x193E08u;
label_193e08:
    // 0x193e08: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x193E08u;
    {
        const bool branch_taken_0x193e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E08u;
        // 0x193e0c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e08) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193E10u;
label_193e10:
    // 0x193e10: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193e14: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193e14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193e18: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193e1c: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193e20: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193e24: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193E24u;
    SET_GPR_U32(ctx, 31, 0x193E2Cu);
    ctx->pc = 0x193E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E24u;
    // 0x193e28: 0x2625012c  addiu       $a1, $s1, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193E24u, 0x193E2Cu)) {
        return;
    }
    ctx->pc = 0x193E2Cu;
label_193e2c:
    // 0x193e2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x193E2Cu;
    {
        const bool branch_taken_0x193e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E2Cu;
        // 0x193e30: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e2c) {
            ctx->pc = 0x193E54u;
            goto label_193e54;
        }
    }
    ctx->pc = 0x193E34u;
label_193e34:
    // 0x193e34: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x193e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193e38: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x193e38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x193e3c: 0x24e79720  addiu       $a3, $a3, -0x68E0
    ctx->pc = 0x193e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940448));
    // 0x193e40: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x193e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x193e44: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x193e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x193e48: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x193E48u;
    SET_GPR_U32(ctx, 31, 0x193E50u);
    ctx->pc = 0x193E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E48u;
    // 0x193e4c: 0x26250134  addiu       $a1, $s1, 0x134 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x193E48u, 0x193E50u)) {
        return;
    }
    ctx->pc = 0x193E50u;
label_193e50:
    // 0x193e50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x193e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_193e54:
    // 0x193e54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x193e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x193e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193e5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x193e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193e60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x193e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193e64: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x193E64u;
    SET_GPR_U32(ctx, 31, 0x193E6Cu);
    ctx->pc = 0x193E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E64u;
    // 0x193e68: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x193E64u, 0x193E6Cu)) {
        return;
    }
    ctx->pc = 0x193E6Cu;
label_193e6c:
    // 0x193e6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x193e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193e70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x193e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193e74: 0x5460ff00  bnel        $v1, $zero, . + 4 + (-0x100 << 2)
    ctx->pc = 0x193E74u;
    {
        const bool branch_taken_0x193e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x193e74) {
            ctx->pc = 0x193E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193E74u;
            // 0x193e78: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193a78;
        }
    }
    ctx->pc = 0x193E7Cu;
    // 0x193e7c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x193e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_193e80:
    // 0x193e80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x193e80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193e84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193e88: 0x3e00008  jr          $ra
    ctx->pc = 0x193E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E88u;
        // 0x193e8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193E90u;
}
