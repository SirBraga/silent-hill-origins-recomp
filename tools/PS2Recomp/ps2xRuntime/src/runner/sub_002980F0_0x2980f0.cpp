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

// Function: sub_002980F0
// Address: 0x2980f0 - 0x2989c8
void sub_002980F0_0x2980f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002980F0_0x2980f0");
#endif

    switch (ctx->pc) {
        case 0x298158u: goto label_298158;
        case 0x29817cu: goto label_29817c;
        case 0x2981a0u: goto label_2981a0;
        case 0x2981e0u: goto label_2981e0;
        case 0x298214u: goto label_298214;
        case 0x298224u: goto label_298224;
        case 0x298248u: goto label_298248;
        case 0x29826cu: goto label_29826c;
        case 0x2982a8u: goto label_2982a8;
        case 0x2982f4u: goto label_2982f4;
        case 0x298310u: goto label_298310;
        case 0x298320u: goto label_298320;
        case 0x298390u: goto label_298390;
        case 0x2983b4u: goto label_2983b4;
        case 0x2983f0u: goto label_2983f0;
        case 0x298414u: goto label_298414;
        case 0x298450u: goto label_298450;
        case 0x298474u: goto label_298474;
        case 0x2984b0u: goto label_2984b0;
        case 0x2984d4u: goto label_2984d4;
        case 0x298510u: goto label_298510;
        case 0x298534u: goto label_298534;
        case 0x298570u: goto label_298570;
        case 0x298594u: goto label_298594;
        case 0x2985d0u: goto label_2985d0;
        case 0x2985f4u: goto label_2985f4;
        case 0x298630u: goto label_298630;
        case 0x298654u: goto label_298654;
        case 0x298690u: goto label_298690;
        case 0x2986b4u: goto label_2986b4;
        case 0x2986f0u: goto label_2986f0;
        case 0x298738u: goto label_298738;
        case 0x29875cu: goto label_29875c;
        case 0x298778u: goto label_298778;
        case 0x298798u: goto label_298798;
        case 0x2987e0u: goto label_2987e0;
        case 0x298804u: goto label_298804;
        case 0x298820u: goto label_298820;
        case 0x298838u: goto label_298838;
        case 0x298880u: goto label_298880;
        case 0x2988a4u: goto label_2988a4;
        case 0x2988c0u: goto label_2988c0;
        case 0x2988d8u: goto label_2988d8;
        case 0x298928u: goto label_298928;
        case 0x29894cu: goto label_29894c;
        case 0x298954u: goto label_298954;
        case 0x298978u: goto label_298978;
        case 0x298980u: goto label_298980;
        case 0x298990u: goto label_298990;
        default: break;
    }

    ctx->pc = 0x2980f0u;

label_2980f0:
    // 0x2980f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2980f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2980f4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2980f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2980f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2980f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2980fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2980fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298100: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298104: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x298104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298108: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x298108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x29810c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x29810cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x298110: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x298110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x298114: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x298114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x298118: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x298118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29811c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29811cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x298120: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x298120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x298124: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x298124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x298128: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x298128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x29812c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29812Cu;
    {
        const bool branch_taken_0x29812c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29812Cu;
        // 0x298130: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29812c) {
            ctx->pc = 0x298144u;
            goto label_298144;
        }
    }
    ctx->pc = 0x298134u;
    // 0x298134: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x298134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x298138: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x298138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29813c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29813Cu;
    {
        const bool branch_taken_0x29813c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29813Cu;
        // 0x298140: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29813c) {
            ctx->pc = 0x298180u;
            goto label_298180;
        }
    }
    ctx->pc = 0x298144u;
label_298144:
    // 0x298144: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x298144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x298148: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x298148u;
    {
        const bool branch_taken_0x298148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x298148) {
            ctx->pc = 0x29814Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298148u;
            // 0x29814c: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298160u;
            goto label_298160;
        }
    }
    ctx->pc = 0x298150u;
    // 0x298150: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x298150u;
    SET_GPR_U32(ctx, 31, 0x298158u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x298150u, 0x298158u)) {
        return;
    }
    ctx->pc = 0x298158u;
label_298158:
    // 0x298158: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x298158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29815c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x29815cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_298160:
    // 0x298160: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x298160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x298164: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x298164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x298168: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x298168u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29816c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29816Cu;
    {
        const bool branch_taken_0x29816c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29816Cu;
        // 0x298170: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29816c) {
            ctx->pc = 0x298180u;
            goto label_298180;
        }
    }
    ctx->pc = 0x298174u;
    // 0x298174: 0xc0a65ec  jal         func_2997B0
    ctx->pc = 0x298174u;
    SET_GPR_U32(ctx, 31, 0x29817Cu);
    ctx->pc = 0x298178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298174u;
    // 0x298178: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2997B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2997B0u, 0x298174u, 0x29817Cu)) {
        return;
    }
    ctx->pc = 0x29817Cu;
label_29817c:
    // 0x29817c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29817cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_298180:
    // 0x298180: 0x10800076  beqz        $a0, . + 4 + (0x76 << 2)
    ctx->pc = 0x298180u;
    {
        const bool branch_taken_0x298180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298180u;
        // 0x298184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298180) {
            ctx->pc = 0x29835Cu;
            goto label_29835c;
        }
    }
    ctx->pc = 0x298188u;
    // 0x298188: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x298188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29818c: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x29818cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x298190: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x298190u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298194: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x298194u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298198: 0xc0a5e70  jal         func_2979C0
    ctx->pc = 0x298198u;
    SET_GPR_U32(ctx, 31, 0x2981A0u);
    ctx->pc = 0x29819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298198u;
    // 0x29819c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2979C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2979C0u, 0x298198u, 0x2981A0u)) {
        return;
    }
    ctx->pc = 0x2981A0u;
