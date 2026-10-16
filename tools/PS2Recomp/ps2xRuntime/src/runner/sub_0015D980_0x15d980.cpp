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

// Function: sub_0015D980
// Address: 0x15d980 - 0x15dc60
void sub_0015D980_0x15d980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D980_0x15d980");
#endif

    switch (ctx->pc) {
        case 0x15d980u: goto label_15d980;
        case 0x15d984u: goto label_15d984;
        case 0x15d988u: goto label_15d988;
        case 0x15d98cu: goto label_15d98c;
        case 0x15d990u: goto label_15d990;
        case 0x15d994u: goto label_15d994;
        case 0x15d998u: goto label_15d998;
        case 0x15d99cu: goto label_15d99c;
        case 0x15d9a0u: goto label_15d9a0;
        case 0x15d9a4u: goto label_15d9a4;
        case 0x15d9a8u: goto label_15d9a8;
        case 0x15d9acu: goto label_15d9ac;
        case 0x15d9b0u: goto label_15d9b0;
        case 0x15d9b4u: goto label_15d9b4;
        case 0x15d9b8u: goto label_15d9b8;
        case 0x15d9bcu: goto label_15d9bc;
        case 0x15d9c0u: goto label_15d9c0;
        case 0x15d9c4u: goto label_15d9c4;
        case 0x15d9c8u: goto label_15d9c8;
        case 0x15d9ccu: goto label_15d9cc;
        case 0x15d9d0u: goto label_15d9d0;
        case 0x15d9d4u: goto label_15d9d4;
        case 0x15d9d8u: goto label_15d9d8;
        case 0x15d9dcu: goto label_15d9dc;
        case 0x15d9e0u: goto label_15d9e0;
        case 0x15d9e4u: goto label_15d9e4;
        case 0x15d9e8u: goto label_15d9e8;
        case 0x15d9ecu: goto label_15d9ec;
        case 0x15d9f0u: goto label_15d9f0;
        case 0x15d9f4u: goto label_15d9f4;
        case 0x15d9f8u: goto label_15d9f8;
        case 0x15d9fcu: goto label_15d9fc;
        case 0x15da00u: goto label_15da00;
        case 0x15da04u: goto label_15da04;
        case 0x15da08u: goto label_15da08;
        case 0x15da0cu: goto label_15da0c;
        case 0x15da10u: goto label_15da10;
        case 0x15da14u: goto label_15da14;
        case 0x15da18u: goto label_15da18;
        case 0x15da1cu: goto label_15da1c;
        case 0x15da20u: goto label_15da20;
        case 0x15da24u: goto label_15da24;
        case 0x15da28u: goto label_15da28;
        case 0x15da2cu: goto label_15da2c;
        case 0x15da30u: goto label_15da30;
        case 0x15da34u: goto label_15da34;
        case 0x15da38u: goto label_15da38;
        case 0x15da3cu: goto label_15da3c;
        case 0x15da40u: goto label_15da40;
        case 0x15da44u: goto label_15da44;
        case 0x15da48u: goto label_15da48;
        case 0x15da4cu: goto label_15da4c;
        case 0x15da50u: goto label_15da50;
        case 0x15da54u: goto label_15da54;
        case 0x15da58u: goto label_15da58;
        case 0x15da5cu: goto label_15da5c;
        case 0x15da60u: goto label_15da60;
        case 0x15da64u: goto label_15da64;
        case 0x15da68u: goto label_15da68;
        case 0x15da6cu: goto label_15da6c;
        case 0x15da70u: goto label_15da70;
        case 0x15da74u: goto label_15da74;
        case 0x15da78u: goto label_15da78;
        case 0x15da7cu: goto label_15da7c;
        case 0x15da80u: goto label_15da80;
        case 0x15da84u: goto label_15da84;
        case 0x15da88u: goto label_15da88;
        case 0x15da8cu: goto label_15da8c;
        case 0x15da90u: goto label_15da90;
        case 0x15da94u: goto label_15da94;
        case 0x15da98u: goto label_15da98;
        case 0x15da9cu: goto label_15da9c;
        case 0x15daa0u: goto label_15daa0;
        case 0x15daa4u: goto label_15daa4;
        case 0x15daa8u: goto label_15daa8;
        case 0x15daacu: goto label_15daac;
        case 0x15dab0u: goto label_15dab0;
        case 0x15dab4u: goto label_15dab4;
        case 0x15dab8u: goto label_15dab8;
        case 0x15dabcu: goto label_15dabc;
        case 0x15dac0u: goto label_15dac0;
        case 0x15dac4u: goto label_15dac4;
        case 0x15dac8u: goto label_15dac8;
        case 0x15daccu: goto label_15dacc;
        case 0x15dad0u: goto label_15dad0;
        case 0x15dad4u: goto label_15dad4;
        case 0x15dad8u: goto label_15dad8;
        case 0x15dadcu: goto label_15dadc;
        case 0x15dae0u: goto label_15dae0;
        case 0x15dae4u: goto label_15dae4;
        case 0x15dae8u: goto label_15dae8;
        case 0x15daecu: goto label_15daec;
        case 0x15daf0u: goto label_15daf0;
        case 0x15daf4u: goto label_15daf4;
        case 0x15daf8u: goto label_15daf8;
        case 0x15dafcu: goto label_15dafc;
        case 0x15db00u: goto label_15db00;
        case 0x15db04u: goto label_15db04;
        case 0x15db08u: goto label_15db08;
        case 0x15db0cu: goto label_15db0c;
        case 0x15db10u: goto label_15db10;
        case 0x15db14u: goto label_15db14;
        case 0x15db18u: goto label_15db18;
        case 0x15db1cu: goto label_15db1c;
        case 0x15db20u: goto label_15db20;
        case 0x15db24u: goto label_15db24;
        case 0x15db28u: goto label_15db28;
        case 0x15db2cu: goto label_15db2c;
        case 0x15db30u: goto label_15db30;
        case 0x15db34u: goto label_15db34;
        case 0x15db38u: goto label_15db38;
        case 0x15db3cu: goto label_15db3c;
        case 0x15db40u: goto label_15db40;
        case 0x15db44u: goto label_15db44;
        case 0x15db48u: goto label_15db48;
        case 0x15db4cu: goto label_15db4c;
        case 0x15db50u: goto label_15db50;
        case 0x15db54u: goto label_15db54;
        case 0x15db58u: goto label_15db58;
        case 0x15db5cu: goto label_15db5c;
        case 0x15db60u: goto label_15db60;
        case 0x15db64u: goto label_15db64;
        case 0x15db68u: goto label_15db68;
        case 0x15db6cu: goto label_15db6c;
        case 0x15db70u: goto label_15db70;
        case 0x15db74u: goto label_15db74;
        case 0x15db78u: goto label_15db78;
        case 0x15db7cu: goto label_15db7c;
        case 0x15db80u: goto label_15db80;
        case 0x15db84u: goto label_15db84;
        case 0x15db88u: goto label_15db88;
        case 0x15db8cu: goto label_15db8c;
        case 0x15db90u: goto label_15db90;
        case 0x15db94u: goto label_15db94;
        case 0x15db98u: goto label_15db98;
        case 0x15db9cu: goto label_15db9c;
        case 0x15dba0u: goto label_15dba0;
        case 0x15dba4u: goto label_15dba4;
        case 0x15dba8u: goto label_15dba8;
        case 0x15dbacu: goto label_15dbac;
        case 0x15dbb0u: goto label_15dbb0;
        case 0x15dbb4u: goto label_15dbb4;
        case 0x15dbb8u: goto label_15dbb8;
        case 0x15dbbcu: goto label_15dbbc;
        case 0x15dbc0u: goto label_15dbc0;
        case 0x15dbc4u: goto label_15dbc4;
        case 0x15dbc8u: goto label_15dbc8;
        case 0x15dbccu: goto label_15dbcc;
        case 0x15dbd0u: goto label_15dbd0;
        case 0x15dbd4u: goto label_15dbd4;
        case 0x15dbd8u: goto label_15dbd8;
        case 0x15dbdcu: goto label_15dbdc;
        case 0x15dbe0u: goto label_15dbe0;
        case 0x15dbe4u: goto label_15dbe4;
        case 0x15dbe8u: goto label_15dbe8;
        case 0x15dbecu: goto label_15dbec;
        case 0x15dbf0u: goto label_15dbf0;
        case 0x15dbf4u: goto label_15dbf4;
        case 0x15dbf8u: goto label_15dbf8;
        case 0x15dbfcu: goto label_15dbfc;
        case 0x15dc00u: goto label_15dc00;
        case 0x15dc04u: goto label_15dc04;
        case 0x15dc08u: goto label_15dc08;
        case 0x15dc0cu: goto label_15dc0c;
        case 0x15dc10u: goto label_15dc10;
        case 0x15dc14u: goto label_15dc14;
        case 0x15dc18u: goto label_15dc18;
        case 0x15dc1cu: goto label_15dc1c;
        case 0x15dc20u: goto label_15dc20;
        case 0x15dc24u: goto label_15dc24;
        case 0x15dc28u: goto label_15dc28;
        case 0x15dc2cu: goto label_15dc2c;
        case 0x15dc30u: goto label_15dc30;
        case 0x15dc34u: goto label_15dc34;
        case 0x15dc38u: goto label_15dc38;
        case 0x15dc3cu: goto label_15dc3c;
        case 0x15dc40u: goto label_15dc40;
        case 0x15dc44u: goto label_15dc44;
        case 0x15dc48u: goto label_15dc48;
        case 0x15dc4cu: goto label_15dc4c;
        case 0x15dc50u: goto label_15dc50;
        case 0x15dc54u: goto label_15dc54;
        case 0x15dc58u: goto label_15dc58;
        case 0x15dc5cu: goto label_15dc5c;
        default: break;
    }

    ctx->pc = 0x15d980u;

