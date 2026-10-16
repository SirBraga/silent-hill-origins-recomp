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

// Function: sub_0026FAD8
// Address: 0x26fad8 - 0x270368
void sub_0026FAD8_0x26fad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FAD8_0x26fad8");
#endif

    switch (ctx->pc) {
        case 0x26fc54u: goto label_26fc54;
        case 0x26fc64u: goto label_26fc64;
        case 0x26fd30u: goto label_26fd30;
        case 0x270324u: goto label_270324;
        default: break;
    }

    ctx->pc = 0x26fad8u;

    // 0x26fad8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26fad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26fadc: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x26fadcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x26fae0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x26fae0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x26fae4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x26fae4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x26fae8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x26fae8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x26faec: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x26faecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x26faf0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x26faf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x26faf4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26faf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26faf8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26faf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26fafc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26fafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26fb00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26fb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26fb04: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x26fb04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26fb08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26fb08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb0c: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x26fb0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26fb10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26fb10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb14: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x26fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x26fb18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26fb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26fb1c: 0x2428824  and         $s1, $s2, $v0
    ctx->pc = 0x26fb1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x26fb20: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FB20u;
    {
        const bool branch_taken_0x26fb20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB20u;
        // 0x26fb24: 0x2628024  and         $s0, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb20) {
            ctx->pc = 0x26FB38u;
            goto label_26fb38;
        }
    }
    ctx->pc = 0x26FB28u;
    // 0x26fb28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26fb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26fb2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26fb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fb30: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x26FB30u;
    {
        const bool branch_taken_0x26fb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB30u;
        // 0x26fb34: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb30) {
            ctx->pc = 0x270340u;
            goto label_270340;
        }
    }
    ctx->pc = 0x26FB38u;
label_26fb38:
    // 0x26fb38: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x26fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x26fb3c: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x26fb3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26fb40: 0x544001fe  bnel        $v0, $zero, . + 4 + (0x1FE << 2)
    ctx->pc = 0x26FB40u;
    {
        const bool branch_taken_0x26fb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fb40) {
            ctx->pc = 0x26FB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FB40u;
            // 0x26fb44: 0x4615a000  add.s       $f0, $f20, $f21 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27033Cu;
            goto label_27033c;
        }
    }
    ctx->pc = 0x26FB48u;
    // 0x26fb48: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x26fb48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26fb4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FB4Cu;
    {
        const bool branch_taken_0x26fb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fb4c) {
            ctx->pc = 0x26FB5Cu;
            goto label_26fb5c;
        }
    }
    ctx->pc = 0x26FB54u;
    // 0x26fb54: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x26FB54u;
    {
        const bool branch_taken_0x26fb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB54u;
        // 0x26fb58: 0x4615a000  add.s       $f0, $f20, $f21 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb54) {
            ctx->pc = 0x27033Cu;
            goto label_27033c;
        }
    }
    ctx->pc = 0x26FB5Cu;
label_26fb5c:
    // 0x26fb5c: 0x6610015  bgez        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x26FB5Cu;
    {
        const bool branch_taken_0x26fb5c = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x26FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB5Cu;
        // 0x26fb60: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb5c) {
            ctx->pc = 0x26FBB4u;
            goto label_26fbb4;
        }
    }
    ctx->pc = 0x26FB64u;
    // 0x26fb64: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x26fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x26fb68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26fb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26fb6c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x26fb6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26fb70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FB70u;
    {
        const bool branch_taken_0x26fb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB70u;
        // 0x26fb74: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb70) {
            ctx->pc = 0x26FB80u;
            goto label_26fb80;
        }
    }
    ctx->pc = 0x26FB78u;
    // 0x26fb78: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26FB78u;
    {
        const bool branch_taken_0x26fb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB78u;
        // 0x26fb7c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb78) {
            ctx->pc = 0x26FBB4u;
            goto label_26fbb4;
        }
    }
    ctx->pc = 0x26FB80u;
label_26fb80:
    // 0x26fb80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26fb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26fb84: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x26fb84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26fb88: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26FB88u;
    {
        const bool branch_taken_0x26fb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB88u;
        // 0x26fb8c: 0x111dc3  sra         $v1, $s1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb88) {
            ctx->pc = 0x26FBB4u;
            goto label_26fbb4;
        }
    }
    ctx->pc = 0x26FB90u;
    // 0x26fb90: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x26fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x26fb94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26fb98: 0x512807  srav        $a1, $s1, $v0
    ctx->pc = 0x26fb98u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x26fb9c: 0x451004  sllv        $v0, $a1, $v0
    ctx->pc = 0x26fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x26fba0: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FBA0u;
    {
        const bool branch_taken_0x26fba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x26FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBA0u;
        // 0x26fba4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fba0) {
            ctx->pc = 0x26FBB8u;
            goto label_26fbb8;
        }
    }
    ctx->pc = 0x26FBA8u;
    // 0x26fba8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x26fba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x26fbac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26fbb0: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x26fbb0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26fbb4:
    // 0x26fbb4: 0x3c027f80  lui         $v0, 0x7F80
    ctx->pc = 0x26fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
label_26fbb8:
    // 0x26fbb8: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26FBB8u;
    {
        const bool branch_taken_0x26fbb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x26FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBB8u;
        // 0x26fbbc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fbb8) {
            ctx->pc = 0x26FC00u;
            goto label_26fc00;
        }
    }
    ctx->pc = 0x26FBC0u;
    // 0x26fbc0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FBC0u;
    {
        const bool branch_taken_0x26fbc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBC0u;
        // 0x26fbc4: 0x50102a  slt         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fbc0) {
            ctx->pc = 0x26FBD0u;
            goto label_26fbd0;
        }
    }
    ctx->pc = 0x26FBC8u;
    // 0x26fbc8: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x26FBC8u;
    {
        const bool branch_taken_0x26fbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBC8u;
        // 0x26fbcc: 0x4615a801  sub.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fbc8) {
            ctx->pc = 0x27033Cu;
            goto label_27033c;
        }
    }
    ctx->pc = 0x26FBD0u;