label_2981a0:
    // 0x2981a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2981a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2981a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2981a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2981a8: 0x10a20067  beq         $a1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2981A8u;
    {
        const bool branch_taken_0x2981a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2981ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981A8u;
        // 0x2981ac: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981a8) {
            ctx->pc = 0x298348u;
            goto label_298348;
        }
    }
    ctx->pc = 0x2981B0u;
    // 0x2981b0: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2981B0u;
    {
        const bool branch_taken_0x2981b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2981B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981B0u;
        // 0x2981b4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981b0) {
            ctx->pc = 0x2981C0u;
            goto label_2981c0;
        }
    }
    ctx->pc = 0x2981B8u;
    // 0x2981b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2981B8u;
    {
        const bool branch_taken_0x2981b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2981BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981B8u;
        // 0x2981bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981b8) {
            ctx->pc = 0x2981D8u;
            goto label_2981d8;
        }
    }
    ctx->pc = 0x2981C0u;
label_2981c0:
    // 0x2981c0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2981c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2981c4: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2981C4u;
    {
        const bool branch_taken_0x2981c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2981c4) {
            ctx->pc = 0x2981C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2981C4u;
            // 0x2981c8: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2981E4u;
            goto label_2981e4;
        }
    }
    ctx->pc = 0x2981CCu;
    // 0x2981cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2981ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2981d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2981d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2981d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2981d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2981d8:
    // 0x2981d8: 0xc0a5e70  jal         func_2979C0
    ctx->pc = 0x2981D8u;
    SET_GPR_U32(ctx, 31, 0x2981E0u);
    ctx->pc = 0x2981DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2981D8u;
    // 0x2981dc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2979C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2979C0u, 0x2981D8u, 0x2981E0u)) {
        return;
    }
    ctx->pc = 0x2981E0u;
label_2981e0:
    // 0x2981e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2981e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2981e4:
    // 0x2981e4: 0x50b00059  beql        $a1, $s0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2981E4u;
    {
        const bool branch_taken_0x2981e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x2981e4) {
            ctx->pc = 0x2981E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2981E4u;
            // 0x2981e8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29834Cu;
            goto label_29834c;
        }
    }
    ctx->pc = 0x2981ECu;
    // 0x2981ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2981ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2981f0: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x2981f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2981f4: 0x30630070  andi        $v1, $v1, 0x70
    ctx->pc = 0x2981f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)112);
    // 0x2981f8: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2981F8u;
    {
        const bool branch_taken_0x2981f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2981FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981F8u;
        // 0x2981fc: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981f8) {
            ctx->pc = 0x298274u;
            goto label_298274;
        }
    }
    ctx->pc = 0x298200u;
    // 0x298200: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x298200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x298204: 0x54a20022  bnel        $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x298204u;
    {
        const bool branch_taken_0x298204 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x298204) {
            ctx->pc = 0x298208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298204u;
            // 0x298208: 0xfe800000  sd          $zero, 0x0($s4) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298290u;
            goto label_298290;
        }
    }
    ctx->pc = 0x29820Cu;
    // 0x29820c: 0xc0a7bbe  jal         func_29EEF8
    ctx->pc = 0x29820Cu;
    SET_GPR_U32(ctx, 31, 0x298214u);
    ctx->pc = 0x298210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29820Cu;
    // 0x298210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEF8u, 0x29820Cu, 0x298214u)) {
        return;
    }
    ctx->pc = 0x298214u;
label_298214:
    // 0x298214: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x298214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298218: 0x14b00004  bne         $a1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298218u;
    {
        const bool branch_taken_0x298218 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x29821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298218u;
        // 0x29821c: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298218) {
            ctx->pc = 0x29822Cu;
            goto label_29822c;
        }
    }
    ctx->pc = 0x298220u;
    // 0x298220: 0xfe800000  sd          $zero, 0x0($s4)
    ctx->pc = 0x298220u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
label_298224:
    // 0x298224: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x298224u;
    {
        const bool branch_taken_0x298224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298224u;
        // 0x298228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298224) {
            ctx->pc = 0x29835Cu;
            goto label_29835c;
        }
    }
    ctx->pc = 0x29822Cu;
label_29822c:
    // 0x29822c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29822Cu;
    {
        const bool branch_taken_0x29822c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x298230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29822Cu;
        // 0x298230: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29822c) {
            ctx->pc = 0x29823Cu;
            goto label_29823c;
        }
    }
    ctx->pc = 0x298234u;
    // 0x298234: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x298234u;
    {
        const bool branch_taken_0x298234 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x298238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298234u;
        // 0x298238: 0x52e00  sll         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298234) {
            ctx->pc = 0x29825Cu;
            goto label_29825c;
        }
    }
    ctx->pc = 0x29823Cu;
label_29823c:
    // 0x29823c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29823cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298240: 0xc0a7bbe  jal         func_29EEF8
    ctx->pc = 0x298240u;
    SET_GPR_U32(ctx, 31, 0x298248u);
    ctx->pc = 0x298244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298240u;
    // 0x298244: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEF8u, 0x298240u, 0x298248u)) {
        return;
    }
    ctx->pc = 0x298248u;
label_298248:
    // 0x298248: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x298248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29824c: 0x50b0003f  beql        $a1, $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x29824Cu;
    {
        const bool branch_taken_0x29824c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x29824c) {
            ctx->pc = 0x298250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29824Cu;
            // 0x298250: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29834Cu;
            goto label_29834c;
        }
    }
    ctx->pc = 0x298254u;
    // 0x298254: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x298254u;
    {
        const bool branch_taken_0x298254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298254u;
        // 0x298258: 0xfe800000  sd          $zero, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298254) {
            ctx->pc = 0x298290u;
            goto label_298290;
        }
    }
    ctx->pc = 0x29825Cu;
