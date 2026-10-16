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

// Function: sub_0031287C
// Address: 0x31287c - 0x3129c8
void sub_0031287C_0x31287c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031287C_0x31287c");
#endif

    switch (ctx->pc) {
        case 0x3128fcu: goto label_3128fc;
        case 0x31295cu: goto label_31295c;
        case 0x312994u: goto label_312994;
        default: break;
    }

    ctx->pc = 0x31287cu;

    // 0x31287c: 0x854025  or          $t0, $a0, $a1
    ctx->pc = 0x31287cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x312880: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x312880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x312884: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x312884u;
    {
        const bool branch_taken_0x312884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312884) {
            ctx->pc = 0x312888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312884u;
            // 0x312888: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3129B4u;
            goto label_3129b4;
        }
    }
    ctx->pc = 0x31288Cu;
    // 0x31288c: 0x3109000f  andi        $t1, $t0, 0xF
    ctx->pc = 0x31288cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x312890: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x312890u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312894: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x312894u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x312898: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x312898u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x31289c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x31289cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3128a0: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3128a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3128a4: 0x73a78  dsll        $a3, $a3, 9
    ctx->pc = 0x3128a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 9);
    // 0x3128a8: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x3128a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x3128ac: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x3128acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3128b0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3128b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3128b4: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3128b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3128b8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3128b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3128bc: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3128bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3128c0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3128c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3128c4: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3128c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3128c8: 0x1520001f  bnez        $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3128C8u;
    {
        const bool branch_taken_0x3128c8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3128CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128C8u;
        // 0x3128cc: 0xdca20000  ld          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3128c8) {
            ctx->pc = 0x312948u;
            goto label_312948;
        }
    }
    ctx->pc = 0x3128D0u;
    // 0x3128d0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3128d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3128d4: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x3128d4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x3128d8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3128d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3128dc: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x3128dcu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x3128e0: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x3128e0u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3128e4: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x3128e4u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x3128e8: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x3128e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x3128ec: 0x54600031  bnel        $v1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x3128ECu;
    {
        const bool branch_taken_0x3128ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3128ec) {
            ctx->pc = 0x3128F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3128ECu;
            // 0x3128f0: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3129B4u;
            goto label_3129b4;
        }
    }
    ctx->pc = 0x3128F4u;
    // 0x3128f4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3128f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3128f8: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x3128f8u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_3128fc:
    // 0x3128fc: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x3128fcu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x312900: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x312900u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x312904: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x312904u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x312908: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x312908u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x31290c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x31290cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x312910: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x312910u;
    {
        const bool branch_taken_0x312910 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x312914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312910u;
        // 0x312914: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312910) {
            ctx->pc = 0x312920u;
            goto label_312920;
        }
    }
    ctx->pc = 0x312918u;
    // 0x312918: 0x3e00008  jr          $ra
    ctx->pc = 0x312918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312918u;
        // 0x31291c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312920u;
label_312920:
    // 0x312920: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x312920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x312924: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x312924u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312928: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x312928u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31292c: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x31292cu;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x312930: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x312930u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x312934: 0xc74825  or          $t1, $a2, $a3
    ctx->pc = 0x312934u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x312938: 0x5120fff0  beql        $t1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x312938u;
    {
        const bool branch_taken_0x312938 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x312938) {
            ctx->pc = 0x31293Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312938u;
            // 0x31293c: 0x70021ce9  pnor        $v1, $zero, $v0 (Delay Slot)
            SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3128FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3128fc;
        }
    }
    ctx->pc = 0x312940u;
    // 0x312940: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x312940u;
    {
        const bool branch_taken_0x312940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312940u;
        // 0x312944: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312940) {
            ctx->pc = 0x3129B4u;
            goto label_3129b4;
        }
    }
    ctx->pc = 0x312948u;
label_312948:
    // 0x312948: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x312948u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31294c: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x31294Cu;
    {
        const bool branch_taken_0x31294c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31294c) {
            ctx->pc = 0x312950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31294Cu;
            // 0x312950: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3129B4u;
            goto label_3129b4;
        }
    }
    ctx->pc = 0x312954u;
    // 0x312954: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x312954u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312958: 0x24027  nor         $t0, $zero, $v0
    ctx->pc = 0x312958u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31295c:
    // 0x31295c: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x31295cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x312960: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x312960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x312964: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x312964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x312968: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312968u;
    {
        const bool branch_taken_0x312968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312968u;
        // 0x31296c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312968) {
            ctx->pc = 0x312978u;
            goto label_312978;
        }
    }
    ctx->pc = 0x312970u;
    // 0x312970: 0x3e00008  jr          $ra
    ctx->pc = 0x312970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312970u;
        // 0x312974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312978u;
label_312978:
    // 0x312978: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x312978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x31297c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x31297cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312980: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x312980u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312984: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x312984u;
    {
        const bool branch_taken_0x312984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x312984) {
            ctx->pc = 0x312988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312984u;
            // 0x312988: 0x24027  nor         $t0, $zero, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31295Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31295c;
        }
    }
    ctx->pc = 0x31298Cu;
    // 0x31298c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31298Cu;
    {
        const bool branch_taken_0x31298c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31298Cu;
        // 0x312990: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31298c) {
            ctx->pc = 0x3129B4u;
            goto label_3129b4;
        }
    }
    ctx->pc = 0x312994u;
label_312994:
    // 0x312994: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x312994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x312998: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x312998u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31299c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x31299cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3129a0: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3129A0u;
    {
        const bool branch_taken_0x3129a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3129a0) {
            ctx->pc = 0x3129A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3129A0u;
            // 0x3129a4: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3129BCu;
            goto label_3129bc;
        }
    }
    ctx->pc = 0x3129A8u;
    // 0x3129a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3129a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3129ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3129acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3129b0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3129b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3129b4:
    // 0x3129b4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3129B4u;
    {
        const bool branch_taken_0x3129b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3129B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129B4u;
        // 0x3129b8: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3129b4) {
            ctx->pc = 0x312994u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312994;
        }
    }
    ctx->pc = 0x3129BCu;
label_3129bc:
    // 0x3129bc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3129bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3129c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3129C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3129C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129C0u;
        // 0x3129c4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3129C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3129C8u;
}