label_15d980:
    // 0x15d980: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x15d980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_15d984:
    // 0x15d984: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x15d984u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_15d988:
    // 0x15d988: 0x8c4545e0  lw          $a1, 0x45E0($v0)
    ctx->pc = 0x15d988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17888)));
label_15d98c:
    // 0x15d98c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x15d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_15d990:
    // 0x15d990: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x15d990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_15d994:
    // 0x15d994: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x15d994u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_15d998:
    // 0x15d998: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15d998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15d99c:
    // 0x15d99c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x15d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_15d9a0:
    // 0x15d9a0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x15d9a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_15d9a4:
    // 0x15d9a4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x15d9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_15d9a8:
    // 0x15d9a8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x15d9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_15d9ac:
    // 0x15d9ac: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x15d9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_15d9b0:
    // 0x15d9b0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x15d9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_15d9b4:
    // 0x15d9b4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x15d9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_15d9b8:
    // 0x15d9b8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x15d9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_15d9bc:
    // 0x15d9bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15d9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15d9c0:
    // 0x15d9c0: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x15d9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_15d9c4:
    // 0x15d9c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_15d9c8:
    // 0x15d9c8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x15d9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_15d9cc:
    // 0x15d9cc: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
label_15d9d0:
    if (ctx->pc == 0x15D9D0u) {
        ctx->pc = 0x15D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9CCu;
        // 0x15d9d0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D9D4u;
        goto label_15d9d4;
    }
    ctx->pc = 0x15D9CCu;
    {
        const bool branch_taken_0x15d9cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9CCu;
        // 0x15d9d0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9cc) {
            ctx->pc = 0x15D9E8u;
            goto label_15d9e8;
        }
    }
    ctx->pc = 0x15D9D4u;