label_29825c:
    // 0x29825c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29825cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298260: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x298260u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x298264: 0xc0a6e1e  jal         func_29B878
    ctx->pc = 0x298264u;
    SET_GPR_U32(ctx, 31, 0x29826Cu);
    ctx->pc = 0x298268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298264u;
    // 0x298268: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B878u, 0x298264u, 0x29826Cu)) {
        return;
    }
    ctx->pc = 0x29826Cu;
label_29826c:
    // 0x29826c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29826Cu;
    {
        const bool branch_taken_0x29826c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29826Cu;
        // 0x298270: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29826c) {
            ctx->pc = 0x29828Cu;
            goto label_29828c;
        }
    }
    ctx->pc = 0x298274u;
label_298274:
    // 0x298274: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298274u;
    {
        const bool branch_taken_0x298274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x298278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298274u;
        // 0x298278: 0x38630020  xori        $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298274) {
            ctx->pc = 0x298284u;
            goto label_298284;
        }
    }
    ctx->pc = 0x29827Cu;
    // 0x29827c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29827Cu;
    {
        const bool branch_taken_0x29827c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29827Cu;
        // 0x298280: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29827c) {
            ctx->pc = 0x29828Cu;
            goto label_29828c;
        }
    }
    ctx->pc = 0x298284u;
label_298284:
    // 0x298284: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x298284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x298288: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x298288u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2));
label_29828c:
    // 0x29828c: 0xfe800000  sd          $zero, 0x0($s4)
    ctx->pc = 0x29828cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
label_298290:
    // 0x298290: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x298290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x298294: 0x10a2ffe3  beq         $a1, $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x298294u;
    {
        const bool branch_taken_0x298294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x298298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298294u;
        // 0x298298: 0x241e0005  addiu       $fp, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298294) {
            ctx->pc = 0x298224u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298224;
        }
    }
    ctx->pc = 0x29829Cu;
    // 0x29829c: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x29829cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982a0: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x2982a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2982a4: 0x24a3ffd0  addiu       $v1, $a1, -0x30
    ctx->pc = 0x2982a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_2982a8:
    // 0x2982a8: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x2982a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2982ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2982ACu;
    {
        const bool branch_taken_0x2982ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2982B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982ACu;
        // 0x2982b0: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982ac) {
            ctx->pc = 0x2982D8u;
            goto label_2982d8;
        }
    }
    ctx->pc = 0x2982B4u;
    // 0x2982b4: 0x24a2ffbf  addiu       $v0, $a1, -0x41
    ctx->pc = 0x2982b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967231));
    // 0x2982b8: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2982b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2982bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2982BCu;
    {
        const bool branch_taken_0x2982bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2982C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982BCu;
        // 0x2982c0: 0x24b0ffc9  addiu       $s0, $a1, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982bc) {
            ctx->pc = 0x2982D8u;
            goto label_2982d8;
        }
    }
    ctx->pc = 0x2982C4u;
    // 0x2982c4: 0x24a3ff9f  addiu       $v1, $a1, -0x61
    ctx->pc = 0x2982c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967199));
    // 0x2982c8: 0x241003e7  addiu       $s0, $zero, 0x3E7
    ctx->pc = 0x2982c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x2982cc: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x2982ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2982d0: 0x24a2ffa9  addiu       $v0, $a1, -0x57
    ctx->pc = 0x2982d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967209));
    // 0x2982d4: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x2982d4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
label_2982d8:
    // 0x2982d8: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x2982d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2982dc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2982DCu;
    {
        const bool branch_taken_0x2982dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2982dc) {
            ctx->pc = 0x2982E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2982DCu;
            // 0x2982e0: 0xde850000  ld          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298304u;
            goto label_298304;
        }
    }
    ctx->pc = 0x2982E4u;
    // 0x2982e4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2982e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2982e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2982e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982ec: 0xc0a6e1e  jal         func_29B878
    ctx->pc = 0x2982ECu;
    SET_GPR_U32(ctx, 31, 0x2982F4u);
    ctx->pc = 0x2982F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2982ECu;
    // 0x2982f0: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B878u, 0x2982ECu, 0x2982F4u)) {
        return;
    }
    ctx->pc = 0x2982F4u;
label_2982f4:
    // 0x2982f4: 0x12c0000f  beqz        $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x2982F4u;
    {
        const bool branch_taken_0x2982f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2982F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982F4u;
        // 0x2982f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982f4) {
            ctx->pc = 0x298334u;
            goto label_298334;
        }
    }
    ctx->pc = 0x2982FCu;
    // 0x2982fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2982FCu;
    {
        const bool branch_taken_0x2982fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982FCu;
        // 0x298300: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982fc) {
            ctx->pc = 0x298360u;
            goto label_298360;
        }
    }
    ctx->pc = 0x298304u;
label_298304:
    // 0x298304: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x298304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298308: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x298308u;
    SET_GPR_U32(ctx, 31, 0x298310u);
    ctx->pc = 0x29830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298308u;
    // 0x29830c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x298308u, 0x298310u)) {
        return;
    }
    ctx->pc = 0x298310u;
label_298310:
    // 0x298310: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x298310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x298314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x298314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298318: 0xc0a7bbe  jal         func_29EEF8
    ctx->pc = 0x298318u;
    SET_GPR_U32(ctx, 31, 0x298320u);
    ctx->pc = 0x29831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298318u;
    // 0x29831c: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEF8u, 0x298318u, 0x298320u)) {
        return;
    }
    ctx->pc = 0x298320u;
label_298320:
    // 0x298320: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x298320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298324: 0x14b7ffe0  bne         $a1, $s7, . + 4 + (-0x20 << 2)
    ctx->pc = 0x298324u;
    {
        const bool branch_taken_0x298324 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 23));
        ctx->pc = 0x298328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298324u;
        // 0x298328: 0x24a3ffd0  addiu       $v1, $a1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298324) {
            ctx->pc = 0x2982A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2982a8;
        }
    }
    ctx->pc = 0x29832Cu;
    // 0x29832c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29832Cu;
    {
        const bool branch_taken_0x29832c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29832Cu;
        // 0x298330: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29832c) {
            ctx->pc = 0x29835Cu;
            goto label_29835c;
        }
    }
    ctx->pc = 0x298334u;
