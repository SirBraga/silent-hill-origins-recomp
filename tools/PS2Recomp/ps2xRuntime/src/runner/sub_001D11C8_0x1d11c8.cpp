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

// Function: sub_001D11C8
// Address: 0x1d11c8 - 0x1d12c8
void sub_001D11C8_0x1d11c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D11C8_0x1d11c8");
#endif

    switch (ctx->pc) {
        case 0x1d1248u: goto label_1d1248;
        case 0x1d1268u: goto label_1d1268;
        case 0x1d127cu: goto label_1d127c;
        case 0x1d12a8u: goto label_1d12a8;
        default: break;
    }

    ctx->pc = 0x1d11c8u;

    // 0x1d11c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d11c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d11cc: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x1d11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1d11d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d11d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d11d4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d11d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d11d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d11d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d11dc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1d11dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1d11e0: 0x2429818  mult        $s3, $s2, $v0
    ctx->pc = 0x1d11e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x1d11e4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1d11e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1d11e8: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x1d11e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
    // 0x1d11ec: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d11f0: 0x8e849b18  lw          $a0, -0x64E8($s4)
    ctx->pc = 0x1d11f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339B18u));
    // 0x1d11f4: 0x8c459b30  lw          $a1, -0x64D0($v0)
    ctx->pc = 0x1d11f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x339B30u));
    // 0x1d11f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1d11f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1d11fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1200: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1d1200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1d1204: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1d1204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1d1208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d120c: 0x24910040  addiu       $s1, $a0, 0x40
    ctx->pc = 0x1d120cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1d1210: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1210u;
    {
        const bool branch_taken_0x1d1210 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1210u;
        // 0x1d1214: 0xac629b48  sw          $v0, -0x64B8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1210) {
            ctx->pc = 0x1D122Cu;
            goto label_1d122c;
        }
    }
    ctx->pc = 0x1D1218u;
    // 0x1d1218: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d1218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d121c: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D121Cu;
    {
        const bool branch_taken_0x1d121c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D121Cu;
        // 0x1d1220: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d121c) {
            ctx->pc = 0x1D1250u;
            goto label_1d1250;
        }
    }
    ctx->pc = 0x1D1224u;
    // 0x1d1224: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1D1224u;
    {
        const bool branch_taken_0x1d1224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1224u;
        // 0x1d1228: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1224) {
            ctx->pc = 0x1D12B0u;
            goto label_1d12b0;
        }
    }
    ctx->pc = 0x1D122Cu;
label_1d122c:
    // 0x1d122c: 0x80820040  lb          $v0, 0x40($a0)
    ctx->pc = 0x1d122cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1d1230: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D1230u;
    {
        const bool branch_taken_0x1d1230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1230u;
        // 0x1d1234: 0x3c05001d  lui         $a1, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1230) {
            ctx->pc = 0x1D12A8u;
            goto label_1d12a8;
        }
    }
    ctx->pc = 0x1D1238u;
    // 0x1d1238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d123c: 0x24a52018  addiu       $a1, $a1, 0x2018
    ctx->pc = 0x1d123cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8216));
    // 0x1d1240: 0xc074bcc  jal         func_1D2F30
    ctx->pc = 0x1D1240u;
    SET_GPR_U32(ctx, 31, 0x1D1248u);
    ctx->pc = 0x1D1244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1240u;
    // 0x1d1244: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2F30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2F30u, 0x1D1240u, 0x1D1248u)) {
        return;
    }
    ctx->pc = 0x1D1248u;
label_1d1248:
    // 0x1d1248: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D1248u;
    {
        const bool branch_taken_0x1d1248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1248u;
        // 0x1d124c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1248) {
            ctx->pc = 0x1D12ACu;
            goto label_1d12ac;
        }
    }
    ctx->pc = 0x1D1250u;
label_1d1250:
    // 0x1d1250: 0x80820040  lb          $v0, 0x40($a0)
    ctx->pc = 0x1d1250u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1d1254: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D1254u;
    {
        const bool branch_taken_0x1d1254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1254u;
        // 0x1d1258: 0x8e849b18  lw          $a0, -0x64E8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1254) {
            ctx->pc = 0x1D1280u;
            goto label_1d1280;
        }
    }
    ctx->pc = 0x1D125Cu;
    // 0x1d125c: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1d125cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x1d1260: 0xc07cdd4  jal         func_1F3750
    ctx->pc = 0x1D1260u;
    SET_GPR_U32(ctx, 31, 0x1D1268u);
    ctx->pc = 0x1D1264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1260u;
    // 0x1d1264: 0x26100cc0  addiu       $s0, $s0, 0xCC0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3750u, 0x1D1260u, 0x1D1268u)) {
        return;
    }
    ctx->pc = 0x1D1268u;
label_1d1268:
    // 0x1d1268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d126c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d126cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1270: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d1270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1274: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1D1274u;
    SET_GPR_U32(ctx, 31, 0x1D127Cu);
    ctx->pc = 0x1D1278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1274u;
    // 0x1d1278: 0x26470001  addiu       $a3, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1D1274u, 0x1D127Cu)) {
        return;
    }
    ctx->pc = 0x1D127Cu;
label_1d127c:
    // 0x1d127c: 0x8e849b18  lw          $a0, -0x64E8($s4)
    ctx->pc = 0x1d127cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941464)));
label_1d1280:
    // 0x1d1280: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d1280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d1284: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d1284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d1288: 0x3c07001d  lui         $a3, 0x1D
    ctx->pc = 0x1d1288u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)29 << 16));
    // 0x1d128c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1d128cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1d1290: 0x8c459b40  lw          $a1, -0x64C0($v0)
    ctx->pc = 0x1d1290u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x339B40u));
    // 0x1d1294: 0x8c669b44  lw          $a2, -0x64BC($v1)
    ctx->pc = 0x1d1294u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x339B44u));
    // 0x1d1298: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1d1298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1d129c: 0x24e72018  addiu       $a3, $a3, 0x2018
    ctx->pc = 0x1d129cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8216));
    // 0x1d12a0: 0xc074be0  jal         func_1D2F80
    ctx->pc = 0x1D12A0u;
    SET_GPR_U32(ctx, 31, 0x1D12A8u);
    ctx->pc = 0x1D12A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D12A0u;
    // 0x1d12a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2F80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2F80u, 0x1D12A0u, 0x1D12A8u)) {
        return;
    }
    ctx->pc = 0x1D12A8u;
label_1d12a8:
    // 0x1d12a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1d12a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d12ac:
    // 0x1d12ac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d12acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d12b0:
    // 0x1d12b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d12b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d12b4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1d12b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d12b8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1d12b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d12bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d12bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d12c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D12C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12C0u;
        // 0x1d12c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D12C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D12C8u;
}