label_15d9d4:
    // 0x15d9d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15d9d8:
    // 0x15d9d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15d9dc:
    if (ctx->pc == 0x15D9DCu) {
        ctx->pc = 0x15D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9D8u;
        // 0x15d9dc: 0x8fb50004  lw          $s5, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D9E0u;
        goto label_15d9e0;
    }
    ctx->pc = 0x15D9D8u;
    {
        const bool branch_taken_0x15d9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9D8u;
        // 0x15d9dc: 0x8fb50004  lw          $s5, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9d8) {
            ctx->pc = 0x15D9ECu;
            goto label_15d9ec;
        }
    }
    ctx->pc = 0x15D9E0u;
label_15d9e0:
    // 0x15d9e0: 0xc07fd18  jal         func_1FF460
label_15d9e4:
    if (ctx->pc == 0x15D9E4u) {
        ctx->pc = 0x15D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9E0u;
        // 0x15d9e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D9E8u;
        goto label_15d9e8;
    }
    ctx->pc = 0x15D9E0u;
    SET_GPR_U32(ctx, 31, 0x15D9E8u);
    ctx->pc = 0x15D9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D9E0u;
    // 0x15d9e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x15D9E0u, 0x15D9E8u)) {
        return;
    }
    ctx->pc = 0x15D9E8u;