label_298334:
    // 0x298334: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x298334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x298338: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x298338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29833c: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x29833cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x298340: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x298340u;
    {
        const bool branch_taken_0x298340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298340u;
        // 0x298344: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298340) {
            ctx->pc = 0x298358u;
            goto label_298358;
        }
    }
    ctx->pc = 0x298348u;
label_298348:
    // 0x298348: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x298348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29834c:
    // 0x29834c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29834cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298350: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x298350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x298354: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x298354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_298358:
    // 0x298358: 0xa083001a  sb          $v1, 0x1A($a0)
    ctx->pc = 0x298358u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
label_29835c:
    // 0x29835c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x29835cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_298360:
    // 0x298360: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x298360u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298364: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x298364u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298368: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x298368u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29836c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x29836cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298370: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x298370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298374: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x298374u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298378: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x298378u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29837c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29837cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298384: 0x3e00008  jr          $ra
    ctx->pc = 0x298384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298384u;
        // 0x298388: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29838Cu;
    // 0x29838c: 0x0  nop
    ctx->pc = 0x29838cu;
    // NOP
label_298390:
    // 0x298390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x298390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x298394: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x298394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x298398: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x298398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x29839c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29839cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2983a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2983a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2983a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2983a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2983ac: 0xc0a603c  jal         func_2980F0
    ctx->pc = 0x2983ACu;
    SET_GPR_U32(ctx, 31, 0x2983B4u);
    ctx->pc = 0x2983B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2983ACu;
    // 0x2983b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2980F0u;
    goto label_2980f0;
    ctx->pc = 0x2983B4u;
label_2983b4:
    // 0x2983b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2983B4u;
    {
        const bool branch_taken_0x2983b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2983B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983B4u;
        // 0x2983b8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2983b4) {
            ctx->pc = 0x2983D4u;
            goto label_2983d4;
        }
    }
    ctx->pc = 0x2983BCu;
    // 0x2983bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2983BCu;
    {
        const bool branch_taken_0x2983bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2983C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983BCu;
        // 0x2983c0: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2983bc) {
            ctx->pc = 0x2983CCu;
            goto label_2983cc;
        }
    }
    ctx->pc = 0x2983C4u;
    // 0x2983c4: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x2983c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x2983c8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2983c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2983cc:
    // 0x2983cc: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2983ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2983d0: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x2983d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_2983d4:
    // 0x2983d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2983d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2983d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2983dc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2983dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2983e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2983e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2983e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2983E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2983E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983E4u;
        // 0x2983e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2983E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2983ECu;
    // 0x2983ec: 0x0  nop
    ctx->pc = 0x2983ecu;
    // NOP
label_2983f0:
    // 0x2983f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2983f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2983f4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2983f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2983f8: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x2983f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2983fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2983fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x298400: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x298400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298408: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x298408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29840c: 0xc0a603c  jal         func_2980F0
    ctx->pc = 0x29840Cu;
    SET_GPR_U32(ctx, 31, 0x298414u);
    ctx->pc = 0x298410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29840Cu;
    // 0x298410: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2980F0u;
    goto label_2980f0;
    ctx->pc = 0x298414u;
label_298414:
    // 0x298414: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x298414u;
    {
        const bool branch_taken_0x298414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298414u;
        // 0x298418: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298414) {
            ctx->pc = 0x298434u;
            goto label_298434;
        }
    }
    ctx->pc = 0x29841Cu;
    // 0x29841c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29841Cu;
    {
        const bool branch_taken_0x29841c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29841Cu;
        // 0x298420: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29841c) {
            ctx->pc = 0x29842Cu;
            goto label_29842c;
        }
    }
    ctx->pc = 0x298424u;
    // 0x298424: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x298424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x298428: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x298428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_29842c:
    // 0x29842c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x29842cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298430: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x298430u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_298434:
    // 0x298434: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x298434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298438: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x298438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29843c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29843cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298440: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x298440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298444: 0x3e00008  jr          $ra
    ctx->pc = 0x298444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298444u;
        // 0x298448: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29844Cu;
    // 0x29844c: 0x0  nop
    ctx->pc = 0x29844cu;
    // NOP
label_298450:
    // 0x298450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x298450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x298454: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x298454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x298458: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x298458u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x29845c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29845cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x298460: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x298460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298464: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298468: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x298468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29846c: 0xc0a603c  jal         func_2980F0
    ctx->pc = 0x29846Cu;
    SET_GPR_U32(ctx, 31, 0x298474u);
    ctx->pc = 0x298470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29846Cu;
    // 0x298470: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2980F0u;
    goto label_2980f0;
    ctx->pc = 0x298474u;
label_298474:
    // 0x298474: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x298474u;
    {
        const bool branch_taken_0x298474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298474u;
        // 0x298478: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298474) {
            ctx->pc = 0x298494u;
            goto label_298494;
        }
    }
    ctx->pc = 0x29847Cu;
    // 0x29847c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29847Cu;
    {
        const bool branch_taken_0x29847c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29847Cu;
        // 0x298480: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29847c) {
            ctx->pc = 0x29848Cu;
            goto label_29848c;
        }
    }
    ctx->pc = 0x298484u;
    // 0x298484: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x298484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x298488: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x298488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_29848c:
    // 0x29848c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29848cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298490: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x298490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_298494:
    // 0x298494: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x298494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298498: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x298498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29849c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29849cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2984a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2984a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2984a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2984A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2984A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984A4u;
        // 0x2984a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2984A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2984ACu;
    // 0x2984ac: 0x0  nop
    ctx->pc = 0x2984acu;
    // NOP