label_26fbd0:
    // 0x26fbd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FBD0u;
    {
        const bool branch_taken_0x26fbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fbd0) {
            ctx->pc = 0x26FBECu;
            goto label_26fbec;
        }
    }
    ctx->pc = 0x26FBD8u;
    // 0x26fbd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26fbd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fbdc: 0x64301d7  bgezl       $s2, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x26FBDCu;
    {
        const bool branch_taken_0x26fbdc = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x26fbdc) {
            ctx->pc = 0x26FBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FBDCu;
            // 0x26fbe0: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27033Cu;
            goto label_27033c;
        }
    }
    ctx->pc = 0x26FBE4u;
    // 0x26fbe4: 0x100001d6  b           . + 4 + (0x1D6 << 2)
    ctx->pc = 0x26FBE4u;
    {
        const bool branch_taken_0x26fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBE4u;
        // 0x26fbe8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fbe4) {
            ctx->pc = 0x270340u;
            goto label_270340;
        }
    }
    ctx->pc = 0x26FBECu;
label_26fbec:
    // 0x26fbec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26fbecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fbf0: 0x64201d2  bltzl       $s2, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x26FBF0u;
    {
        const bool branch_taken_0x26fbf0 = (GPR_S64(ctx, 18) < 0);
        if (branch_taken_0x26fbf0) {
            ctx->pc = 0x26FBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FBF0u;
            // 0x26fbf4: 0x4600a807  neg.s       $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27033Cu;
            goto label_27033c;
        }
    }
    ctx->pc = 0x26FBF8u;
    // 0x26fbf8: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x26FBF8u;
    {
        const bool branch_taken_0x26fbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBF8u;
        // 0x26fbfc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fbf8) {
            ctx->pc = 0x270340u;
            goto label_270340;
        }
    }
    ctx->pc = 0x26FC00u;
label_26fc00:
    // 0x26fc00: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26FC00u;
    {
        const bool branch_taken_0x26fc00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x26fc00) {
            ctx->pc = 0x26FC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FC00u;
            // 0x26fc04: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FC2Cu;
            goto label_26fc2c;
        }
    }
    ctx->pc = 0x26FC08u;
    // 0x26fc08: 0x64101cc  bgez        $s2, . + 4 + (0x1CC << 2)
    ctx->pc = 0x26FC08u;
    {
        const bool branch_taken_0x26fc08 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x26FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC08u;
        // 0x26fc0c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc08) {
            ctx->pc = 0x27033Cu;
            goto label_27033c;
        }
    }
    ctx->pc = 0x26FC10u;
    // 0x26fc10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26fc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26fc14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26fc14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fc18: 0x0  nop
    ctx->pc = 0x26fc18u;
    // NOP
    // 0x26fc1c: 0x0  nop
    ctx->pc = 0x26fc1cu;
    // NOP
    // 0x26fc20: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x26fc20u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[20]);
    // 0x26fc24: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x26FC24u;
    {
        const bool branch_taken_0x26fc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC24u;
        // 0x26fc28: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc24) {
            ctx->pc = 0x270340u;
            goto label_270340;
        }
    }
    ctx->pc = 0x26FC2Cu;
label_26fc2c:
    // 0x26fc2c: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FC2Cu;
    {
        const bool branch_taken_0x26fc2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x26FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC2Cu;
        // 0x26fc30: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc2c) {
            ctx->pc = 0x26FC3Cu;
            goto label_26fc3c;
        }
    }
    ctx->pc = 0x26FC34u;
    // 0x26fc34: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x26FC34u;
    {
        const bool branch_taken_0x26fc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC34u;
        // 0x26fc38: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc34) {
            ctx->pc = 0x27033Cu;
            goto label_27033c;
        }
    }
    ctx->pc = 0x26FC3Cu;
label_26fc3c:
    // 0x26fc3c: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26FC3Cu;
    {
        const bool branch_taken_0x26fc3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x26fc3c) {
            ctx->pc = 0x26FC5Cu;
            goto label_26fc5c;
        }
    }
    ctx->pc = 0x26FC44u;
    // 0x26fc44: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FC44u;
    {
        const bool branch_taken_0x26fc44 = (GPR_S64(ctx, 19) < 0);
        if (branch_taken_0x26fc44) {
            ctx->pc = 0x26FC5Cu;
            goto label_26fc5c;
        }
    }
    ctx->pc = 0x26FC4Cu;
    // 0x26fc4c: 0xc09c1d2  jal         func_270748
    ctx->pc = 0x26FC4Cu;
    SET_GPR_U32(ctx, 31, 0x26FC54u);
    ctx->pc = 0x26FC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FC4Cu;
    // 0x26fc50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x270748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x270748u, 0x26FC4Cu, 0x26FC54u)) {
        return;
    }
    ctx->pc = 0x26FC54u;
label_26fc54:
    // 0x26fc54: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x26FC54u;
    {
        const bool branch_taken_0x26fc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC54u;
        // 0x26fc58: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc54) {
            ctx->pc = 0x270340u;
            goto label_270340;
        }
    }
    ctx->pc = 0x26FC5Cu;