label_15d9e8:
    // 0x15d9e8: 0x8fb50004  lw          $s5, 0x4($sp)
    ctx->pc = 0x15d9e8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_15d9ec:
    // 0x15d9ec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_15d9f0:
    // 0x15d9f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15d9f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d9f4:
    // 0x15d9f4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x15d9f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d9f8:
    // 0x15d9f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15d9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15d9fc:
    // 0x15d9fc: 0xc04f0c2  jal         func_13C308
label_15da00:
    if (ctx->pc == 0x15DA00u) {
        ctx->pc = 0x15DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9FCu;
        // 0x15da00: 0x241e0004  addiu       $fp, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA04u;
        goto label_15da04;
    }
    ctx->pc = 0x15D9FCu;
    SET_GPR_U32(ctx, 31, 0x15DA04u);
    ctx->pc = 0x15DA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D9FCu;
    // 0x15da00: 0x241e0004  addiu       $fp, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x15D9FCu, 0x15DA04u)) {
        return;
    }
    ctx->pc = 0x15DA04u;
label_15da04:
    // 0x15da04: 0x26710060  addiu       $s1, $s3, 0x60
    ctx->pc = 0x15da04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_15da08:
    // 0x15da08: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x15da08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15da0c:
    // 0x15da0c: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x15da0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15da10:
    // 0x15da10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15da10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_15da14:
    // 0x15da14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15da14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15da18:
    // 0x15da18: 0x0  nop
    ctx->pc = 0x15da18u;
    // NOP
label_15da1c:
    // 0x15da1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15da1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_15da20:
    // 0x15da20: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x15da20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_15da24:
    // 0x15da24: 0x0  nop
    ctx->pc = 0x15da24u;
    // NOP
label_15da28:
    // 0x15da28: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x15da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_15da2c:
    // 0x15da2c: 0x5040007c  beql        $v0, $zero, . + 4 + (0x7C << 2)
label_15da30:
    if (ctx->pc == 0x15DA30u) {
        ctx->pc = 0x15DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA2Cu;
        // 0x15da30: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA34u;
        goto label_15da34;
    }
    ctx->pc = 0x15DA2Cu;
    {
        const bool branch_taken_0x15da2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15da2c) {
            ctx->pc = 0x15DA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DA2Cu;
            // 0x15da30: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DC20u;
            goto label_15dc20;
        }
    }
    ctx->pc = 0x15DA34u;
label_15da34:
    // 0x15da34: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x15da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_15da38:
    // 0x15da38: 0x1457000f  bne         $v0, $s7, . + 4 + (0xF << 2)
label_15da3c:
    if (ctx->pc == 0x15DA3Cu) {
        ctx->pc = 0x15DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA38u;
        // 0x15da3c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA40u;
        goto label_15da40;
    }
    ctx->pc = 0x15DA38u;
    {
        const bool branch_taken_0x15da38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x15DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA38u;
        // 0x15da3c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da38) {
            ctx->pc = 0x15DA78u;
            goto label_15da78;
        }
    }
    ctx->pc = 0x15DA40u;
