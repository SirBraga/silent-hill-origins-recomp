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

// Function: sub_003125AC
// Address: 0x3125ac - 0x3126dc
void sub_003125AC_0x3125ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003125AC_0x3125ac");
#endif

    switch (ctx->pc) {
        case 0x312638u: goto label_312638;
        case 0x312688u: goto label_312688;
        case 0x3126a8u: goto label_3126a8;
        case 0x3126c8u: goto label_3126c8;
        default: break;
    }

    ctx->pc = 0x3125acu;

    // 0x3125ac: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3125acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3125b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3125b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3125b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3125b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3125b8: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x3125b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x3125bc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3125BCu;
    {
        const bool branch_taken_0x3125bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3125C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125BCu;
        // 0x3125c0: 0x7fbf0010  sq          $ra, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3125bc) {
            ctx->pc = 0x3126A8u;
            goto label_3126a8;
        }
    }
    ctx->pc = 0x3125C4u;
    // 0x3125c4: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x3125c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x3125c8: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x3125c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3125cc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3125ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3125d0: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x3125d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x3125d4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3125d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3125d8: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x3125d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x3125dc: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x3125dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x3125e0: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x3125e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x3125e4: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x3125e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3125e8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3125e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3125ec: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3125ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3125f0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3125f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3125f4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3125f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3125f8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3125f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3125fc: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3125fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x312600: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x312600u;
    {
        const bool branch_taken_0x312600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312600u;
        // 0x312604: 0xde060000  ld          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312600) {
            ctx->pc = 0x312664u;
            goto label_312664;
        }
    }
    ctx->pc = 0x312608u;
    // 0x312608: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x312608u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31260c: 0x70633b89  pcpyld      $a3, $v1, $v1
    ctx->pc = 0x31260cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x312610: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x312610u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x312614: 0x70471a48  psubb       $v1, $v0, $a3
    ctx->pc = 0x312614u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x312618: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x312618u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x31261c: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x31261cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x312620: 0x70681c89  pand        $v1, $v1, $t0
    ctx->pc = 0x312620u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x312624: 0x706313a9  pcpyud      $v0, $v1, $v1
    ctx->pc = 0x312624u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x312628: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x312628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31262c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x31262Cu;
    {
        const bool branch_taken_0x31262c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31262Cu;
        // 0x312630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31262c) {
            ctx->pc = 0x3126A8u;
            goto label_3126a8;
        }
    }
    ctx->pc = 0x312634u;
    // 0x312634: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x312634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_312638:
    // 0x312638: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x312638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31263c: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x31263cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x312640: 0x70471248  psubb       $v0, $v0, $a3
    ctx->pc = 0x312640u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x312644: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x312644u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x312648: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x312648u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x31264c: 0x70421ba9  pcpyud      $v1, $v0, $v0
    ctx->pc = 0x31264cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x312650: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x312650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x312654: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x312654u;
    {
        const bool branch_taken_0x312654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312654) {
            ctx->pc = 0x312658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312654u;
            // 0x312658: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312638;
        }
    }
    ctx->pc = 0x31265Cu;
    // 0x31265c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x31265Cu;
    {
        const bool branch_taken_0x31265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31265Cu;
        // 0x312660: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31265c) {
            ctx->pc = 0x3126A8u;
            goto label_3126a8;
        }
    }
    ctx->pc = 0x312664u;
label_312664:
    // 0x312664: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x312664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312668: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x312668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31266c: 0xc3182f  dsubu       $v1, $a2, $v1
    ctx->pc = 0x31266cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
    // 0x312670: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x312670u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x312674: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x312674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x312678: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x312678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x31267c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31267Cu;
    {
        const bool branch_taken_0x31267c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31267Cu;
        // 0x312680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31267c) {
            ctx->pc = 0x3126A8u;
            goto label_3126a8;
        }
    }
    ctx->pc = 0x312684u;
    // 0x312684: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x312684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_312688:
    // 0x312688: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x312688u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31268c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x31268cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x312690: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x312690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x312694: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x312694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x312698: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x312698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x31269c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31269Cu;
    {
        const bool branch_taken_0x31269c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31269c) {
            ctx->pc = 0x3126A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31269Cu;
            // 0x3126a0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312688;
        }
    }
    ctx->pc = 0x3126A4u;
    // 0x3126a4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3126a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3126a8:
    // 0x3126a8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3126a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3126ac: 0x0  nop
    ctx->pc = 0x3126acu;
    // NOP
    // 0x3126b0: 0x0  nop
    ctx->pc = 0x3126b0u;
    // NOP
    // 0x3126b4: 0x0  nop
    ctx->pc = 0x3126b4u;
    // NOP
    // 0x3126b8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3126B8u;
    {
        const bool branch_taken_0x3126b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3126b8) {
            ctx->pc = 0x3126BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3126B8u;
            // 0x3126bc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3126A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3126a8;
        }
    }
    ctx->pc = 0x3126C0u;
    // 0x3126c0: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x3126C0u;
    SET_GPR_U32(ctx, 31, 0x3126C8u);
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x3126C0u, 0x3126C8u)) {
        return;
    }
    ctx->pc = 0x3126C8u;
label_3126c8:
    // 0x3126c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3126c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3126cc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3126ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3126d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3126d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3126d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3126D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3126D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126D4u;
        // 0x3126d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3126D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3126DCu;
}