label_2984b0:
    // 0x2984b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2984b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2984b4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2984b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2984b8: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x2984b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2984bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2984bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2984c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2984c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2984c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2984c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2984cc: 0xc0a603c  jal         func_2980F0
    ctx->pc = 0x2984CCu;
    SET_GPR_U32(ctx, 31, 0x2984D4u);
    ctx->pc = 0x2984D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2984CCu;
    // 0x2984d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2980F0u;
    goto label_2980f0;
    ctx->pc = 0x2984D4u;
label_2984d4:
    // 0x2984d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2984D4u;
    {
        const bool branch_taken_0x2984d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2984D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984D4u;
        // 0x2984d8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984d4) {
            ctx->pc = 0x2984F4u;
            goto label_2984f4;
        }
    }
    ctx->pc = 0x2984DCu;
    // 0x2984dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2984DCu;
    {
        const bool branch_taken_0x2984dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2984E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984DCu;
        // 0x2984e0: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984dc) {
            ctx->pc = 0x2984ECu;
            goto label_2984ec;
        }
    }
    ctx->pc = 0x2984E4u;
    // 0x2984e4: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x2984e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x2984e8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2984e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2984ec:
    // 0x2984ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2984ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2984f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2984f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2984f4:
    // 0x2984f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2984f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2984f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2984fc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2984fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298500: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x298500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298504: 0x3e00008  jr          $ra
    ctx->pc = 0x298504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298504u;
        // 0x298508: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29850Cu;
    // 0x29850c: 0x0  nop
    ctx->pc = 0x29850cu;
    // NOP
label_298510:
    // 0x298510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x298510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x298514: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x298514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x298518: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x298518u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x29851c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x298520: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x298520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298528: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x298528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29852c: 0xc0a603c  jal         func_2980F0
    ctx->pc = 0x29852Cu;
    SET_GPR_U32(ctx, 31, 0x298534u);
    ctx->pc = 0x298530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29852Cu;
    // 0x298530: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2980F0u;
    goto label_2980f0;
    ctx->pc = 0x298534u;
label_298534:
    // 0x298534: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x298534u;
    {
        const bool branch_taken_0x298534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298534u;
        // 0x298538: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298534) {
            ctx->pc = 0x298554u;
            goto label_298554;
        }
    }
    ctx->pc = 0x29853Cu;
    // 0x29853c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29853Cu;
    {
        const bool branch_taken_0x29853c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29853Cu;
        // 0x298540: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29853c) {
            ctx->pc = 0x29854Cu;
            goto label_29854c;
        }
    }
    ctx->pc = 0x298544u;
    // 0x298544: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x298544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x298548: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x298548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_29854c:
    // 0x29854c: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x29854cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298550: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x298550u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_298554:
    // 0x298554: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x298554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298558: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x298558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29855c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29855cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298560: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x298560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298564: 0x3e00008  jr          $ra
    ctx->pc = 0x298564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298564u;
        // 0x298568: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29856Cu;
    // 0x29856c: 0x0  nop
    ctx->pc = 0x29856cu;
    // NOP
label_298570:
    // 0x298570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x298570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x298574: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x298574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x298578: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x298578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x29857c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29857cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x298580: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x298580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298588: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x298588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29858c: 0xc0a603c  jal         func_2980F0
    ctx->pc = 0x29858Cu;
    SET_GPR_U32(ctx, 31, 0x298594u);
    ctx->pc = 0x298590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29858Cu;
    // 0x298590: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2980F0u;
    goto label_2980f0;
    ctx->pc = 0x298594u;
label_298594:
    // 0x298594: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x298594u;
    {
        const bool branch_taken_0x298594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298594u;
        // 0x298598: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298594) {
            ctx->pc = 0x2985B4u;
            goto label_2985b4;
        }
    }
    ctx->pc = 0x29859Cu;
    // 0x29859c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29859Cu;
    {
        const bool branch_taken_0x29859c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2985A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29859Cu;
        // 0x2985a0: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29859c) {
            ctx->pc = 0x2985ACu;
            goto label_2985ac;
        }
    }
    ctx->pc = 0x2985A4u;
    // 0x2985a4: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x2985a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x2985a8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2985a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2985ac:
    // 0x2985ac: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x2985acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2985b0: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x2985b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_2985b4:
    // 0x2985b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2985b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2985b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2985bc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2985bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2985c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2985c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2985c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2985C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2985C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2985C4u;
        // 0x2985c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2985C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2985CCu;
    // 0x2985cc: 0x0  nop
    ctx->pc = 0x2985ccu;
    // NOP
label_2985d0:
    // 0x2985d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2985d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2985d4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2985d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2985d8: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x2985d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2985dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2985dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2985e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2985e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2985e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2985e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2985ec: 0xc0a603c  jal         func_2980F0
    ctx->pc = 0x2985ECu;
    SET_GPR_U32(ctx, 31, 0x2985F4u);
    ctx->pc = 0x2985F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985ECu;
    // 0x2985f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2980F0u;
    goto label_2980f0;
    ctx->pc = 0x2985F4u;
label_2985f4:
    // 0x2985f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2985F4u;
    {
        const bool branch_taken_0x2985f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2985F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2985F4u;
        // 0x2985f8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2985f4) {
            ctx->pc = 0x298614u;
            goto label_298614;
        }
    }
    ctx->pc = 0x2985FCu;
    // 0x2985fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2985FCu;
    {
        const bool branch_taken_0x2985fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2985FCu;
        // 0x298600: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2985fc) {
            ctx->pc = 0x29860Cu;
            goto label_29860c;
        }
    }
    ctx->pc = 0x298604u;
    // 0x298604: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x298604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x298608: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x298608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_29860c:
    // 0x29860c: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x29860cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298610: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x298610u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_298614:
    // 0x298614: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x298614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298618: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x298618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29861c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29861cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298620: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x298620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298624: 0x3e00008  jr          $ra
    ctx->pc = 0x298624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298624u;
        // 0x298628: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29862Cu;
    // 0x29862c: 0x0  nop
    ctx->pc = 0x29862cu;
    // NOP