label_15da40:
    // 0x15da40: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x15da40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_15da44:
    // 0x15da44: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x15da44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15da48:
    // 0x15da48: 0xc440863c  lwc1        $f0, -0x79C4($v0)
    ctx->pc = 0x15da48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294936124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15da4c:
    // 0x15da4c: 0xc6220040  lwc1        $f2, 0x40($s1)
    ctx->pc = 0x15da4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15da50:
    // 0x15da50: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x15da50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_15da54:
    // 0x15da54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15da54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_15da58:
    // 0x15da58: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x15da58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15da5c:
    // 0x15da5c: 0x0  nop
    ctx->pc = 0x15da5cu;
    // NOP
label_15da60:
    // 0x15da60: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_15da64:
    if (ctx->pc == 0x15DA64u) {
        ctx->pc = 0x15DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA60u;
        // 0x15da64: 0xe6210034  swc1        $f1, 0x34($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA68u;
        goto label_15da68;
    }
    ctx->pc = 0x15DA60u;
    {
        const bool branch_taken_0x15da60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA60u;
        // 0x15da64: 0xe6210034  swc1        $f1, 0x34($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da60) {
            ctx->pc = 0x15DA78u;
            goto label_15da78;
        }
    }
    ctx->pc = 0x15DA68u;
label_15da68:
    // 0x15da68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15da68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15da6c:
    // 0x15da6c: 0xe6220034  swc1        $f2, 0x34($s1)
    ctx->pc = 0x15da6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_15da70:
    // 0x15da70: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x15da70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_15da74:
    // 0x15da74: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x15da74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_15da78:
    // 0x15da78: 0x2841818  mult        $v1, $s4, $a0
    ctx->pc = 0x15da78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15da7c:
    // 0x15da7c: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x15da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15da80:
    // 0x15da80: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x15da80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_15da84:
    // 0x15da84: 0x1477004a  bne         $v1, $s7, . + 4 + (0x4A << 2)
label_15da88:
    if (ctx->pc == 0x15DA88u) {
        ctx->pc = 0x15DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA84u;
        // 0x15da88: 0x24120060  addiu       $s2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA8Cu;
        goto label_15da8c;
    }
    ctx->pc = 0x15DA84u;
    {
        const bool branch_taken_0x15da84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x15DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA84u;
        // 0x15da88: 0x24120060  addiu       $s2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da84) {
            ctx->pc = 0x15DBB0u;
            goto label_15dbb0;
        }
    }
    ctx->pc = 0x15DA8Cu;
label_15da8c:
    // 0x15da8c: 0x68440097  ldl         $a0, 0x97($v0)
    ctx->pc = 0x15da8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_15da90:
    // 0x15da90: 0x6c440090  ldr         $a0, 0x90($v0)
    ctx->pc = 0x15da90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_15da94:
    // 0x15da94: 0x8c450098  lw          $a1, 0x98($v0)
    ctx->pc = 0x15da94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_15da98:
    // 0x15da98: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x15da98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15da9c:
    // 0x15da9c: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x15da9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15daa0:
    // 0x15daa0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x15daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_15daa4:
    // 0x15daa4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x15daa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15daa8:
    // 0x15daa8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15daa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15daac:
    // 0x15daac: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x15daacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15dab0:
    // 0x15dab0: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x15dab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_15dab4:
    // 0x15dab4: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x15dab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_15dab8:
    // 0x15dab8: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x15dab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_15dabc:
    // 0x15dabc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x15dabcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_15dac0:
    // 0x15dac0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x15dac0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_15dac4:
    // 0x15dac4: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x15dac4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_15dac8:
    // 0x15dac8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x15dac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_15dacc:
    // 0x15dacc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x15daccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_15dad0:
    // 0x15dad0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x15dad0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_15dad4:
    // 0x15dad4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x15dad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_15dad8:
    // 0x15dad8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x15dad8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_15dadc:
    // 0x15dadc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x15dadcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_15dae0:
    // 0x15dae0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15dae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_15dae4:
    // 0x15dae4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x15dae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_15dae8:
    // 0x15dae8: 0x0  nop
    ctx->pc = 0x15dae8u;
    // NOP
label_15daec:
    // 0x15daec: 0x0  nop
    ctx->pc = 0x15daecu;
    // NOP