label_26fc5c:
    // 0x26fc5c: 0xc09b122  jal         func_26C488
    ctx->pc = 0x26FC5Cu;
    SET_GPR_U32(ctx, 31, 0x26FC64u);
    ctx->pc = 0x26FC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FC5Cu;
    // 0x26fc60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C488u, 0x26FC5Cu, 0x26FC64u)) {
        return;
    }
    ctx->pc = 0x26FC64u;
label_26fc64:
    // 0x26fc64: 0x3c027f80  lui         $v0, 0x7F80
    ctx->pc = 0x26fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
    // 0x26fc68: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FC68u;
    {
        const bool branch_taken_0x26fc68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC68u;
        // 0x26fc6c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc68) {
            ctx->pc = 0x26FC84u;
            goto label_26fc84;
        }
    }
    ctx->pc = 0x26FC70u;
    // 0x26fc70: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FC70u;
    {
        const bool branch_taken_0x26fc70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc70) {
            ctx->pc = 0x26FC84u;
            goto label_26fc84;
        }
    }
    ctx->pc = 0x26FC78u;
    // 0x26fc78: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x26fc78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x26fc7c: 0x16060019  bne         $s0, $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x26FC7Cu;
    {
        const bool branch_taken_0x26fc7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x26FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC7Cu;
        // 0x26fc80: 0x1357c2  srl         $t2, $s3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc7c) {
            ctx->pc = 0x26FCE4u;
            goto label_26fce4;
        }
    }
    ctx->pc = 0x26FC84u;
label_26fc84:
    // 0x26fc84: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FC84u;
    {
        const bool branch_taken_0x26fc84 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x26FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC84u;
        // 0x26fc88: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc84) {
            ctx->pc = 0x26FCA0u;
            goto label_26fca0;
        }
    }
    ctx->pc = 0x26FC8Cu;
    // 0x26fc8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26fc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26fc90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26fc90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fc94: 0x0  nop
    ctx->pc = 0x26fc94u;
    // NOP
    // 0x26fc98: 0x0  nop
    ctx->pc = 0x26fc98u;
    // NOP
    // 0x26fc9c: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x26fc9cu;
    ctx->f[13] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[13]);
label_26fca0:
    // 0x26fca0: 0x66101a6  bgez        $s3, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x26FCA0u;
    {
        const bool branch_taken_0x26fca0 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x26FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCA0u;
        // 0x26fca4: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fca0) {
            ctx->pc = 0x27033Cu;
            goto label_27033c;
        }
    }
    ctx->pc = 0x26FCA8u;
    // 0x26fca8: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x26fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x26fcac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x26fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26fcb0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x26fcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x26fcb4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26FCB4u;
    {
        const bool branch_taken_0x26fcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCB4u;
        // 0x26fcb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fcb4) {
            ctx->pc = 0x26FCD4u;
            goto label_26fcd4;
        }
    }
    ctx->pc = 0x26FCBCu;
    // 0x26fcbc: 0x460d6801  sub.s       $f0, $f13, $f13
    ctx->pc = 0x26fcbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[13]);
    // 0x26fcc0: 0x0  nop
    ctx->pc = 0x26fcc0u;
    // NOP
    // 0x26fcc4: 0x0  nop
    ctx->pc = 0x26fcc4u;
    // NOP
    // 0x26fcc8: 0x46000343  div.s       $f13, $f0, $f0
    ctx->pc = 0x26fcc8u;
    ctx->f[13] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[0]);
    // 0x26fccc: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x26FCCCu;
    {
        const bool branch_taken_0x26fccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCCCu;
        // 0x26fcd0: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fccc) {
            ctx->pc = 0x27033Cu;
            goto label_27033c;
        }
    }
    ctx->pc = 0x26FCD4u;
label_26fcd4:
    // 0x26fcd4: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x26FCD4u;
    {
        const bool branch_taken_0x26fcd4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x26fcd4) {
            ctx->pc = 0x26FCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FCD4u;
            // 0x26fcd8: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
            ctx->f[13] = FPU_NEG_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FCDCu;
            goto label_26fcdc;
        }
    }
    ctx->pc = 0x26FCDCu;
label_26fcdc:
    // 0x26fcdc: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x26FCDCu;
    {
        const bool branch_taken_0x26fcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCDCu;
        // 0x26fce0: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fcdc) {
            ctx->pc = 0x27033Cu;
            goto label_27033c;
        }
    }
    ctx->pc = 0x26FCE4u;
label_26fce4:
    // 0x26fce4: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x26fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x26fce8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x26fce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x26fcec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26FCECu;
    {
        const bool branch_taken_0x26fcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCECu;
        // 0x26fcf0: 0x3c024d00  lui         $v0, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19712 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fcec) {
            ctx->pc = 0x26FD0Cu;
            goto label_26fd0c;
        }
    }
    ctx->pc = 0x26FCF4u;
    // 0x26fcf4: 0x4614a001  sub.s       $f0, $f20, $f20
    ctx->pc = 0x26fcf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[20]);
    // 0x26fcf8: 0x0  nop
    ctx->pc = 0x26fcf8u;
    // NOP
    // 0x26fcfc: 0x0  nop
    ctx->pc = 0x26fcfcu;
    // NOP
    // 0x26fd00: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x26fd00u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[0]);
    // 0x26fd04: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x26FD04u;
    {
        const bool branch_taken_0x26fd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD04u;
        // 0x26fd08: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd04) {
            ctx->pc = 0x270340u;
            goto label_270340;
        }
    }
    ctx->pc = 0x26FD0Cu;