label_298630:
    // 0x298630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x298630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x298634: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x298634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x298638: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x298638u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x29863c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29863cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x298640: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x298640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298648: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x298648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29864c: 0xc0a603c  jal         func_2980F0
    ctx->pc = 0x29864Cu;
    SET_GPR_U32(ctx, 31, 0x298654u);
    ctx->pc = 0x298650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29864Cu;
    // 0x298650: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2980F0u;
    goto label_2980f0;
    ctx->pc = 0x298654u;
label_298654:
    // 0x298654: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x298654u;
    {
        const bool branch_taken_0x298654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298654u;
        // 0x298658: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298654) {
            ctx->pc = 0x298674u;
            goto label_298674;
        }
    }
    ctx->pc = 0x29865Cu;
    // 0x29865c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29865Cu;
    {
        const bool branch_taken_0x29865c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29865Cu;
        // 0x298660: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29865c) {
            ctx->pc = 0x29866Cu;
            goto label_29866c;
        }
    }
    ctx->pc = 0x298664u;
    // 0x298664: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x298664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x298668: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x298668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_29866c:
    // 0x29866c: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x29866cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298670: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x298670u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_298674:
    // 0x298674: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x298674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298678: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x298678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29867c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29867cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298680: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x298680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298684: 0x3e00008  jr          $ra
    ctx->pc = 0x298684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298684u;
        // 0x298688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29868Cu;
    // 0x29868c: 0x0  nop
    ctx->pc = 0x29868cu;
    // NOP
label_298690:
    // 0x298690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x298690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x298694: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x298694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x298698: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x298698u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x29869c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29869cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2986a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2986a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2986a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2986a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2986ac: 0xc0a603c  jal         func_2980F0
    ctx->pc = 0x2986ACu;
    SET_GPR_U32(ctx, 31, 0x2986B4u);
    ctx->pc = 0x2986B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2986ACu;
    // 0x2986b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2980F0u;
    goto label_2980f0;
    ctx->pc = 0x2986B4u;
label_2986b4:
    // 0x2986b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2986B4u;
    {
        const bool branch_taken_0x2986b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2986B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986B4u;
        // 0x2986b8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986b4) {
            ctx->pc = 0x2986D8u;
            goto label_2986d8;
        }
    }
    ctx->pc = 0x2986BCu;
    // 0x2986bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2986BCu;
    {
        const bool branch_taken_0x2986bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2986C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986BCu;
        // 0x2986c0: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986bc) {
            ctx->pc = 0x2986CCu;
            goto label_2986cc;
        }
    }
    ctx->pc = 0x2986C4u;
    // 0x2986c4: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x2986c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x2986c8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2986c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2986cc:
    // 0x2986cc: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x2986ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2986d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2986d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2986d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2986d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2986d8:
    // 0x2986d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2986d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2986dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2986e0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2986e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2986e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2986e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2986e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2986E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2986ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986E8u;
        // 0x2986ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2986E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2986F0u;
label_2986f0:
    // 0x2986f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2986f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2986f4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2986f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2986f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2986f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2986fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2986fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x298700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298704: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x298704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298708: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x298708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x29870c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29870Cu;
    {
        const bool branch_taken_0x29870c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29870Cu;
        // 0x298710: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29870c) {
            ctx->pc = 0x298724u;
            goto label_298724;
        }
    }
    ctx->pc = 0x298714u;
    // 0x298714: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x298714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x298718: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x298718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29871c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29871Cu;
    {
        const bool branch_taken_0x29871c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29871Cu;
        // 0x298720: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29871c) {
            ctx->pc = 0x298760u;
            goto label_298760;
        }
    }
    ctx->pc = 0x298724u;
label_298724:
    // 0x298724: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x298724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x298728: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x298728u;
    {
        const bool branch_taken_0x298728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x298728) {
            ctx->pc = 0x29872Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298728u;
            // 0x29872c: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298740u;
            goto label_298740;
        }
    }
    ctx->pc = 0x298730u;
    // 0x298730: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x298730u;
    SET_GPR_U32(ctx, 31, 0x298738u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x298730u, 0x298738u)) {
        return;
    }
    ctx->pc = 0x298738u;
label_298738:
    // 0x298738: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x298738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29873c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x29873cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_298740:
    // 0x298740: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x298740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x298744: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x298744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x298748: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x298748u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29874c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29874Cu;
    {
        const bool branch_taken_0x29874c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29874Cu;
        // 0x298750: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29874c) {
            ctx->pc = 0x298760u;
            goto label_298760;
        }
    }
    ctx->pc = 0x298754u;
    // 0x298754: 0xc0a65ec  jal         func_2997B0
    ctx->pc = 0x298754u;
    SET_GPR_U32(ctx, 31, 0x29875Cu);
    ctx->pc = 0x298758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298754u;
    // 0x298758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2997B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2997B0u, 0x298754u, 0x29875Cu)) {
        return;
    }
    ctx->pc = 0x29875Cu;
label_29875c:
    // 0x29875c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29875cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_298760:
    // 0x298760: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x298760u;
    {
        const bool branch_taken_0x298760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298760u;
        // 0x298764: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298760) {
            ctx->pc = 0x298780u;
            goto label_298780;
        }
    }
    ctx->pc = 0x298768u;
    // 0x298768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29876c: 0x24a5d7e8  addiu       $a1, $a1, -0x2818
    ctx->pc = 0x29876cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957032));
    // 0x298770: 0xc0a6c78  jal         func_29B1E0
    ctx->pc = 0x298770u;
    SET_GPR_U32(ctx, 31, 0x298778u);
    ctx->pc = 0x298774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298770u;
    // 0x298774: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B1E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B1E0u, 0x298770u, 0x298778u)) {
        return;
    }
    ctx->pc = 0x298778u;
