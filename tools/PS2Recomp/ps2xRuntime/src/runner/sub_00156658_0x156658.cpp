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

// Function: sub_00156658
// Address: 0x156658 - 0x156790
void sub_00156658_0x156658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156658_0x156658");
#endif

    switch (ctx->pc) {
        case 0x1566acu: goto label_1566ac;
        case 0x1566e0u: goto label_1566e0;
        case 0x1566f0u: goto label_1566f0;
        case 0x1566f8u: goto label_1566f8;
        default: break;
    }

    ctx->pc = 0x156658u;

    // 0x156658: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x156658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x15665c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x15665cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x156660: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x156660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x156664: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156668: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x156668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x15666c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x15666cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156670: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x156670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x156674: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x156674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156678: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x156678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x15667c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x15667cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156680: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x156680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x156684: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x156684u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x156688: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x156688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x15668c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x15668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x156690: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x156690u;
    {
        const bool branch_taken_0x156690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156690u;
        // 0x156694: 0x8cb20000  lw          $s2, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156690) {
            ctx->pc = 0x1566A8u;
            goto label_1566a8;
        }
    }
    ctx->pc = 0x156698u;
    // 0x156698: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x156698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15669c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15669Cu;
    {
        const bool branch_taken_0x15669c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1566A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15669Cu;
        // 0x1566a0: 0x26110050  addiu       $s1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15669c) {
            ctx->pc = 0x1566D0u;
            goto label_1566d0;
        }
    }
    ctx->pc = 0x1566A4u;
    // 0x1566a4: 0x0  nop
    ctx->pc = 0x1566a4u;
    // NOP
label_1566a8:
    // 0x1566a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1566a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1566ac:
    // 0x1566ac: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x1566acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1566b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1566B0u;
    {
        const bool branch_taken_0x1566b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1566B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566B0u;
        // 0x1566b4: 0x26110050  addiu       $s1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566b0) {
            ctx->pc = 0x1566D0u;
            goto label_1566d0;
        }
    }
    ctx->pc = 0x1566B8u;
    // 0x1566b8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1566b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1566bc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1566bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1566c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1566c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1566c4: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1566C4u;
    {
        const bool branch_taken_0x1566c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1566c4) {
            ctx->pc = 0x1566C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1566C4u;
            // 0x1566c8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1566ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1566ac;
        }
    }
    ctx->pc = 0x1566CCu;
    // 0x1566cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1566ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1566d0:
    // 0x1566d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1566d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1566d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1566d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1566d8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1566D8u;
    SET_GPR_U32(ctx, 31, 0x1566E0u);
    ctx->pc = 0x1566DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1566D8u;
    // 0x1566dc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1566D8u, 0x1566E0u)) {
        return;
    }
    ctx->pc = 0x1566E0u;
label_1566e0:
    // 0x1566e0: 0x26852938  addiu       $a1, $s4, 0x2938
    ctx->pc = 0x1566e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 10552));
    // 0x1566e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1566e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1566e8: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1566E8u;
    SET_GPR_U32(ctx, 31, 0x1566F0u);
    ctx->pc = 0x1566ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1566E8u;
    // 0x1566ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1566E8u, 0x1566F0u)) {
        return;
    }
    ctx->pc = 0x1566F0u;
label_1566f0:
    // 0x1566f0: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1566F0u;
    SET_GPR_U32(ctx, 31, 0x1566F8u);
    ctx->pc = 0x1566F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1566F0u;
    // 0x1566f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1566F0u, 0x1566F8u)) {
        return;
    }
    ctx->pc = 0x1566F8u;
label_1566f8:
    // 0x1566f8: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1566f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1566fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1566fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156700: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x156700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x156704: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x156704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x156708: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x156708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x15670c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x15670cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x156710: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x156710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x156714: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x156714u;
    {
        const bool branch_taken_0x156714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156714u;
        // 0x156718: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156714) {
            ctx->pc = 0x156768u;
            goto label_156768;
        }
    }
    ctx->pc = 0x15671Cu;
    // 0x15671c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x15671cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x156720: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x156720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x156724: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x156724u;
    {
        const bool branch_taken_0x156724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x156728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156724u;
        // 0x156728: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156724) {
            ctx->pc = 0x15673Cu;
            goto label_15673c;
        }
    }
    ctx->pc = 0x15672Cu;
    // 0x15672c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x15672cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x156730: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x156730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156734: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x156734u;
    {
        const bool branch_taken_0x156734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156734u;
        // 0x156738: 0x2021021  addu        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156734) {
            ctx->pc = 0x156760u;
            goto label_156760;
        }
    }
    ctx->pc = 0x15673Cu;
label_15673c:
    // 0x15673c: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x15673cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156740: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x156740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x156744: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x156744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x156748: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x156748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15674c: 0xc6400058  lwc1        $f0, 0x58($s2)
    ctx->pc = 0x15674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156750: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x156750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x156754: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x156754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x156758: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x156758u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x15675c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15675cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_156760:
    // 0x156760: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x156760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x156764: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x156764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_156768:
    // 0x156768: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x156768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15676c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x15676cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x156770: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x156770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x156774: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x156774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x156778: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x156778u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15677c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x15677cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x156780: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x156780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x156784: 0x3e00008  jr          $ra
    ctx->pc = 0x156784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156784u;
        // 0x156788: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15678Cu;
    // 0x15678c: 0x0  nop
    ctx->pc = 0x15678cu;
    // NOP
    ctx->pc = 0x156790u;
}