label_15daf0:
    // 0x15daf0: 0x46000004  c1          0x4
    ctx->pc = 0x15daf0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_15daf4:
    // 0x15daf4: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x15daf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_15daf8:
    // 0x15daf8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15daf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_15dafc:
    // 0x15dafc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15dafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15db00:
    // 0x15db00: 0x0  nop
    ctx->pc = 0x15db00u;
    // NOP
label_15db04:
    // 0x15db04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15db04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15db08:
    // 0x15db08: 0x0  nop
    ctx->pc = 0x15db08u;
    // NOP
label_15db0c:
    // 0x15db0c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_15db10:
    if (ctx->pc == 0x15DB10u) {
        ctx->pc = 0x15DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB0Cu;
        // 0x15db10: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DB14u;
        goto label_15db14;
    }
    ctx->pc = 0x15DB0Cu;
    {
        const bool branch_taken_0x15db0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB0Cu;
        // 0x15db10: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db0c) {
            ctx->pc = 0x15DBB0u;
            goto label_15dbb0;
        }
    }
    ctx->pc = 0x15DB14u;
label_15db14:
    // 0x15db14: 0x6a240037  ldl         $a0, 0x37($s1)
    ctx->pc = 0x15db14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_15db18:
    // 0x15db18: 0x6e240030  ldr         $a0, 0x30($s1)
    ctx->pc = 0x15db18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_15db1c:
    // 0x15db1c: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x15db1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_15db20:
    // 0x15db20: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x15db20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15db24:
    // 0x15db24: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x15db24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15db28:
    // 0x15db28: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x15db28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
label_15db2c:
    // 0x15db2c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x15db2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15db30:
    // 0x15db30: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x15db30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_15db34:
    // 0x15db34: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x15db34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15db38:
    // 0x15db38: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x15db38u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_15db3c:
    // 0x15db3c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15db3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_15db40:
    // 0x15db40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15db40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15db44:
    // 0x15db44: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x15db44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_15db48:
    // 0x15db48: 0xc66c07f0  lwc1        $f12, 0x7F0($s3)
    ctx->pc = 0x15db48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15db4c:
    // 0x15db4c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x15db4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_15db50:
    // 0x15db50: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x15db50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_15db54:
    // 0x15db54: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x15db54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_15db58:
    // 0x15db58: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x15db58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_15db5c:
    // 0x15db5c: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x15db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_15db60:
    // 0x15db60: 0x40f809  jalr        $v0
label_15db64:
    if (ctx->pc == 0x15DB64u) {
        ctx->pc = 0x15DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB60u;
        // 0x15db64: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DB68u;
        goto label_15db68;
    }
    ctx->pc = 0x15DB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15DB68u);
        ctx->pc = 0x15DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB60u;
        // 0x15db64: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DB60u, 0x15DB68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DB68u;
label_15db68:
    // 0x15db68: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x15db68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_15db6c:
    // 0x15db6c: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x15db6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_15db70:
    // 0x15db70: 0x8c708668  lw          $s0, -0x7998($v1)
    ctx->pc = 0x15db70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936168)));
label_15db74:
    // 0x15db74: 0xc059092  jal         func_164248
label_15db78:
    if (ctx->pc == 0x15DB78u) {
        ctx->pc = 0x15DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB74u;
        // 0x15db78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DB7Cu;
        goto label_15db7c;
    }
    ctx->pc = 0x15DB74u;
    SET_GPR_U32(ctx, 31, 0x15DB7Cu);
    ctx->pc = 0x15DB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB74u;
    // 0x15db78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x15DB74u, 0x15DB7Cu)) {
        return;
    }
    ctx->pc = 0x15DB7Cu;
label_15db7c:
    // 0x15db7c: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x15db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_15db80:
    // 0x15db80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15db80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15db84:
    // 0x15db84: 0xc059092  jal         func_164248