label_26fd0c:
    // 0x26fd0c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x26fd0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26fd10: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x26FD10u;
    {
        const bool branch_taken_0x26fd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD10u;
        // 0x26fd14: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd10) {
            ctx->pc = 0x26FDF8u;
            goto label_26fdf8;
        }
    }
    ctx->pc = 0x26FD18u;
    // 0x26fd18: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x26fd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x26fd1c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26fd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26fd20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FD20u;
    {
        const bool branch_taken_0x26fd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD20u;
        // 0x26fd24: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd20) {
            ctx->pc = 0x26FD38u;
            goto label_26fd38;
        }
    }
    ctx->pc = 0x26FD28u;
    // 0x26fd28: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x26FD28u;
    {
        const bool branch_taken_0x26fd28 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x26FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD28u;
        // 0x26fd2c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd28) {
            ctx->pc = 0x26FD50u;
            goto label_26fd50;
        }
    }
    ctx->pc = 0x26FD30u;
label_26fd30:
    // 0x26fd30: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x26FD30u;
    {
        const bool branch_taken_0x26fd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD30u;
        // 0x26fd34: 0xc440c4ec  lwc1        $f0, -0x3B14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd30) {
            ctx->pc = 0x27033Cu;
            goto label_27033c;
        }
    }
    ctx->pc = 0x26FD38u;
label_26fd38:
    // 0x26fd38: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x26fd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x26fd3c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26fd3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26fd40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FD40u;
    {
        const bool branch_taken_0x26fd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fd40) {
            ctx->pc = 0x26FD5Cu;
            goto label_26fd5c;
        }
    }
    ctx->pc = 0x26FD48u;
    // 0x26fd48: 0x1e40fff9  bgtz        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x26FD48u;
    {
        const bool branch_taken_0x26fd48 = (GPR_S64(ctx, 18) > 0);
        ctx->pc = 0x26FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD48u;
        // 0x26fd4c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd48) {
            ctx->pc = 0x26FD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26fd30;
        }
    }
    ctx->pc = 0x26FD50u;
label_26fd50:
    // 0x26fd50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26fd50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fd54: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x26FD54u;
    {
        const bool branch_taken_0x26fd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD54u;
        // 0x26fd58: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd54) {
            ctx->pc = 0x270340u;
            goto label_270340;
        }
    }
    ctx->pc = 0x26FD5Cu;
label_26fd5c:
    // 0x26fd5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26fd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26fd60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26fd60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26fd64: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x26fd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x26fd68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26fd68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26fd6c: 0x4601a301  sub.s       $f12, $f20, $f1
    ctx->pc = 0x26fd6cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x26fd70: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x26fd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x26fd74: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x26fd74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x26fd78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26fd78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fd7c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26fd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26fd80: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26fd80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26fd84: 0x3c0136ec  lui         $at, 0x36EC
    ctx->pc = 0x26fd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14060 << 16));
    // 0x26fd88: 0x3421a570  ori         $at, $at, 0xA570
    ctx->pc = 0x26fd88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42352);
    // 0x26fd8c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26fd8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26fd90: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x26fd90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x26fd94: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x26fd94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x26fd98: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x26fd98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
    // 0x26fd9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26fd9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26fda0: 0x460c6182  mul.s       $f6, $f12, $f12
    ctx->pc = 0x26fda0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26fda4: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x26fda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x26fda8: 0x3421aa00  ori         $at, $at, 0xAA00
    ctx->pc = 0x26fda8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43520);
    // 0x26fdac: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26fdacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26fdb0: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x26fdb0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x26fdb4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x26fdb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x26fdb8: 0x460563c2  mul.s       $f15, $f12, $f5
    ctx->pc = 0x26fdb8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x26fdbc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x26fdbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x26fdc0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x26fdc0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x26fdc4: 0x46033242  mul.s       $f9, $f6, $f3
    ctx->pc = 0x26fdc4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x26fdc8: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x26fdc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x26fdcc: 0x46012381  sub.s       $f14, $f4, $f1
    ctx->pc = 0x26fdccu;
    ctx->f[14] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x26fdd0: 0x460e7800  add.s       $f0, $f15, $f14
    ctx->pc = 0x26fdd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x26fdd4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x26fdd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26fdd8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26fddc: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x26fddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x26fde0: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x26fde0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26fde4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x26fde4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26fde8: 0x460f0801  sub.s       $f0, $f1, $f15
    ctx->pc = 0x26fde8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[15]);
    // 0x26fdec: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x26FDECu;
    {
        const bool branch_taken_0x26fdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDECu;
        // 0x26fdf0: 0x46007041  sub.s       $f1, $f14, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdec) {
            ctx->pc = 0x270068u;
            goto label_270068;
        }
    }
    ctx->pc = 0x26FDF4u;
    // 0x26fdf4: 0x0  nop
    ctx->pc = 0x26fdf4u;
    // NOP