label_298778:
    // 0x298778: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x298778u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29877c: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x29877cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
label_298780:
    // 0x298780: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x298780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298784: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x298784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298788: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x298788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29878c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29878cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298790: 0x3e00008  jr          $ra
    ctx->pc = 0x298790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298790u;
        // 0x298794: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298798u;
label_298798:
    // 0x298798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29879c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29879cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2987a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2987a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2987a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2987a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2987a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2987a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2987acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2987b0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x2987b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x2987b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2987B4u;
    {
        const bool branch_taken_0x2987b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2987B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987B4u;
        // 0x2987b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987b4) {
            ctx->pc = 0x2987CCu;
            goto label_2987cc;
        }
    }
    ctx->pc = 0x2987BCu;
    // 0x2987bc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2987bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2987c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2987c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2987C4u;
    {
        const bool branch_taken_0x2987c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2987C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987C4u;
        // 0x2987c8: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987c4) {
            ctx->pc = 0x298808u;
            goto label_298808;
        }
    }
    ctx->pc = 0x2987CCu;
label_2987cc:
    // 0x2987cc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2987ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2987d0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2987D0u;
    {
        const bool branch_taken_0x2987d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2987d0) {
            ctx->pc = 0x2987D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2987D0u;
            // 0x2987d4: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2987E8u;
            goto label_2987e8;
        }
    }
    ctx->pc = 0x2987D8u;
    // 0x2987d8: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x2987D8u;
    SET_GPR_U32(ctx, 31, 0x2987E0u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x2987D8u, 0x2987E0u)) {
        return;
    }
    ctx->pc = 0x2987E0u;
label_2987e0:
    // 0x2987e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2987e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2987e4: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x2987e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_2987e8:
    // 0x2987e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2987e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2987ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2987ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2987f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2987f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2987f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2987F4u;
    {
        const bool branch_taken_0x2987f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2987F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987F4u;
        // 0x2987f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987f4) {
            ctx->pc = 0x298808u;
            goto label_298808;
        }
    }
    ctx->pc = 0x2987FCu;
    // 0x2987fc: 0xc0a65ec  jal         func_2997B0
    ctx->pc = 0x2987FCu;
    SET_GPR_U32(ctx, 31, 0x298804u);
    ctx->pc = 0x298800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987FCu;
    // 0x298800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2997B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2997B0u, 0x2987FCu, 0x298804u)) {
        return;
    }
    ctx->pc = 0x298804u;
label_298804:
    // 0x298804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x298804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_298808:
    // 0x298808: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298808u;
    {
        const bool branch_taken_0x298808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298808u;
        // 0x29880c: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298808) {
            ctx->pc = 0x298820u;
            goto label_298820;
        }
    }
    ctx->pc = 0x298810u;
    // 0x298810: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x298810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298814: 0x24a5d7e8  addiu       $a1, $a1, -0x2818
    ctx->pc = 0x298814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957032));
    // 0x298818: 0xc0a6c78  jal         func_29B1E0
    ctx->pc = 0x298818u;
    SET_GPR_U32(ctx, 31, 0x298820u);
    ctx->pc = 0x29881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298818u;
    // 0x29881c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B1E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B1E0u, 0x298818u, 0x298820u)) {
        return;
    }
    ctx->pc = 0x298820u;
label_298820:
    // 0x298820: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x298820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x298824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298828: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x298828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29882c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29882cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298830: 0x3e00008  jr          $ra
    ctx->pc = 0x298830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298830u;
        // 0x298834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298838u;
label_298838:
    // 0x298838: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29883c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29883cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x298840: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x298844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x298848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29884c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29884cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298850: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x298850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x298854: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298854u;
    {
        const bool branch_taken_0x298854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298854u;
        // 0x298858: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298854) {
            ctx->pc = 0x29886Cu;
            goto label_29886c;
        }
    }
    ctx->pc = 0x29885Cu;
    // 0x29885c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x29885cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x298860: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x298860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298864: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x298864u;
    {
        const bool branch_taken_0x298864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298864u;
        // 0x298868: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298864) {
            ctx->pc = 0x2988A8u;
            goto label_2988a8;
        }
    }
    ctx->pc = 0x29886Cu;
label_29886c:
    // 0x29886c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x29886cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x298870: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x298870u;
    {
        const bool branch_taken_0x298870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x298870) {
            ctx->pc = 0x298874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298870u;
            // 0x298874: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298888u;
            goto label_298888;
        }
    }
    ctx->pc = 0x298878u;
    // 0x298878: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x298878u;
    SET_GPR_U32(ctx, 31, 0x298880u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x298878u, 0x298880u)) {
        return;
    }
    ctx->pc = 0x298880u;
label_298880:
    // 0x298880: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x298880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298884: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x298884u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_298888:
    // 0x298888: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x298888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29888c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29888cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x298890: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x298890u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x298894: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298894u;
    {
        const bool branch_taken_0x298894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298894u;
        // 0x298898: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298894) {
            ctx->pc = 0x2988A8u;
            goto label_2988a8;
        }
    }
    ctx->pc = 0x29889Cu;
    // 0x29889c: 0xc0a65ec  jal         func_2997B0
    ctx->pc = 0x29889Cu;
    SET_GPR_U32(ctx, 31, 0x2988A4u);
    ctx->pc = 0x2988A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29889Cu;
    // 0x2988a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2997B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2997B0u, 0x29889Cu, 0x2988A4u)) {
        return;
    }
    ctx->pc = 0x2988A4u;