label_15db88:
    if (ctx->pc == 0x15DB88u) {
        ctx->pc = 0x15DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB84u;
        // 0x15db88: 0xae370048  sw          $s7, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DB8Cu;
        goto label_15db8c;
    }
    ctx->pc = 0x15DB84u;
    SET_GPR_U32(ctx, 31, 0x15DB8Cu);
    ctx->pc = 0x15DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB84u;
    // 0x15db88: 0xae370048  sw          $s7, 0x48($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x15DB84u, 0x15DB8Cu)) {
        return;
    }
    ctx->pc = 0x15DB8Cu;
label_15db8c:
    // 0x15db8c: 0x8e650054  lw          $a1, 0x54($s3)
    ctx->pc = 0x15db8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_15db90:
    // 0x15db90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15db90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15db94:
    // 0x15db94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15db94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15db98:
    // 0x15db98: 0xc057948  jal         func_15E520
label_15db9c:
    if (ctx->pc == 0x15DB9Cu) {
        ctx->pc = 0x15DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB98u;
        // 0x15db9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBA0u;
        goto label_15dba0;
    }
    ctx->pc = 0x15DB98u;
    SET_GPR_U32(ctx, 31, 0x15DBA0u);
    ctx->pc = 0x15DB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB98u;
    // 0x15db9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15E520u, 0x15DB98u, 0x15DBA0u)) {
        return;
    }
    ctx->pc = 0x15DBA0u;
label_15dba0:
    // 0x15dba0: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x15dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_15dba4:
    // 0x15dba4: 0xae3e004c  sw          $fp, 0x4C($s1)
    ctx->pc = 0x15dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 30));
label_15dba8:
    // 0x15dba8: 0x24120060  addiu       $s2, $zero, 0x60
    ctx->pc = 0x15dba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_15dbac:
    // 0x15dbac: 0x0  nop
    ctx->pc = 0x15dbacu;
    // NOP
label_15dbb0:
    // 0x15dbb0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15dbb4:
    // 0x15dbb4: 0x2921818  mult        $v1, $s4, $s2
    ctx->pc = 0x15dbb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15dbb8:
    // 0x15dbb8: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x15dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15dbbc:
    // 0x15dbbc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x15dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_15dbc0:
    // 0x15dbc0: 0x54640017  bnel        $v1, $a0, . + 4 + (0x17 << 2)
label_15dbc4:
    if (ctx->pc == 0x15DBC4u) {
        ctx->pc = 0x15DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBC0u;
        // 0x15dbc4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBC8u;
        goto label_15dbc8;
    }
    ctx->pc = 0x15DBC0u;
    {
        const bool branch_taken_0x15dbc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15dbc0) {
            ctx->pc = 0x15DBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DBC0u;
            // 0x15dbc4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DC20u;
            goto label_15dc20;
        }
    }
    ctx->pc = 0x15DBC8u;
label_15dbc8:
    // 0x15dbc8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x15dbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_15dbcc:
    // 0x15dbcc: 0x8c4500a8  lw          $a1, 0xA8($v0)
    ctx->pc = 0x15dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_15dbd0:
    // 0x15dbd0: 0x8c908668  lw          $s0, -0x7998($a0)
    ctx->pc = 0x15dbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936168)));
label_15dbd4:
    // 0x15dbd4: 0xc059092  jal         func_164248
label_15dbd8:
    if (ctx->pc == 0x15DBD8u) {
        ctx->pc = 0x15DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBD4u;
        // 0x15dbd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBDCu;
        goto label_15dbdc;
    }
    ctx->pc = 0x15DBD4u;
    SET_GPR_U32(ctx, 31, 0x15DBDCu);
    ctx->pc = 0x15DBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DBD4u;
    // 0x15dbd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x15DBD4u, 0x15DBDCu)) {
        return;
    }
    ctx->pc = 0x15DBDCu;
label_15dbdc:
    // 0x15dbdc: 0x2921818  mult        $v1, $s4, $s2
    ctx->pc = 0x15dbdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15dbe0:
    // 0x15dbe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15dbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15dbe4:
    // 0x15dbe4: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x15dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15dbe8:
    // 0x15dbe8: 0xc059092  jal         func_164248