label_26fdf8:
    // 0x26fdf8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x26fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x26fdfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26fdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26fe00: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x26fe00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26fe04: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FE04u;
    {
        const bool branch_taken_0x26fe04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE04u;
        // 0x26fe08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe04) {
            ctx->pc = 0x26FE20u;
            goto label_26fe20;
        }
    }
    ctx->pc = 0x26FE0Cu;
    // 0x26fe0c: 0x3c014b80  lui         $at, 0x4B80
    ctx->pc = 0x26fe0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19328 << 16));
    // 0x26fe10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26fe10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fe14: 0x2409ffe8  addiu       $t1, $zero, -0x18
    ctx->pc = 0x26fe14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967272));
    // 0x26fe18: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x26fe18u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x26fe1c: 0x44106000  mfc1        $s0, $f12
    ctx->pc = 0x26fe1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_26fe20:
    // 0x26fe20: 0x2032824  and         $a1, $s0, $v1
    ctx->pc = 0x26fe20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x26fe24: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x26fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x26fe28: 0x101dc3  sra         $v1, $s0, 23
    ctx->pc = 0x26fe28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 23));
    // 0x26fe2c: 0x2524ff81  addiu       $a0, $t1, -0x7F
    ctx->pc = 0x26fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967169));
    // 0x26fe30: 0x3442c471  ori         $v0, $v0, 0xC471
    ctx->pc = 0x26fe30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50289);
    // 0x26fe34: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x26fe34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26fe38: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x26fe38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26fe3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FE3Cu;
    {
        const bool branch_taken_0x26fe3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE3Cu;
        // 0x26fe40: 0xa68025  or          $s0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe3c) {
            ctx->pc = 0x26FE4Cu;
            goto label_26fe4c;
        }
    }
    ctx->pc = 0x26FE44u;
    // 0x26fe44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26FE44u;
    {
        const bool branch_taken_0x26fe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE44u;
        // 0x26fe48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe44) {
            ctx->pc = 0x26FE70u;
            goto label_26fe70;
        }
    }
    ctx->pc = 0x26FE4Cu;
label_26fe4c:
    // 0x26fe4c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x26fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x26fe50: 0x3442b3d6  ori         $v0, $v0, 0xB3D6
    ctx->pc = 0x26fe50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46038);
    // 0x26fe54: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x26fe54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26fe58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FE58u;
    {
        const bool branch_taken_0x26fe58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE58u;
        // 0x26fe5c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe58) {
            ctx->pc = 0x26FE70u;
            goto label_26fe70;
        }
    }
    ctx->pc = 0x26FE60u;
    // 0x26fe60: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x26fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x26fe64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26fe64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe68: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x26fe68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26fe6c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x26fe6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_26fe70:
    // 0x26fe70: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x26fe70u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26fe74: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26fe78: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x26fe78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x26fe7c: 0x2442c468  addiu       $v0, $v0, -0x3B98
    ctx->pc = 0x26fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952040));
    // 0x26fe80: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x26fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x26fe84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26fe84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26fe88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26fe88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26fe8c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x26fe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fe90: 0x46026000  add.s       $f0, $f12, $f2
    ctx->pc = 0x26fe90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x26fe94: 0x460263c1  sub.s       $f15, $f12, $f2
    ctx->pc = 0x26fe94u;
    ctx->f[15] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x26fe98: 0x0  nop
    ctx->pc = 0x26fe98u;
    // NOP
    // 0x26fe9c: 0x0  nop
    ctx->pc = 0x26fe9cu;
    // NOP
    // 0x26fea0: 0x46000b83  div.s       $f14, $f1, $f0
    ctx->pc = 0x26fea0u;
    ctx->f[14] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x26fea4: 0x460e7d02  mul.s       $f20, $f15, $f14
    ctx->pc = 0x26fea4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[15], ctx->f[14]);
    // 0x26fea8: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x26fea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26feac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26feacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26feb0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x26feb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x26feb4: 0x34c6f000  ori         $a2, $a2, 0xF000
    ctx->pc = 0x26feb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61440);
    // 0x26feb8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x26feb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x26febc: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x26febcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26fec0: 0x101843  sra         $v1, $s0, 1
    ctx->pc = 0x26fec0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 1));
    // 0x26fec4: 0x81540  sll         $v0, $t0, 21
    ctx->pc = 0x26fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 21));
    // 0x26fec8: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x26fec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x26fecc: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x26feccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x26fed0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26fed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26fed4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x26fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26fed8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26fedc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26fedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fee0: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x26fee0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x26fee4: 0x3c013e53  lui         $at, 0x3E53
    ctx->pc = 0x26fee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15955 << 16));
    // 0x26fee8: 0x3421f142  ori         $at, $at, 0xF142
    ctx->pc = 0x26fee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61762);
    // 0x26feec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26feecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fef0: 0x3c013e6c  lui         $at, 0x3E6C
    ctx->pc = 0x26fef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15980 << 16));
    // 0x26fef4: 0x34213255  ori         $at, $at, 0x3255
    ctx->pc = 0x26fef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12885);
    // 0x26fef8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26fef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26fefc: 0x4614a2c2  mul.s       $f11, $f20, $f20
    ctx->pc = 0x26fefcu;
    ctx->f[11] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x26ff00: 0x3c013e8b  lui         $at, 0x3E8B
    ctx->pc = 0x26ff00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16011 << 16));
    // 0x26ff04: 0x3421a305  ori         $at, $at, 0xA305
    ctx->pc = 0x26ff04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41733);
    // 0x26ff08: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x26ff08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x26ff0c: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x26ff0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x26ff10: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x26ff10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x26ff14: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x26ff14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x26ff18: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x26ff18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x26ff1c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x26ff1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26ff20: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x26ff20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x26ff24: 0x3c013edb  lui         $at, 0x3EDB
    ctx->pc = 0x26ff24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16091 << 16));
    // 0x26ff28: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x26ff28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x26ff2c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x26ff2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x26ff30: 0x46042842  mul.s       $f1, $f5, $f4
    ctx->pc = 0x26ff30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x26ff34: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x26ff34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x26ff38: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26ff38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x26ff3c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x26ff3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x26ff40: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x26ff40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x26ff44: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x26ff44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x26ff48: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26ff48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26ff4c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x26ff4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x26ff50: 0x46017841  sub.s       $f1, $f15, $f1
    ctx->pc = 0x26ff50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
    // 0x26ff54: 0x460b5982  mul.s       $f6, $f11, $f11
    ctx->pc = 0x26ff54u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x26ff58: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x26ff58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x26ff5c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x26ff5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x26ff60: 0x461428c0  add.s       $f3, $f5, $f20
    ctx->pc = 0x26ff60u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
    // 0x26ff64: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x26ff64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x26ff68: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x26ff68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x26ff6c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x26ff6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x26ff70: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x26ff70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x26ff74: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x26ff74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x26ff78: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x26ff78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x26ff7c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x26ff7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x26ff80: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x26ff80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x26ff84: 0x46052ac2  mul.s       $f11, $f5, $f5
    ctx->pc = 0x26ff84u;
    ctx->f[11] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x26ff88: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x26ff88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x26ff8c: 0x46045880  add.s       $f2, $f11, $f4
    ctx->pc = 0x26ff8cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x26ff90: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x26ff90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x26ff94: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x26ff94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x26ff98: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x26ff98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26ff9c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x26ff9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26ffa0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x26ffa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x26ffa4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26ffa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26ffa8: 0x46041101  sub.s       $f4, $f2, $f4
    ctx->pc = 0x26ffa8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x26ffac: 0x460b2101  sub.s       $f4, $f4, $f11
    ctx->pc = 0x26ffacu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[11]);
    // 0x26ffb0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x26ffb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x26ffb4: 0x46022bc2  mul.s       $f15, $f5, $f2
    ctx->pc = 0x26ffb4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x26ffb8: 0x46040081  sub.s       $f2, $f0, $f4
    ctx->pc = 0x26ffb8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x26ffbc: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x26ffbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x26ffc0: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x26ffc0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ffc4: 0x460e78c0  add.s       $f3, $f15, $f14
    ctx->pc = 0x26ffc4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x26ffc8: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x26ffc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26ffcc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x26ffccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x26ffd0: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x26ffd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x26ffd4: 0x460f3881  sub.s       $f2, $f7, $f15
    ctx->pc = 0x26ffd4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[15]);
    // 0x26ffd8: 0x3c01369d  lui         $at, 0x369D
    ctx->pc = 0x26ffd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13981 << 16));
    // 0x26ffdc: 0x3421c3a0  ori         $at, $at, 0xC3A0
    ctx->pc = 0x26ffdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50080);
    // 0x26ffe0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26ffe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ffe4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26ffe8: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x26ffe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x26ffec: 0x3421384f  ori         $at, $at, 0x384F
    ctx->pc = 0x26ffecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14415);
    // 0x26fff0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26fff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fff4: 0x2442c478  addiu       $v0, $v0, -0x3B88
    ctx->pc = 0x26fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952056));
    // 0x26fff8: 0x46027181  sub.s       $f6, $f14, $f2
    ctx->pc = 0x26fff8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[14], ctx->f[2]);
    // 0x26fffc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x26fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x270000: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x270000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x270004: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x270004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x270008: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x270008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x27000c: 0x34213800  ori         $at, $at, 0x3800
    ctx->pc = 0x27000cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14336);
    // 0x270010: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x270014: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x270014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x270018: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x270018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x27001c: 0x2442c470  addiu       $v0, $v0, -0x3B90
    ctx->pc = 0x27001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952048));
    // 0x270020: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x270020u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x270024: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x270024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x270028: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x270028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27002c: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x27002cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x270030: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x270030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x270034: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x270034u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x270038: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x270038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x27003c: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x27003cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x270040: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x270040u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x270044: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x270044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x270048: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x270048u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27004c: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x27004cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x270050: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x270050u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x270054: 0x460c2001  sub.s       $f0, $f4, $f12
    ctx->pc = 0x270054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x270058: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x270058u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x27005c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x27005cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x270060: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x270060u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x270064: 0x0  nop
    ctx->pc = 0x270064u;
    // NOP
