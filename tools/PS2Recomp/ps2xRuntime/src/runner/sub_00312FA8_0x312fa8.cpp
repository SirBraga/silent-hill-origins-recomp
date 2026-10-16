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

// Function: sub_00312FA8
// Address: 0x312fa8 - 0x313170
void sub_00312FA8_0x312fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312FA8_0x312fa8");
#endif

    switch (ctx->pc) {
        case 0x3130e8u: goto label_3130e8;
        case 0x313120u: goto label_313120;
        case 0x313150u: goto label_313150;
        default: break;
    }

    ctx->pc = 0x312fa8u;

    // 0x312fa8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x312fa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312fac: 0xa43825  or          $a3, $a1, $a0
    ctx->pc = 0x312facu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x312fb0: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x312fb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x312fb4: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x312fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x312fb8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x312fb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x312fbc: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x312FBCu;
    {
        const bool branch_taken_0x312fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312FBCu;
        // 0x312fc0: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312fbc) {
            ctx->pc = 0x313120u;
            goto label_313120;
        }
    }
    ctx->pc = 0x312FC4u;
    // 0x312fc4: 0x142480a  movz        $t1, $t2, $v0
    ctx->pc = 0x312fc4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10));
    // 0x312fc8: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x312FC8u;
    {
        const bool branch_taken_0x312fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312FC8u;
        // 0x312fcc: 0xc9102b  sltu        $v0, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312fc8) {
            ctx->pc = 0x313084u;
            goto label_313084;
        }
    }
    ctx->pc = 0x312FD0u;
    // 0x312fd0: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x312FD0u;
    {
        const bool branch_taken_0x312fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312fd0) {
            ctx->pc = 0x313120u;
            goto label_313120;
        }
    }
    ctx->pc = 0x312FD8u;
    // 0x312fd8: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x312fd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312fdc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x312fdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x312fe0: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x312fe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x312fe4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x312fe4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x312fe8: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x312fe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x312fec: 0x73a78  dsll        $a3, $a3, 9
    ctx->pc = 0x312fecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 9);
    // 0x312ff0: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x312ff0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x312ff4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x312ff4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312ff8: 0x70e74b89  pcpyld      $t1, $a3, $a3
    ctx->pc = 0x312ff8u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x312ffc: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x312ffcu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x313000: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x313000u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x313004: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x313004u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x313008: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x313008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x31300c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x31300cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x313010: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x313010u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x313014: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x313014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x313018: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x313018u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x31301c: 0x70691248  psubb       $v0, $v1, $t1
    ctx->pc = 0x31301cu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x313020: 0x70e75389  pcpyld      $t2, $a3, $a3
    ctx->pc = 0x313020u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x313024: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x313024u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x313028: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x313028u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x31302c: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x31302cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x313030: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x313030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x313034: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x313034u;
    {
        const bool branch_taken_0x313034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313034u;
        // 0x313038: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313034) {
            ctx->pc = 0x31311Cu;
            goto label_31311c;
        }
    }
    ctx->pc = 0x31303Cu;
    // 0x31303c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x31303cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x313040: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x313040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x313044: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x313044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x313048: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x313048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31304c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x31304cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x313050: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x313050u;
    {
        const bool branch_taken_0x313050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313050u;
        // 0x313054: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313050) {
            ctx->pc = 0x31311Cu;
            goto label_31311c;
        }
    }
    ctx->pc = 0x313058u;
    // 0x313058: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x313058u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31305c: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x31305cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x313060: 0x70491248  psubb       $v0, $v0, $t1
    ctx->pc = 0x313060u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x313064: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x313064u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x313068: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x313068u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x31306c: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x31306cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x313070: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x313070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x313074: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x313074u;
    {
        const bool branch_taken_0x313074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313074) {
            ctx->pc = 0x313078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313074u;
            // 0x313078: 0x78a30000  lq          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3130E8u;
            goto label_3130e8;
        }
    }
    ctx->pc = 0x31307Cu;
    // 0x31307c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x31307Cu;
    {
        const bool branch_taken_0x31307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31307Cu;
        // 0x313080: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31307c) {
            ctx->pc = 0x313120u;
            goto label_313120;
        }
    }
    ctx->pc = 0x313084u;