label_15dbec:
    if (ctx->pc == 0x15DBECu) {
        ctx->pc = 0x15DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBE8u;
        // 0x15dbec: 0x8c4500a4  lw          $a1, 0xA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBF0u;
        goto label_15dbf0;
    }
    ctx->pc = 0x15DBE8u;
    SET_GPR_U32(ctx, 31, 0x15DBF0u);
    ctx->pc = 0x15DBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DBE8u;
    // 0x15dbec: 0x8c4500a4  lw          $a1, 0xA4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x15DBE8u, 0x15DBF0u)) {
        return;
    }
    ctx->pc = 0x15DBF0u;
label_15dbf0:
    // 0x15dbf0: 0x2928018  mult        $s0, $s4, $s2
    ctx->pc = 0x15dbf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_15dbf4:
    // 0x15dbf4: 0x8e650050  lw          $a1, 0x50($s3)
    ctx->pc = 0x15dbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_15dbf8:
    // 0x15dbf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15dbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15dbfc:
    // 0x15dbfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15dbfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15dc00:
    // 0x15dc00: 0x26060060  addiu       $a2, $s0, 0x60
    ctx->pc = 0x15dc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_15dc04:
    // 0x15dc04: 0xc057948  jal         func_15E520
label_15dc08:
    if (ctx->pc == 0x15DC08u) {
        ctx->pc = 0x15DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC04u;
        // 0x15dc08: 0x2663021  addu        $a2, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC0Cu;
        goto label_15dc0c;
    }
    ctx->pc = 0x15DC04u;
    SET_GPR_U32(ctx, 31, 0x15DC0Cu);
    ctx->pc = 0x15DC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC04u;
    // 0x15dc08: 0x2663021  addu        $a2, $s3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15E520u, 0x15DC04u, 0x15DC0Cu)) {
        return;
    }
    ctx->pc = 0x15DC0Cu;
label_15dc0c:
    // 0x15dc0c: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x15dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_15dc10:
    // 0x15dc10: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x15dc10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_15dc14:
    // 0x15dc14: 0xac6200a4  sw          $v0, 0xA4($v1)
    ctx->pc = 0x15dc14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
label_15dc18:
    // 0x15dc18: 0xae1e00ac  sw          $fp, 0xAC($s0)
    ctx->pc = 0x15dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 30));
label_15dc1c:
    // 0x15dc1c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15dc1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_15dc20:
    // 0x15dc20: 0x2e820014  sltiu       $v0, $s4, 0x14
    ctx->pc = 0x15dc20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_15dc24:
    // 0x15dc24: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
label_15dc28:
    if (ctx->pc == 0x15DC28u) {
        ctx->pc = 0x15DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC24u;
        // 0x15dc28: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC2Cu;
        goto label_15dc2c;
    }
    ctx->pc = 0x15DC24u;
    {
        const bool branch_taken_0x15dc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC24u;
        // 0x15dc28: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc24) {
            ctx->pc = 0x15DA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15da28;
        }
    }
    ctx->pc = 0x15DC2Cu;
label_15dc2c:
    // 0x15dc2c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x15dc2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_15dc30:
    // 0x15dc30: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x15dc30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_15dc34:
    // 0x15dc34: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x15dc34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_15dc38:
    // 0x15dc38: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x15dc38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_15dc3c:
    // 0x15dc3c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x15dc3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_15dc40:
    // 0x15dc40: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x15dc40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15dc44:
    // 0x15dc44: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x15dc44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15dc48:
    // 0x15dc48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15dc48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15dc4c:
    // 0x15dc4c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x15dc4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15dc50:
    // 0x15dc50: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15dc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15dc54:
    // 0x15dc54: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x15dc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15dc58:
    // 0x15dc58: 0x3e00008  jr          $ra
label_15dc5c:
    if (ctx->pc == 0x15DC5Cu) {
        ctx->pc = 0x15DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC58u;
        // 0x15dc5c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC60u;
        goto label_fallthrough_0x15dc58;
    }
    ctx->pc = 0x15DC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC58u;
        // 0x15dc5c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15dc58:
    ctx->pc = 0x15DC60u;
}