label_270068:
    // 0x270068: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x270068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x27006c: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x27006cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x270070: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x270070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x270074: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x270074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x270078: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x270078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27007c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27007Cu;
    {
        const bool branch_taken_0x27007c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27007c) {
            ctx->pc = 0x27008Cu;
            goto label_27008c;
        }
    }
    ctx->pc = 0x270084u;
    // 0x270084: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x270084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x270088: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x270088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27008c:
    // 0x27008c: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x27008cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x270090: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x270090u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270094: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x270094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x270098: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x270098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x27009c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27009cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2700a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2700a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2700a4: 0x4602a801  sub.s       $f0, $f21, $f2
    ctx->pc = 0x2700a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x2700a8: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2700a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2700ac: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2700acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2700b0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2700b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2700b4: 0x460311c2  mul.s       $f7, $f2, $f3
    ctx->pc = 0x2700b4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2700b8: 0x46010180  add.s       $f6, $f0, $f1
    ctx->pc = 0x2700b8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2700bc: 0x46073340  add.s       $f13, $f6, $f7
    ctx->pc = 0x2700bcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x2700c0: 0x44076800  mfc1        $a3, $f13
    ctx->pc = 0x2700c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2700c4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2700c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700c8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2700c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2700cc: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2700ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2700d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2700D0u;
    {
        const bool branch_taken_0x2700d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2700d0) {
            ctx->pc = 0x2700F0u;
            goto label_2700f0;
        }
    }
    ctx->pc = 0x2700D8u;
    // 0x2700d8: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x2700d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x2700dc: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x2700dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x2700e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2700e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2700e4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2700E4u;
    {
        const bool branch_taken_0x2700e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2700E4u;
        // 0x2700e8: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700e4) {
            ctx->pc = 0x270178u;
            goto label_270178;
        }
    }
    ctx->pc = 0x2700ECu;
    // 0x2700ec: 0x0  nop
    ctx->pc = 0x2700ecu;
    // NOP