label_2988a4:
    // 0x2988a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2988a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2988a8:
    // 0x2988a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2988A8u;
    {
        const bool branch_taken_0x2988a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2988ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988A8u;
        // 0x2988ac: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988a8) {
            ctx->pc = 0x2988C0u;
            goto label_2988c0;
        }
    }
    ctx->pc = 0x2988B0u;
    // 0x2988b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2988b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2988b4: 0x24a5d7f0  addiu       $a1, $a1, -0x2810
    ctx->pc = 0x2988b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957040));
    // 0x2988b8: 0xc0a6c78  jal         func_29B1E0
    ctx->pc = 0x2988B8u;
    SET_GPR_U32(ctx, 31, 0x2988C0u);
    ctx->pc = 0x2988BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2988B8u;
    // 0x2988bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B1E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B1E0u, 0x2988B8u, 0x2988C0u)) {
        return;
    }
    ctx->pc = 0x2988C0u;
label_2988c0:
    // 0x2988c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2988c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2988c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2988c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2988c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2988c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2988cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2988ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2988d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2988D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2988D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988D0u;
        // 0x2988d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2988D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2988D8u;
label_2988d8:
    // 0x2988d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2988d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2988dc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2988dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2988e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2988e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2988e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2988e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2988e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2988e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2988ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2988ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2988f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2988f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2988f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2988f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2988f8: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x2988f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x2988fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2988FCu;
    {
        const bool branch_taken_0x2988fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988FCu;
        // 0x298900: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988fc) {
            ctx->pc = 0x298914u;
            goto label_298914;
        }
    }
    ctx->pc = 0x298904u;
    // 0x298904: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x298904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x298908: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x298908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29890c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x29890Cu;
    {
        const bool branch_taken_0x29890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29890Cu;
        // 0x298910: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29890c) {
            ctx->pc = 0x298960u;
            goto label_298960;
        }
    }
    ctx->pc = 0x298914u;
label_298914:
    // 0x298914: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x298914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x298918: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x298918u;
    {
        const bool branch_taken_0x298918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x298918) {
            ctx->pc = 0x29891Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298918u;
            // 0x29891c: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298930u;
            goto label_298930;
        }
    }
    ctx->pc = 0x298920u;
    // 0x298920: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x298920u;
    SET_GPR_U32(ctx, 31, 0x298928u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x298920u, 0x298928u)) {
        return;
    }
    ctx->pc = 0x298928u;
label_298928:
    // 0x298928: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x298928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29892c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x29892cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_298930:
    // 0x298930: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x298930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x298934: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x298934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x298938: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x298938u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29893c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29893Cu;
    {
        const bool branch_taken_0x29893c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29893Cu;
        // 0x298940: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29893c) {
            ctx->pc = 0x298960u;
            goto label_298960;
        }
    }
    ctx->pc = 0x298944u;
    // 0x298944: 0xc0a65ec  jal         func_2997B0
    ctx->pc = 0x298944u;
    SET_GPR_U32(ctx, 31, 0x29894Cu);
    ctx->pc = 0x298948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298944u;
    // 0x298948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2997B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2997B0u, 0x298944u, 0x29894Cu)) {
        return;
    }
    ctx->pc = 0x29894Cu;
label_29894c:
    // 0x29894c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29894Cu;
    {
        const bool branch_taken_0x29894c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29894Cu;
        // 0x298950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29894c) {
            ctx->pc = 0x298960u;
            goto label_298960;
        }
    }
    ctx->pc = 0x298954u;
label_298954:
    // 0x298954: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x298954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x298958: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x298958u;
    {
        const bool branch_taken_0x298958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298958u;
        // 0x29895c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298958) {
            ctx->pc = 0x2989A4u;
            goto label_2989a4;
        }
    }
    ctx->pc = 0x298960u;
label_298960:
    // 0x298960: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x298960u;
    {
        const bool branch_taken_0x298960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298960u;
        // 0x298964: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298960) {
            ctx->pc = 0x2989A8u;
            goto label_2989a8;
        }
    }
    ctx->pc = 0x298968u;
    // 0x298968: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x298968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29896c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29896Cu;
    {
        const bool branch_taken_0x29896c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29896Cu;
        // 0x298970: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29896c) {
            ctx->pc = 0x298988u;
            goto label_298988;
        }
    }
    ctx->pc = 0x298974u;
    // 0x298974: 0x0  nop
    ctx->pc = 0x298974u;
    // NOP
label_298978:
    // 0x298978: 0xc0a7bd0  jal         func_29EF40
    ctx->pc = 0x298978u;
    SET_GPR_U32(ctx, 31, 0x298980u);
    ctx->pc = 0x29897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298978u;
    // 0x29897c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EF40u, 0x298978u, 0x298980u)) {
        return;
    }
    ctx->pc = 0x298980u;
label_298980:
    // 0x298980: 0x5051fff4  beql        $v0, $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x298980u;
    {
        const bool branch_taken_0x298980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x298980) {
            ctx->pc = 0x298984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298980u;
            // 0x298984: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298954;
        }
    }
    ctx->pc = 0x298988u;
label_298988:
    // 0x298988: 0xc0a7bbe  jal         func_29EEF8
    ctx->pc = 0x298988u;
    SET_GPR_U32(ctx, 31, 0x298990u);
    ctx->pc = 0x29898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298988u;
    // 0x29898c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEF8u, 0x298988u, 0x298990u)) {
        return;
    }
    ctx->pc = 0x298990u;
label_298990:
    // 0x298990: 0x5451fff9  bnel        $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x298990u;
    {
        const bool branch_taken_0x298990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x298990) {
            ctx->pc = 0x298994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298990u;
            // 0x298994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298978;
        }
    }
    ctx->pc = 0x298998u;
    // 0x298998: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x298998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29899c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x29899cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x2989a0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2989a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2989a4:
    // 0x2989a4: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x2989a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_2989a8:
    // 0x2989a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2989a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2989acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2989b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2989b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2989b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2989b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2989b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2989b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2989bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2989bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2989c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2989C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2989C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989C0u;
        // 0x2989c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2989C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2989C8u;
}