label_313084:
    // 0x313084: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x313084u;
    {
        const bool branch_taken_0x313084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313084) {
            ctx->pc = 0x313120u;
            goto label_313120;
        }
    }
    ctx->pc = 0x31308Cu;
    // 0x31308c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x31308cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x313090: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x313090u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x313094: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x313094u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x313098: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x313098u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x31309c: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x31309cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3130a0: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3130a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3130a4: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x3130a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x3130a8: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x3130a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x3130ac: 0x340a8080  ori         $t2, $zero, 0x8080
    ctx->pc = 0x3130acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3130b0: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3130b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3130b4: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x3130b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x3130b8: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3130b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3130bc: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x3130bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x3130c0: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3130c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3130c4: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x3130c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x3130c8: 0x69102f  dsubu       $v0, $v1, $t1
    ctx->pc = 0x3130c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x3130cc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x3130ccu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x3130d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3130d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3130d4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x3130d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x3130d8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3130D8u;
    {
        const bool branch_taken_0x3130d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3130DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3130D8u;
        // 0x3130dc: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3130d8) {
            ctx->pc = 0x31311Cu;
            goto label_31311c;
        }
    }
    ctx->pc = 0x3130E0u;
    // 0x3130e0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3130e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3130e4: 0x0  nop
    ctx->pc = 0x3130e4u;
    // NOP
label_3130e8:
    // 0x3130e8: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x3130e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3130ec: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3130ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3130f0: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3130f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3130f4: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x3130f4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x3130f8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3130F8u;
    {
        const bool branch_taken_0x3130f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3130FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3130F8u;
        // 0x3130fc: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3130f8) {
            ctx->pc = 0x31311Cu;
            goto label_31311c;
        }
    }
    ctx->pc = 0x313100u;
    // 0x313100: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x313100u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x313104: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x313104u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x313108: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x313108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x31310c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31310cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x313110: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x313110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x313114: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x313114u;
    {
        const bool branch_taken_0x313114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313114) {
            ctx->pc = 0x313118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313114u;
            // 0x313118: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3130E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3130e8;
        }
    }
    ctx->pc = 0x31311Cu;
label_31311c:
    // 0x31311c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x31311cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_313120:
    // 0x313120: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x313120u;
    {
        const bool branch_taken_0x313120 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x313124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313120u;
        // 0x313124: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313120) {
            ctx->pc = 0x313168u;
            goto label_313168;
        }
    }
    ctx->pc = 0x313128u;
    // 0x313128: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x313128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31312c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x31312cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x313130: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x313130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x313134: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x313134u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x313138: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x313138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x31313c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31313Cu;
    {
        const bool branch_taken_0x31313c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31313Cu;
        // 0x313140: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31313c) {
            ctx->pc = 0x313120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313120;
        }
    }
    ctx->pc = 0x313144u;
    // 0x313144: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x313144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313148: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x313148u;
    {
        const bool branch_taken_0x313148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313148u;
        // 0x31314c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313148) {
            ctx->pc = 0x313168u;
            goto label_313168;
        }
    }
    ctx->pc = 0x313150u;
label_313150:
    // 0x313150: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x313150u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x313154: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x313154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313158: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x313158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31315c: 0x0  nop
    ctx->pc = 0x31315cu;
    // NOP
    // 0x313160: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x313160u;
    {
        const bool branch_taken_0x313160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313160u;
        // 0x313164: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313160) {
            ctx->pc = 0x313150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313150;
        }
    }
    ctx->pc = 0x313168u;
label_313168:
    // 0x313168: 0x3e00008  jr          $ra
    ctx->pc = 0x313168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313168u;
        // 0x31316c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313170u;
}