label_2700f0:
    // 0x2700f0: 0x14a3000f  bne         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2700F0u;
    {
        const bool branch_taken_0x2700f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2700F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2700F0u;
        // 0x2700f4: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700f0) {
            ctx->pc = 0x270130u;
            goto label_270130;
        }
    }
    ctx->pc = 0x2700F8u;
    // 0x2700f8: 0x3c013338  lui         $at, 0x3338
    ctx->pc = 0x2700f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13112 << 16));
    // 0x2700fc: 0x3421aa3c  ori         $at, $at, 0xAA3C
    ctx->pc = 0x2700fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43580);
    // 0x270100: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270104: 0x46076841  sub.s       $f1, $f13, $f7
    ctx->pc = 0x270104u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[7]);
    // 0x270108: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x270108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x27010c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27010cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270110: 0x0  nop
    ctx->pc = 0x270110u;
    // NOP
    // 0x270114: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x270114u;
    {
        const bool branch_taken_0x270114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270114u;
        // 0x270118: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270114) {
            ctx->pc = 0x270180u;
            goto label_270180;
        }
    }
    ctx->pc = 0x27011Cu;
    // 0x27011c: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x27011cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x270120: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x270120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x270124: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x270124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270128: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x270128u;
    {
        const bool branch_taken_0x270128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270128u;
        // 0x27012c: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270128) {
            ctx->pc = 0x270178u;
            goto label_270178;
        }
    }
    ctx->pc = 0x270130u;
label_270130:
    // 0x270130: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x270130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x270134: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x270134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x270138: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x270138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x27013c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x27013cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x270140: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x270140u;
    {
        const bool branch_taken_0x270140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x270140) {
            ctx->pc = 0x270168u;
            goto label_270168;
        }
    }
    ctx->pc = 0x270148u;
    // 0x270148: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x270148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x27014c: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27014Cu;
    {
        const bool branch_taken_0x27014c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x270150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27014Cu;
        // 0x270150: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27014c) {
            ctx->pc = 0x270180u;
            goto label_270180;
        }
    }
    ctx->pc = 0x270154u;
    // 0x270154: 0x46076801  sub.s       $f0, $f13, $f7
    ctx->pc = 0x270154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[7]);
    // 0x270158: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x270158u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27015c: 0x0  nop
    ctx->pc = 0x27015cu;
    // NOP
    // 0x270160: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x270160u;
    {
        const bool branch_taken_0x270160 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270160u;
        // 0x270164: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270160) {
            ctx->pc = 0x270184u;
            goto label_270184;
        }
    }
    ctx->pc = 0x270168u;
label_270168:
    // 0x270168: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x270168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x27016c: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x27016cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x270170: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x270170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x270174: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x270174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_270178:
    // 0x270178: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x270178u;
    {
        const bool branch_taken_0x270178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270178u;
        // 0x27017c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270178) {
            ctx->pc = 0x27033Cu;
            goto label_27033c;
        }
    }
    ctx->pc = 0x270180u;
label_270180:
    // 0x270180: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x270180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_270184:
    // 0x270184: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x270184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x270188: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x270188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27018c: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x27018cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x270190: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x270190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x270194: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x270194u;
    {
        const bool branch_taken_0x270194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x270198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270194u;
        // 0x270198: 0x225c3  sra         $a0, $v0, 23 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270194) {
            ctx->pc = 0x270200u;
            goto label_270200;
        }
    }
    ctx->pc = 0x27019Cu;
    // 0x27019c: 0x2483ff82  addiu       $v1, $a0, -0x7E
    ctx->pc = 0x27019cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967170));
    // 0x2701a0: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x2701a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x2701a4: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x2701a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x2701a8: 0xa34821  addu        $t1, $a1, $v1
    ctx->pc = 0x2701a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2701ac: 0x1261024  and         $v0, $t1, $a2
    ctx->pc = 0x2701acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x2701b0: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x2701b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x2701b4: 0x2448ff81  addiu       $t0, $v0, -0x7F
    ctx->pc = 0x2701b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x2701b8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x2701b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x2701bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2701bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2701c0: 0x1031007  srav        $v0, $v1, $t0
    ctx->pc = 0x2701c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
    // 0x2701c4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2701c4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2701c8: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x2701c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x2701cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2701ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2701d0: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x2701d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x2701d4: 0x460c39c1  sub.s       $f7, $f7, $f12
    ctx->pc = 0x2701d4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[12]);
    // 0x2701d8: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2701d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2701dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2701dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2701e0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2701e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2701e4: 0x434807  srav        $t1, $v1, $v0
    ctx->pc = 0x2701e4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2701e8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2701e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2701ec: 0x46073100  add.s       $f4, $f6, $f7
    ctx->pc = 0x2701ecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x2701f0: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x2701f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2701f4: 0x91023  negu        $v0, $t1
    ctx->pc = 0x2701f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x2701f8: 0x44480a  movz        $t1, $v0, $a0
    ctx->pc = 0x2701f8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2));
    // 0x2701fc: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x2701fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_270200:
    // 0x270200: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x270200u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270204: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x270204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x270208: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x270208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x27020c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27020cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x270210: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x270210u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x270214: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x270214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x270218: 0x34217200  ori         $at, $at, 0x7200
    ctx->pc = 0x270218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29184);
    // 0x27021c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27021cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x270220: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x270220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x270224: 0x34217218  ori         $at, $at, 0x7218
    ctx->pc = 0x270224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29208);
    // 0x270228: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x270228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x27022c: 0x46076041  sub.s       $f1, $f12, $f7
    ctx->pc = 0x27022cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[7]);
    // 0x270230: 0x3c0135bf  lui         $at, 0x35BF
    ctx->pc = 0x270230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13759 << 16));
    // 0x270234: 0x3421be8c  ori         $at, $at, 0xBE8C
    ctx->pc = 0x270234u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48780);
    // 0x270238: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x270238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27023c: 0x460363c2  mul.s       $f15, $f12, $f3
    ctx->pc = 0x27023cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x270240: 0x3c013331  lui         $at, 0x3331
    ctx->pc = 0x270240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13105 << 16));
    // 0x270244: 0x3421bb4c  ori         $at, $at, 0xBB4C
    ctx->pc = 0x270244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47948);
    // 0x270248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27024c: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x27024cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x270250: 0x3c01b5dd  lui         $at, 0xB5DD
    ctx->pc = 0x270250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46557 << 16));
    // 0x270254: 0x3421ea0e  ori         $at, $at, 0xEA0E
    ctx->pc = 0x270254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59918);
    // 0x270258: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x270258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x27025c: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x27025cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x270260: 0x3c01bb36  lui         $at, 0xBB36
    ctx->pc = 0x270260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47926 << 16));
    // 0x270264: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x270264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x270268: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x270268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x27026c: 0x3c01388a  lui         $at, 0x388A
    ctx->pc = 0x27026cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14474 << 16));
    // 0x270270: 0x3421b355  ori         $at, $at, 0xB355
    ctx->pc = 0x270270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45909);
    // 0x270274: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x270274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x270278: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x270278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x27027c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x27027cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x270280: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x270280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x270284: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x270284u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x270288: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x270288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x27028c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27028cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x270290: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x270290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x270294: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x270294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x270298: 0x46020b80  add.s       $f14, $f1, $f2
    ctx->pc = 0x270298u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x27029c: 0x460e7b40  add.s       $f13, $f15, $f14
    ctx->pc = 0x27029cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x2702a0: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x2702a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2702a4: 0x460f6841  sub.s       $f1, $f13, $f15
    ctx->pc = 0x2702a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[15]);
    // 0x2702a8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2702a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2702ac: 0x46017241  sub.s       $f9, $f14, $f1
    ctx->pc = 0x2702acu;
    ctx->f[9] = FPU_SUB_S(ctx->f[14], ctx->f[1]);
    // 0x2702b0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2702b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2702b4: 0x46096882  mul.s       $f2, $f13, $f9
    ctx->pc = 0x2702b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[9]);
    // 0x2702b8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2702b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2702bc: 0x46024880  add.s       $f2, $f9, $f2
    ctx->pc = 0x2702bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[2]);
    // 0x2702c0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2702c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2702c4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2702c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2702c8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2702c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2702cc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2702ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2702d0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2702d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2702d4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2702d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2702d8: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x2702d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x2702dc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2702dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2702e0: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x2702e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2702e4: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x2702e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2702e8: 0x0  nop
    ctx->pc = 0x2702e8u;
    // NOP
    // 0x2702ec: 0x0  nop
    ctx->pc = 0x2702ecu;
    // NOP
    // 0x2702f0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2702f0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x2702f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2702f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2702f8: 0x460d0041  sub.s       $f1, $f0, $f13
    ctx->pc = 0x2702f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x2702fc: 0x46012341  sub.s       $f13, $f4, $f1
    ctx->pc = 0x2702fcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x270300: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x270300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x270304: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x270304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270308: 0x915c0  sll         $v0, $t1, 23
    ctx->pc = 0x270308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 23));
    // 0x27030c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27030cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x270310: 0x51dc3  sra         $v1, $a1, 23
    ctx->pc = 0x270310u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 23));
    // 0x270314: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x270314u;
    {
        const bool branch_taken_0x270314 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x270318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270314u;
        // 0x270318: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270314) {
            ctx->pc = 0x270330u;
            goto label_270330;
        }
    }
    ctx->pc = 0x27031Cu;
    // 0x27031c: 0xc09cb3e  jal         func_272CF8
    ctx->pc = 0x27031Cu;
    SET_GPR_U32(ctx, 31, 0x270324u);
    ctx->pc = 0x270320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27031Cu;
    // 0x270320: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CF8u, 0x27031Cu, 0x270324u)) {
        return;
    }
    ctx->pc = 0x270324u;
label_270324:
    // 0x270324: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x270324u;
    {
        const bool branch_taken_0x270324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270324u;
        // 0x270328: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270324) {
            ctx->pc = 0x270338u;
            goto label_270338;
        }
    }
    ctx->pc = 0x27032Cu;
    // 0x27032c: 0x0  nop
    ctx->pc = 0x27032cu;
    // NOP
label_270330:
    // 0x270330: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x270330u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x270334: 0x0  nop
    ctx->pc = 0x270334u;
    // NOP
label_270338:
    // 0x270338: 0x460da002  mul.s       $f0, $f20, $f13
    ctx->pc = 0x270338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
label_27033c:
    // 0x27033c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27033cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_270340:
    // 0x270340: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x270340u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270344: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x270344u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270348: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x270348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27034c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27034cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x270350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270354: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x270354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x270358: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x270358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27035c: 0x3e00008  jr          $ra
    ctx->pc = 0x27035Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27035Cu;
        // 0x270360: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27035Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270364u;
    // 0x270364: 0x0  nop
    ctx->pc = 0x270364u;
    // NOP
    ctx->pc = 0x270368u;
}
